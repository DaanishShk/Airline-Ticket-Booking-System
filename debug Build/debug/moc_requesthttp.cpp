/****************************************************************************
** Meta object code from reading C++ file 'requesthttp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/requesthttp.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requesthttp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_requestHTTP_t {
    const uint offsetsAndSize[42];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_requestHTTP_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_requestHTTP_t qt_meta_stringdata_requestHTTP = {
    {
QT_MOC_LITERAL(0, 11), // "requestHTTP"
QT_MOC_LITERAL(12, 3), // "get"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 11), // "information"
QT_MOC_LITERAL(29, 4), // "post"
QT_MOC_LITERAL(34, 9), // "readyRead"
QT_MOC_LITERAL(44, 22), // "authenticationRequired"
QT_MOC_LITERAL(67, 14), // "QNetworkReply*"
QT_MOC_LITERAL(82, 5), // "reply"
QT_MOC_LITERAL(88, 15), // "QAuthenticator*"
QT_MOC_LITERAL(104, 13), // "authenticator"
QT_MOC_LITERAL(118, 9), // "encrypted"
QT_MOC_LITERAL(128, 8), // "finished"
QT_MOC_LITERAL(137, 34), // "preSharedKeyAuthenticationReq..."
QT_MOC_LITERAL(172, 30), // "QSslPreSharedKeyAuthenticator*"
QT_MOC_LITERAL(203, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(231, 13), // "QNetworkProxy"
QT_MOC_LITERAL(245, 5), // "proxy"
QT_MOC_LITERAL(251, 9), // "sslErrors"
QT_MOC_LITERAL(261, 16), // "QList<QSslError>"
QT_MOC_LITERAL(278, 6) // "errors"

    },
    "requestHTTP\0get\0\0information\0post\0"
    "readyRead\0authenticationRequired\0"
    "QNetworkReply*\0reply\0QAuthenticator*\0"
    "authenticator\0encrypted\0finished\0"
    "preSharedKeyAuthenticationRequired\0"
    "QSslPreSharedKeyAuthenticator*\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0sslErrors\0QList<QSslError>\0"
    "errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_requestHTTP[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    0 /* Public */,
       4,    2,   71,    2, 0x0a,    2 /* Public */,
       5,    0,   76,    2, 0x08,    5 /* Private */,
       6,    2,   77,    2, 0x08,    6 /* Private */,
      11,    1,   82,    2, 0x08,    9 /* Private */,
      12,    1,   85,    2, 0x08,   11 /* Private */,
      13,    2,   88,    2, 0x08,   13 /* Private */,
      15,    2,   93,    2, 0x08,   16 /* Private */,
      18,    2,   98,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 14,    8,   10,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 9,   17,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 19,    8,   20,

       0        // eod
};

void requestHTTP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<requestHTTP *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->get((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->post((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->readyRead(); break;
        case 3: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 4: _t->encrypted((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->preSharedKeyAuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QSslPreSharedKeyAuthenticator*(*)>(_a[2]))); break;
        case 7: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 8: _t->sslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkProxy >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject requestHTTP::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_requestHTTP.offsetsAndSize,
    qt_meta_data_requestHTTP,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_requestHTTP_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<QSslPreSharedKeyAuthenticator *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>, QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>


>,
    nullptr
} };


const QMetaObject *requestHTTP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *requestHTTP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_requestHTTP.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int requestHTTP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
