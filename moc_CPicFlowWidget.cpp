/****************************************************************************
** Meta object code from reading C++ file 'CPicFlowWidget.hpp'
**
** Created: Thu Apr 5 07:01:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CPicFlowWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPicFlowWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPicFlowWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      36,   15,   15,   15, 0x05,
      72,   57,   15,   15, 0x05,
     105,   90,   15,   15, 0x05,
     139,  123,   15,   15, 0x05,
     171,  157,   15,   15, 0x05,
     199,  185,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     231,  221,   15,   15, 0x0a,
     262,  256,   15,   15, 0x0a,
     277,   15,   15,   15, 0x0a,
     297,   15,   15,   15, 0x0a,
     318,   15,   15,   15, 0x0a,
     338,  185,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CPicFlowWidget[] = {
    "CPicFlowWidget\0\0LeftArrowReleased()\0"
    "RightArrowReleased()\0scrollbarvalue\0"
    "scrollBarVal(int)\0leftarrowvalue\0"
    "DecrementVal(int)\0rightarrowvalue\0"
    "IncrementVal(int)\0startingvalue\0"
    "StartVal(int)\0ItemClickedHF\0"
    "SetItemClickedHF(int)\0ImageList\0"
    "GetImages(QList<QImage>)\0index\0"
    "ShowSlide(int)\0moveScrollBarLeft()\0"
    "moveScrollBarRight()\0scrollBarReleased()\0"
    "GetItemClickedHF(int)\0"
};

const QMetaObject CPicFlowWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CPicFlowWidget,
      qt_meta_data_CPicFlowWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPicFlowWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPicFlowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPicFlowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPicFlowWidget))
        return static_cast<void*>(const_cast< CPicFlowWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CPicFlowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: LeftArrowReleased(); break;
        case 1: RightArrowReleased(); break;
        case 2: scrollBarVal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: DecrementVal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: IncrementVal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: StartVal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: SetItemClickedHF((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: GetImages((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 8: ShowSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: moveScrollBarLeft(); break;
        case 10: moveScrollBarRight(); break;
        case 11: scrollBarReleased(); break;
        case 12: GetItemClickedHF((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CPicFlowWidget::LeftArrowReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CPicFlowWidget::RightArrowReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CPicFlowWidget::scrollBarVal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CPicFlowWidget::DecrementVal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CPicFlowWidget::IncrementVal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CPicFlowWidget::StartVal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CPicFlowWidget::SetItemClickedHF(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
