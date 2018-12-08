/****************************************************************************
** Meta object code from reading C++ file 'navtechsetup.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/navtechsetup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navtechsetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_navtechsetup_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_navtechsetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_navtechsetup_t qt_meta_stringdata_navtechsetup = {
    {
QT_MOC_LITERAL(0, 0, 12), // "navtechsetup"
QT_MOC_LITERAL(1, 13, 20), // "reloadNavtechServers"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "addNavtechServer"
QT_MOC_LITERAL(4, 52, 19), // "removeNavtechServer"
QT_MOC_LITERAL(5, 72, 20), // "getinfoNavtechServer"
QT_MOC_LITERAL(6, 93, 11), // "showButtons"
QT_MOC_LITERAL(7, 105, 4), // "show"
QT_MOC_LITERAL(8, 110, 16) // "showNavtechIntro"

    },
    "navtechsetup\0reloadNavtechServers\0\0"
    "addNavtechServer\0removeNavtechServer\0"
    "getinfoNavtechServer\0showButtons\0show\0"
    "showNavtechIntro"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_navtechsetup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       6,    0,   56,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void navtechsetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        navtechsetup *_t = static_cast<navtechsetup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadNavtechServers(); break;
        case 1: _t->addNavtechServer(); break;
        case 2: _t->removeNavtechServer(); break;
        case 3: _t->getinfoNavtechServer(); break;
        case 4: _t->showButtons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showButtons(); break;
        case 6: _t->showNavtechIntro(); break;
        default: ;
        }
    }
}

const QMetaObject navtechsetup::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_navtechsetup.data,
      qt_meta_data_navtechsetup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *navtechsetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *navtechsetup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_navtechsetup.stringdata0))
        return static_cast<void*>(const_cast< navtechsetup*>(this));
    return QDialog::qt_metacast(_clname);
}

int navtechsetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
