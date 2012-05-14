/****************************************************************************
** Meta object code from reading C++ file 'CPictureFlowWidget.hpp'
**
** Created: Thu Apr 5 07:01:47 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CPictureFlowWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPictureFlowWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CPictureFlowWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       4,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   20,   19,   19, 0x05,
      61,   50,   19,   19, 0x05,
      84,   19,   19,   19, 0x05,
      95,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,  107,   19,   19, 0x0a,
     137,  130,   19,   19, 0x0a,
     167,  155,   19,   19, 0x0a,
     201,  188,   19,   19, 0x0a,
     223,   20,   19,   19, 0x0a,
     243,   19,   19,   19, 0x0a,
     251,   19,   19,   19, 0x0a,
     266,   19,   19,   19, 0x0a,
     277,   20,   19,   19, 0x0a,
     292,   19,   19,   19, 0x0a,
     301,   19,   19,   19, 0x0a,
     317,   19,   19,   19, 0x08,

 // properties: name, type, flags
     342,  335, 0x43095103,
     364,  358, 0x15095103,
     378,  374, 0x02095001,
     389,  374, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_CPictureFlowWidget[] = {
    "CPictureFlowWidget\0\0index\0"
    "centerIndexChanged(int)\0slideindex\0"
    "centerItemClicked(int)\0moveLeft()\0"
    "moveRight()\0image\0addSlide(QImage)\0"
    "pixmap\0addSlide(QPixmap)\0index,image\0"
    "setSlide(int,QImage)\0index,pixmap\0"
    "setSlide(int,QPixmap)\0setCenterIndex(int)\0"
    "clear()\0showPrevious()\0showNext()\0"
    "showSlide(int)\0render()\0triggerRender()\0"
    "updateAnimation()\0QColor\0backgroundColor\0"
    "QSize\0slideSize\0int\0slideCount\0"
    "centerIndex\0"
};

const QMetaObject CPictureFlowWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CPictureFlowWidget,
      qt_meta_data_CPictureFlowWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CPictureFlowWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CPictureFlowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CPictureFlowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPictureFlowWidget))
        return static_cast<void*>(const_cast< CPictureFlowWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CPictureFlowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: centerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: centerItemClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: moveLeft(); break;
        case 3: moveRight(); break;
        case 4: addSlide((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: addSlide((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 6: setSlide((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 7: setSlide((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 8: setCenterIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: clear(); break;
        case 10: showPrevious(); break;
        case 11: showNext(); break;
        case 12: showSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: render(); break;
        case 14: triggerRender(); break;
        case 15: updateAnimation(); break;
        default: ;
        }
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = backgroundColor(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = slideSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = slideCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = centerIndex(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setSlideSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: setCenterIndex(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CPictureFlowWidget::centerIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CPictureFlowWidget::centerItemClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CPictureFlowWidget::moveLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CPictureFlowWidget::moveRight()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
