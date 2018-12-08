/****************************************************************************
** Meta object code from reading C++ file 'getaddresstoreceive.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/getaddresstoreceive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getaddresstoreceive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_getAddressToReceive_t {
    QByteArrayData data[9];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_getAddressToReceive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_getAddressToReceive_t qt_meta_stringdata_getAddressToReceive = {
    {
QT_MOC_LITERAL(0, 0, 19), // "getAddressToReceive"
QT_MOC_LITERAL(1, 20, 14), // "requestPayment"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "requestAddressHistory"
QT_MOC_LITERAL(4, 58, 13), // "getNewAddress"
QT_MOC_LITERAL(5, 72, 6), // "showQR"
QT_MOC_LITERAL(6, 79, 18), // "showRequestPayment"
QT_MOC_LITERAL(7, 98, 15), // "copyToClipboard"
QT_MOC_LITERAL(8, 114, 18) // "showAddressHistory"

    },
    "getAddressToReceive\0requestPayment\0\0"
    "requestAddressHistory\0getNewAddress\0"
    "showQR\0showRequestPayment\0copyToClipboard\0"
    "showAddressHistory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_getAddressToReceive[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void getAddressToReceive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        getAddressToReceive *_t = static_cast<getAddressToReceive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestPayment(); break;
        case 1: _t->requestAddressHistory(); break;
        case 2: _t->getNewAddress(); break;
        case 3: _t->showQR(); break;
        case 4: _t->showRequestPayment(); break;
        case 5: _t->copyToClipboard(); break;
        case 6: _t->showAddressHistory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (getAddressToReceive::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&getAddressToReceive::requestPayment)) {
                *result = 0;
            }
        }
        {
            typedef void (getAddressToReceive::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&getAddressToReceive::requestAddressHistory)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject getAddressToReceive::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_getAddressToReceive.data,
      qt_meta_data_getAddressToReceive,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *getAddressToReceive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *getAddressToReceive::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_getAddressToReceive.stringdata0))
        return static_cast<void*>(const_cast< getAddressToReceive*>(this));
    return QWidget::qt_metacast(_clname);
}

int getAddressToReceive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void getAddressToReceive::requestPayment()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void getAddressToReceive::requestAddressHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
