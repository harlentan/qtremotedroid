/****************************************************************************
** Meta object code from reading C++ file 'qTestWidget.h'
**
** Created: Thu Jun 24 16:45:43 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qTestWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qTestWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qTestWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qTestWidget[] = {
    "qTestWidget\0\0dbl_clicked()\0debugCode()\0"
};

const QMetaObject qTestWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qTestWidget,
      qt_meta_data_qTestWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qTestWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qTestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qTestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qTestWidget))
        return static_cast<void*>(const_cast< qTestWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int qTestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dbl_clicked(); break;
        case 1: debugCode(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qTestWidget::dbl_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE