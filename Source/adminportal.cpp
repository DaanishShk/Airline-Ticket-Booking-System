#include "adminportal.h"
#include "ui_adminportal.h"

adminportal::adminportal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminportal)
{
    ui->setupUi(this);

    access = -1;                                //By default the access is -1 to prevent unauthrized entry

    tableModel = new QSqlTableModel();
    table_name = "booking_details";
    tableModel->setTable(table_name);
    tableModel->select();

    tableModel->setHeaderData(0, Qt::Horizontal, tr("ID"));             //Set headers for the booking table
    tableModel->setHeaderData(1, Qt::Horizontal, tr("FIRST_NAME"));
    tableModel->setHeaderData(2, Qt::Horizontal, tr("LAST_NAME"));
    tableModel->setHeaderData(3, Qt::Horizontal, tr("DATE_OF_BIRTH"));
    tableModel->setHeaderData(4, Qt::Horizontal, tr("EMAIL"));
    tableModel->setHeaderData(5, Qt::Horizontal, tr("PHONE"));
    tableModel->setHeaderData(6, Qt::Horizontal, tr("PAYMENT"));
    tableModel->setHeaderData(7, Qt::Horizontal, tr("OUTBOUND"));
    tableModel->setHeaderData(8, Qt::Horizontal, tr("INBOUND"));
    tableModel->setHeaderData(9, Qt::Horizontal, tr("DATE"));
    tableModel->setHeaderData(10, Qt::Horizontal, tr("CARRIER"));
    tableModel->setHeaderData(11, Qt::Horizontal, tr("PRICE"));

    ui->tableView->setModel(tableModel);

    ui->tableLabel->setText("Booking Details");

    editStatus = false;                     //Variable to keep track of edit mode

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //By default the table is set in view mode

    ui->tableView->setSortingEnabled(true);      //Allows column-wise sorting

}

adminportal::~adminportal()
{
    delete ui;
}

void adminportal::on_actionBookings_triggered()
{
    table_name = "booking_details";
    tableModel->setTable(table_name);
    tableModel->select();

    tableModel->setHeaderData(0, Qt::Horizontal, tr("ID"));
    tableModel->setHeaderData(1, Qt::Horizontal, tr("FIRST_NAME"));
    tableModel->setHeaderData(2, Qt::Horizontal, tr("LAST_NAME"));
    tableModel->setHeaderData(3, Qt::Horizontal, tr("DATE_OF BIRTH"));
    tableModel->setHeaderData(4, Qt::Horizontal, tr("EMAIL"));
    tableModel->setHeaderData(5, Qt::Horizontal, tr("PHONE"));
    tableModel->setHeaderData(6, Qt::Horizontal, tr("PAYMENT"));
    tableModel->setHeaderData(7, Qt::Horizontal, tr("OUTBOUND"));
    tableModel->setHeaderData(8, Qt::Horizontal, tr("INBOUND"));
    tableModel->setHeaderData(9, Qt::Horizontal, tr("DATE"));
    tableModel->setHeaderData(10, Qt::Horizontal, tr("CARRIER"));
    tableModel->setHeaderData(11, Qt::Horizontal, tr("PRICE"));

    ui->tableLabel->setText("Booking Details");
}


void adminportal::on_actionEmployees_triggered()
{
    table_name = "employee";
    tableModel->setTable(table_name);
    tableModel->select();

    tableModel->setHeaderData(0, Qt::Horizontal, tr("EMPLOYEE_ID"));
    tableModel->setHeaderData(1, Qt::Horizontal, tr("NAME"));
    tableModel->setHeaderData(2, Qt::Horizontal, tr("POSITIONS"));
    tableModel->setHeaderData(3, Qt::Horizontal, tr("ACCESS"));
    tableModel->setHeaderData(4, Qt::Horizontal, tr("PASSWORD"));

    ui->tableLabel->setText("Employees");
}


void adminportal::on_actionAirports_triggered()
{
    table_name = "airport";
    tableModel->setTable(table_name);
    tableModel->select();

    tableModel->setHeaderData(0, Qt::Horizontal, tr("LOCATION"));
    tableModel->setHeaderData(1, Qt::Horizontal, tr("CODE"));

    ui->tableLabel->setText("Airports");
}





void adminportal::on_addRow_clicked()
{
    QSqlQuery qry;
    if(table_name.compare("booking_details")==0)
        qry.prepare("INSERT INTO booking_details (first_name,last_name,date_of_birth,email,phone,payment,outbound,inbound,date,carrier,price)"
                "VALUES ('fn','ln','dob','email','phone','pay','out','in','dt','carr','pr')");//FROM and TO are keywords, cannot be used directly (``for columns)

    else if(table_name.compare("employee")==0)
        qry.prepare("INSERT INTO employee (employee_id,position,access)"
                "VALUES (0,'pos','acc')");
    else
        qry.prepare("INSERT INTO airport (location,code)"
                "VALUES ('loc','cod')");

    if(qry.exec())
    {
        QMessageBox::information(this,"Inserted","Data Inserted Successfully");
    }
    else
    {
        qInfo()<<qry.lastError();
        QMessageBox::information(this,"Failed","Insertion Unsuccessful");
    }
    tableModel->select();
}


void adminportal::on_deleteRow_clicked()
{
    tableModel->removeRow(ui->tableView->currentIndex().row());
    tableModel->select();
}


void adminportal::on_actionEdit_triggered()
{
    if(editStatus)
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    else
        ui->tableView->setEditTriggers(QAbstractItemView::AllEditTriggers);
    editStatus = !editStatus;
}


void adminportal::on_actionRefresh_triggered()
{
    tableModel->select();
}


void adminportal::on_actionSearcj_triggered()
{
    bool ok;
        QString column = QInputDialog::getText(this, "Search Table",
                                             "Enter search column:", QLineEdit::Normal,
                                             "", &ok);
        if(!ok)
            return;

        QString term = QInputDialog::getText(this, "Search Table",
                                             "Enter search term:", QLineEdit::Normal,
                                             "", &ok);

        if (ok && !column.isEmpty() && !term.isEmpty())
        {
            qInfo()<<"`"+column+"`" + "='" + term +"'";
            tableModel->setFilter("`"+column+"`" + "='" + term +"'");
            ui->tableLabel->setText("Search Result");
        }

}


void adminportal::on_doneBtn_clicked()
{
    QMainWindow::close();
}

void adminportal::setPortalOptions()
{
    if (access == 2)
    {
        ui->toolBar->actions().at(1)->setVisible(false);
    }

    else if(access == 3)
    {
        ui->toolBar->actions().at(1)->setVisible(false);
        ui->toolBar->actions().at(2)->setVisible(false);
        ui->toolBar->actions().at(6)->setVisible(false);

        ui->deleteRow->setEnabled(false);
    }
    qInfo()<<"Portal Options set";
}

int adminportal::checkAcessLevel(QString pass)
{
    QSqlQuery qry;
    qry.prepare(QString("SELECT access FROM employee WHERE `password` = '"+pass+"'"));//`` for keyword column names

    qInfo()<<"Query execution";

    if(qry.exec())
    {
        qInfo()<<qry.size();
        if(qry.size()==0)
        {
            access = -1;
        }
        else if(qry.size()==1)
        {
            qry.first();
            access = qry.value(0).toInt();
            qInfo()<<access;
            setPortalOptions();
        }
    }
    else
        qInfo()<<qry.lastError();

    return access;
}

