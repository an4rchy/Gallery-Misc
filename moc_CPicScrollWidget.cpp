/****************************************************************************
** Meta object code from reading C++ file 'CPicScrollWidget.hpp'
**
** Created: Thu Apr 5 07:01:47 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CPicScrollWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPicScrollWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPicScrollWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   18,   17,   17, 0x05,
      99,   89,   17,   17, 0x05,
     138,  124,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     160,   89,   17,   17, 0x0a,
     185,   18,   17,   17, 0x0a,
     228,  124,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CPicScrollWidget[] = {
    "CPicScrollWidget\0\0MaxItems,ItemNames,StartVal\0"
    "SetInitialConditions(int,QStringList&,int)\0"
    "ImageList\0SetImages(QList<QImage>)\0"
    "ItemClickedHS\0SetItemClickedHS(int)\0"
    "GetImages(QList<QImage>)\0"
    "GetInitialConditions(int,QStringList&,int)\0"
    "GetItemClickedHS(int)\0"
};

const QMetaObject CPicScrollWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CPicScrollWidget,
      qt_meta_data_CPicScrollWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPicScrollWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPicScrollWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPicScrollWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPicScrollWidget))
        return static_cast<void*>(const_cast< CPicScrollWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CPicScrollWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SetInitialConditions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: SetImages((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 2: SetItemClickedHS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: GetImages((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 4: GetInitialConditions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: GetItemClickedHS((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CPicScrollWidget::SetInitialConditions(int _t1, QStringList & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CPicScrollWidget::SetImages(QList<QImage> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CPicScrollWidget::SetItemClickedHS(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
