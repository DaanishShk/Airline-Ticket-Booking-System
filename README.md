# Airline-Ticket-Booking-System

## INTRODUCTION 
The aim of the project is to provide an airline ticket reservation company with a booking and management software for their operations. The flight details and information will be provided by connecting to an API service (SkyScanner) and all the booking data will be stored in a MySQL database stored locally for future references or editing. The program is written in C++ and the GUI was built with the help of libraries provided by the Qt framework.

![Screenshot](../master/Readme_images/HomePage.png)

## INSTRUCTIONS

1) Open the .pro file in the source folder and configure to open the project in Qt Creator for making changes to the code.

2) Get an API key for SkyScanner to get the flight info (I got my key for RapidAPI). Refer the SkyScanner documentation for the format of get and post requests. link here https://skyscanner.github.io/slate/#api-documentation

3) Setup the local database using the files in the scripts folder

4) Build the program and test

A debug build of the program is also uploaded along with the source files. If you only want to run the application without meddling with the code then step 1 is not necessary but step 2 & 3 are still mandatory as the program is built around these two. Ofcourse you are free to make any changes to suit your needs, but out of the box the application needs the API and database connection to work fully.

## RESOURCES

UI icons by amitjakhu https://github.com/amitjakhu/dripicons

Home page background https://wallpapercave.com/w/NcdUsHW

<div>Main window icon made by <a href="https://www.freepik.com" title="Freepik">Freepik</a> from <a href="https://www.flaticon.com/" title="Flaticon">www.flaticon.com</a></div>


Booking page background by Magical-Mama on  <a href="https://www.deviantart.com/magical-mama/art/Simple-Cloud-Background-603268376" title="deviantart.com">deviantart</a>

Booking page airplane <a href="https://www.kindpng.com/imgv/bbwbi_the-flying-plane-aircraft-vector-in-airplane-clipart/" title="kindpng">kindpng</a>

Server image https://icons8.com/icon/65371/server

## IMPLEMENTATION DETAILS
The project is a standalone desktop application written in C++ with an interactive user interface. The IDE used was Qt Creator. The API service is provided by SkyScanner for which the api-key was obtained through RapidAPI. The local database was created using MySQL Workbench which stores the company data, a connection to the MySQL server is made to achieve this.

When the user launches the program, he is greeted with the home screen that has a box which contains the options for selecting the outbound and inbound locations for the flight and a calendar for selecting the travel date. Before proceeding the user must make sure that the settings for the local sever connection and the API are correct and up-to-date, otherwise the program will be unable to fetch and store information. Options to change settings are provided in the top left on the menu-bar under ‘Options’.

Now we can issue our search flight request to the API. The request follows the HTTP protocol and it is of the type ‘get’. The data received is in JSON format with UTF-8 encoding, this is converted to object form and the fields MinPrice and Carrier are extracted. The API uses cached prices for the data which means the minimum price that was registered within the last 14 days for our route will be returned. If no search was made we will not get these fields leading to a blank flight details dialog.

A processing dialog will appear after pressing the search flight button. The ‘continue’ button will not be enabled until the response has been received by our application. Once enabled, clicking it will open the flight details dialog window. Over here, the name of the carrier, the route airport locations, date of departure and price of ticket will be displayed. Below these details several line-edits are present for filling in the passenger info which includes first name, last name, email, and phone, date of birth & mode of payment. If any of these fields are unfilled when the ‘Confirm Booking’ button is pressed, a ‘Required’ text in red will be displayed next to the corresponding field.

After filling up all the data and continuing, the booking process is complete and a booking confirmed message is displayed. The window can be closed by pressing the ‘Home’ button. All this data is store in the database we created which can be accessed using the ‘Admin Login’ in the ‘Options’ menu.

On pressing the ‘Admin Login’ button, an input dialog window will appear asking for a password to proceed. Once logged in, a table with all data in three tables will be accessible, namely booking_details, employee and airport. The data can be edited by pressing the edit icon in the toolbar at the bottom. Rows can be added or removed and data can be ordered by any column. Also a search can be performed to find specific entries.

The admin portal allows three levels of access, a level 1 employee has all the above mentioned functions at his disposal, level 2 employees cannot view the employee table while level 3 employees can only view the bookings table with the delete row option disabled. 
  
The ‘About’ drop-down in the menu-bar contains two options, one displays info about the application and the second ‘Version’ displays version information of Qt. 

