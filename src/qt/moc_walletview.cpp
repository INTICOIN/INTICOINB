/****************************************************************************
** Meta object code from reading C++ file 'walletview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletView_t {
    QByteArrayData data[59];
    char stringdata0[843];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletView_t qt_meta_stringdata_WalletView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WalletView"
QT_MOC_LITERAL(1, 11, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "message"
QT_MOC_LITERAL(4, 42, 5), // "title"
QT_MOC_LITERAL(5, 48, 5), // "style"
QT_MOC_LITERAL(6, 54, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(7, 78, 6), // "status"
QT_MOC_LITERAL(8, 85, 19), // "incomingTransaction"
QT_MOC_LITERAL(9, 105, 4), // "date"
QT_MOC_LITERAL(10, 110, 4), // "unit"
QT_MOC_LITERAL(11, 115, 7), // "CAmount"
QT_MOC_LITERAL(12, 123, 6), // "amount"
QT_MOC_LITERAL(13, 130, 4), // "type"
QT_MOC_LITERAL(14, 135, 7), // "address"
QT_MOC_LITERAL(15, 143, 5), // "label"
QT_MOC_LITERAL(16, 149, 18), // "openAddressHistory"
QT_MOC_LITERAL(17, 168, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(18, 185, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(19, 201, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(20, 222, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(21, 240, 4), // "addr"
QT_MOC_LITERAL(22, 245, 22), // "gotoRequestPaymentPage"
QT_MOC_LITERAL(23, 268, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(24, 287, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(25, 308, 21), // "processNewTransaction"
QT_MOC_LITERAL(26, 330, 6), // "parent"
QT_MOC_LITERAL(27, 337, 5), // "start"
QT_MOC_LITERAL(28, 343, 13), // "encryptWallet"
QT_MOC_LITERAL(29, 357, 12), // "backupWallet"
QT_MOC_LITERAL(30, 370, 16), // "changePassphrase"
QT_MOC_LITERAL(31, 387, 12), // "unlockWallet"
QT_MOC_LITERAL(32, 400, 19), // "unlockWalletStaking"
QT_MOC_LITERAL(33, 420, 10), // "lockWallet"
QT_MOC_LITERAL(34, 431, 16), // "importPrivateKey"
QT_MOC_LITERAL(35, 448, 28), // "exportMasterPrivateKeyAction"
QT_MOC_LITERAL(36, 477, 20), // "usedSendingAddresses"
QT_MOC_LITERAL(37, 498, 22), // "usedReceivingAddresses"
QT_MOC_LITERAL(38, 521, 22), // "updateEncryptionStatus"
QT_MOC_LITERAL(39, 544, 12), // "showProgress"
QT_MOC_LITERAL(40, 557, 9), // "nProgress"
QT_MOC_LITERAL(41, 567, 20), // "setStatusTitleBlocks"
QT_MOC_LITERAL(42, 588, 4), // "text"
QT_MOC_LITERAL(43, 593, 25), // "setStatusTitleConnections"
QT_MOC_LITERAL(44, 619, 14), // "setStatusTitle"
QT_MOC_LITERAL(45, 634, 15), // "setVotingStatus"
QT_MOC_LITERAL(46, 650, 26), // "showStatusTitleConnections"
QT_MOC_LITERAL(47, 677, 26), // "hideStatusTitleConnections"
QT_MOC_LITERAL(48, 704, 21), // "showStatusTitleBlocks"
QT_MOC_LITERAL(49, 726, 21), // "hideStatusTitleBlocks"
QT_MOC_LITERAL(50, 748, 15), // "showLockStaking"
QT_MOC_LITERAL(51, 764, 16), // "setStakingStatus"
QT_MOC_LITERAL(52, 781, 15), // "setStakingStats"
QT_MOC_LITERAL(53, 797, 3), // "day"
QT_MOC_LITERAL(54, 801, 4), // "week"
QT_MOC_LITERAL(55, 806, 5), // "month"
QT_MOC_LITERAL(56, 812, 4), // "year"
QT_MOC_LITERAL(57, 817, 3), // "all"
QT_MOC_LITERAL(58, 821, 21) // "requestAddressHistory"

    },
    "WalletView\0showNormalIfMinimized\0\0"
    "message\0title\0style\0encryptionStatusChanged\0"
    "status\0incomingTransaction\0date\0unit\0"
    "CAmount\0amount\0type\0address\0label\0"
    "openAddressHistory\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoRequestPaymentPage\0"
    "gotoSignMessageTab\0gotoVerifyMessageTab\0"
    "processNewTransaction\0parent\0start\0"
    "encryptWallet\0backupWallet\0changePassphrase\0"
    "unlockWallet\0unlockWalletStaking\0"
    "lockWallet\0importPrivateKey\0"
    "exportMasterPrivateKeyAction\0"
    "usedSendingAddresses\0usedReceivingAddresses\0"
    "updateEncryptionStatus\0showProgress\0"
    "nProgress\0setStatusTitleBlocks\0text\0"
    "setStatusTitleConnections\0setStatusTitle\0"
    "setVotingStatus\0showStatusTitleConnections\0"
    "hideStatusTitleConnections\0"
    "showStatusTitleBlocks\0hideStatusTitleBlocks\0"
    "showLockStaking\0setStakingStatus\0"
    "setStakingStats\0day\0week\0month\0year\0"
    "all\0requestAddressHistory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x06 /* Public */,
       3,    3,  215,    2, 0x06 /* Public */,
       6,    1,  222,    2, 0x06 /* Public */,
       8,    6,  225,    2, 0x06 /* Public */,
      16,    0,  238,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  239,    2, 0x0a /* Public */,
      18,    0,  240,    2, 0x0a /* Public */,
      19,    0,  241,    2, 0x0a /* Public */,
      20,    1,  242,    2, 0x0a /* Public */,
      20,    0,  245,    2, 0x2a /* Public | MethodCloned */,
      22,    0,  246,    2, 0x0a /* Public */,
      23,    1,  247,    2, 0x0a /* Public */,
      23,    0,  250,    2, 0x2a /* Public | MethodCloned */,
      24,    1,  251,    2, 0x0a /* Public */,
      24,    0,  254,    2, 0x2a /* Public | MethodCloned */,
      25,    3,  255,    2, 0x0a /* Public */,
      28,    1,  262,    2, 0x0a /* Public */,
      29,    0,  265,    2, 0x0a /* Public */,
      30,    0,  266,    2, 0x0a /* Public */,
      31,    0,  267,    2, 0x0a /* Public */,
      32,    0,  268,    2, 0x0a /* Public */,
      33,    0,  269,    2, 0x0a /* Public */,
      34,    0,  270,    2, 0x0a /* Public */,
      35,    0,  271,    2, 0x0a /* Public */,
      36,    0,  272,    2, 0x0a /* Public */,
      37,    0,  273,    2, 0x0a /* Public */,
      38,    0,  274,    2, 0x0a /* Public */,
      39,    2,  275,    2, 0x0a /* Public */,
      41,    1,  280,    2, 0x0a /* Public */,
      43,    1,  283,    2, 0x0a /* Public */,
      44,    1,  286,    2, 0x0a /* Public */,
      45,    1,  289,    2, 0x0a /* Public */,
      46,    0,  292,    2, 0x0a /* Public */,
      47,    0,  293,    2, 0x0a /* Public */,
      48,    0,  294,    2, 0x0a /* Public */,
      49,    0,  295,    2, 0x0a /* Public */,
      50,    1,  296,    2, 0x0a /* Public */,
      51,    1,  299,    2, 0x0a /* Public */,
      52,    5,  302,    2, 0x0a /* Public */,
      58,    0,  313,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    3,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 11, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   12,   13,   14,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   26,   27,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,   40,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   53,   54,   55,   56,   57,
    QMetaType::Void,

       0        // eod
};

void WalletView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletView *_t = static_cast<WalletView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNormalIfMinimized(); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 4: _t->openAddressHistory(); break;
        case 5: _t->gotoOverviewPage(); break;
        case 6: _t->gotoHistoryPage(); break;
        case 7: _t->gotoReceiveCoinsPage(); break;
        case 8: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->gotoSendCoinsPage(); break;
        case 10: _t->gotoRequestPaymentPage(); break;
        case 11: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->gotoSignMessageTab(); break;
        case 13: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->gotoVerifyMessageTab(); break;
        case 15: _t->processNewTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->backupWallet(); break;
        case 18: _t->changePassphrase(); break;
        case 19: _t->unlockWallet(); break;
        case 20: _t->unlockWalletStaking(); break;
        case 21: _t->lockWallet(); break;
        case 22: _t->importPrivateKey(); break;
        case 23: _t->exportMasterPrivateKeyAction(); break;
        case 24: _t->usedSendingAddresses(); break;
        case 25: _t->usedReceivingAddresses(); break;
        case 26: _t->updateEncryptionStatus(); break;
        case 27: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->setStatusTitleBlocks((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->setStatusTitleConnections((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->setStatusTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->setVotingStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->showStatusTitleConnections(); break;
        case 33: _t->hideStatusTitleConnections(); break;
        case 34: _t->showStatusTitleBlocks(); break;
        case 35: _t->hideStatusTitleBlocks(); break;
        case 36: _t->showLockStaking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->setStakingStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->setStakingStats((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 39: _t->requestAddressHistory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::showNormalIfMinimized)) {
                *result = 0;
            }
        }
        {
            typedef void (WalletView::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::message)) {
                *result = 1;
            }
        }
        {
            typedef void (WalletView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::encryptionStatusChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (WalletView::*_t)(const QString & , int , const CAmount & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::incomingTransaction)) {
                *result = 3;
            }
        }
        {
            typedef void (WalletView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::openAddressHistory)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject WalletView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_WalletView.data,
      qt_meta_data_WalletView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletView.stringdata0))
        return static_cast<void*>(const_cast< WalletView*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int WalletView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void WalletView::showNormalIfMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WalletView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletView::encryptionStatusChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletView::incomingTransaction(const QString & _t1, int _t2, const CAmount & _t3, const QString & _t4, const QString & _t5, const QString & _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletView::openAddressHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
