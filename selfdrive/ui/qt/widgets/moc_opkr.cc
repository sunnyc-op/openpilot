/****************************************************************************
** Meta object code from reading C++ file 'opkr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "opkr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opkr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CLateralControlGroup_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLateralControlGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLateralControlGroup_t qt_meta_stringdata_CLateralControlGroup = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CLateralControlGroup"
QT_MOC_LITERAL(1, 21, 7), // "refresh"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3) // "nID"

    },
    "CLateralControlGroup\0refresh\0\0nID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLateralControlGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void CLateralControlGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CLateralControlGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CLateralControlGroup::staticMetaObject = { {
    &CGroupWidget::staticMetaObject,
    qt_meta_stringdata_CLateralControlGroup.data,
    qt_meta_data_CLateralControlGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CLateralControlGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLateralControlGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLateralControlGroup.stringdata0))
        return static_cast<void*>(this);
    return CGroupWidget::qt_metacast(_clname);
}

int CLateralControlGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGroupWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_CLongControlGroup_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLongControlGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLongControlGroup_t qt_meta_stringdata_CLongControlGroup = {
    {
QT_MOC_LITERAL(0, 0, 17) // "CLongControlGroup"

    },
    "CLongControlGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLongControlGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CLongControlGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CLongControlGroup::staticMetaObject = { {
    &CGroupWidget::staticMetaObject,
    qt_meta_stringdata_CLongControlGroup.data,
    qt_meta_data_CLongControlGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CLongControlGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLongControlGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLongControlGroup.stringdata0))
        return static_cast<void*>(this);
    return CGroupWidget::qt_metacast(_clname);
}

int CLongControlGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGroupWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CPandaGroup_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPandaGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPandaGroup_t qt_meta_stringdata_CPandaGroup = {
    {
QT_MOC_LITERAL(0, 0, 11) // "CPandaGroup"

    },
    "CPandaGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPandaGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CPandaGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CPandaGroup::staticMetaObject = { {
    &CGroupWidget::staticMetaObject,
    qt_meta_stringdata_CPandaGroup.data,
    qt_meta_data_CPandaGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPandaGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPandaGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPandaGroup.stringdata0))
        return static_cast<void*>(this);
    return CGroupWidget::qt_metacast(_clname);
}

int CPandaGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGroupWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CGitGroup_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CGitGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CGitGroup_t qt_meta_stringdata_CGitGroup = {
    {
QT_MOC_LITERAL(0, 0, 9) // "CGitGroup"

    },
    "CGitGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CGitGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CGitGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CGitGroup::staticMetaObject = { {
    &CGroupWidget::staticMetaObject,
    qt_meta_stringdata_CGitGroup.data,
    qt_meta_data_CGitGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CGitGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CGitGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CGitGroup.stringdata0))
        return static_cast<void*>(this);
    return CGroupWidget::qt_metacast(_clname);
}

int CGitGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGroupWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CUtilWidget_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CUtilWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CUtilWidget_t qt_meta_stringdata_CUtilWidget = {
    {
QT_MOC_LITERAL(0, 0, 11) // "CUtilWidget"

    },
    "CUtilWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CUtilWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CUtilWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CUtilWidget::staticMetaObject = { {
    &CGroupWidget::staticMetaObject,
    qt_meta_stringdata_CUtilWidget.data,
    qt_meta_data_CUtilWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CUtilWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CUtilWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CUtilWidget.stringdata0))
        return static_cast<void*>(this);
    return CGroupWidget::qt_metacast(_clname);
}

int CUtilWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGroupWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CPresetWidget_t {
    QByteArrayData data[4];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPresetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPresetWidget_t qt_meta_stringdata_CPresetWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CPresetWidget"
QT_MOC_LITERAL(1, 14, 7), // "refresh"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3) // "nID"

    },
    "CPresetWidget\0refresh\0\0nID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPresetWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void CPresetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPresetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPresetWidget::staticMetaObject = { {
    &CGroupWidget::staticMetaObject,
    qt_meta_stringdata_CPresetWidget.data,
    qt_meta_data_CPresetWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPresetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPresetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPresetWidget.stringdata0))
        return static_cast<void*>(this);
    return CGroupWidget::qt_metacast(_clname);
}

int CPresetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CGroupWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_SwitchOpenpilot_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SwitchOpenpilot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SwitchOpenpilot_t qt_meta_stringdata_SwitchOpenpilot = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SwitchOpenpilot"
QT_MOC_LITERAL(1, 16, 8), // "printMsg"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "processFinished"
QT_MOC_LITERAL(4, 42, 8), // "exitCode"
QT_MOC_LITERAL(5, 51, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(6, 72, 10) // "exitStatus"

    },
    "SwitchOpenpilot\0printMsg\0\0processFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SwitchOpenpilot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

       0        // eod
};

void SwitchOpenpilot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SwitchOpenpilot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->printMsg(); break;
        case 1: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SwitchOpenpilot::staticMetaObject = { {
    &ButtonControl::staticMetaObject,
    qt_meta_stringdata_SwitchOpenpilot.data,
    qt_meta_data_SwitchOpenpilot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SwitchOpenpilot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwitchOpenpilot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchOpenpilot.stringdata0))
        return static_cast<void*>(this);
    return ButtonControl::qt_metacast(_clname);
}

int SwitchOpenpilot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_SshLegacyToggle_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SshLegacyToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SshLegacyToggle_t qt_meta_stringdata_SshLegacyToggle = {
    {
QT_MOC_LITERAL(0, 0, 15) // "SshLegacyToggle"

    },
    "SshLegacyToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SshLegacyToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SshLegacyToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SshLegacyToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_SshLegacyToggle.data,
    qt_meta_data_SshLegacyToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SshLegacyToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SshLegacyToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SshLegacyToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int SshLegacyToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoResumeToggle_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoResumeToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoResumeToggle_t qt_meta_stringdata_AutoResumeToggle = {
    {
QT_MOC_LITERAL(0, 0, 16) // "AutoResumeToggle"

    },
    "AutoResumeToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoResumeToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoResumeToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoResumeToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_AutoResumeToggle.data,
    qt_meta_data_AutoResumeToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoResumeToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoResumeToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoResumeToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int AutoResumeToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VariableCruiseToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VariableCruiseToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VariableCruiseToggle_t qt_meta_stringdata_VariableCruiseToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "VariableCruiseToggle"

    },
    "VariableCruiseToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VariableCruiseToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VariableCruiseToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VariableCruiseToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_VariableCruiseToggle.data,
    qt_meta_data_VariableCruiseToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VariableCruiseToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VariableCruiseToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VariableCruiseToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int VariableCruiseToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseGapAdjustToggle_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseGapAdjustToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseGapAdjustToggle_t qt_meta_stringdata_CruiseGapAdjustToggle = {
    {
QT_MOC_LITERAL(0, 0, 21) // "CruiseGapAdjustToggle"

    },
    "CruiseGapAdjustToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseGapAdjustToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseGapAdjustToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseGapAdjustToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_CruiseGapAdjustToggle.data,
    qt_meta_data_CruiseGapAdjustToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseGapAdjustToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseGapAdjustToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseGapAdjustToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int CruiseGapAdjustToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoEnabledToggle_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoEnabledToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoEnabledToggle_t qt_meta_stringdata_AutoEnabledToggle = {
    {
QT_MOC_LITERAL(0, 0, 17) // "AutoEnabledToggle"

    },
    "AutoEnabledToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoEnabledToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoEnabledToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoEnabledToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_AutoEnabledToggle.data,
    qt_meta_data_AutoEnabledToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoEnabledToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoEnabledToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoEnabledToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int AutoEnabledToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseAutoResToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseAutoResToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseAutoResToggle_t qt_meta_stringdata_CruiseAutoResToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "CruiseAutoResToggle"

    },
    "CruiseAutoResToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseAutoResToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseAutoResToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseAutoResToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_CruiseAutoResToggle.data,
    qt_meta_data_CruiseAutoResToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseAutoResToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseAutoResToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseAutoResToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int CruiseAutoResToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BatteryChargingControlToggle_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatteryChargingControlToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatteryChargingControlToggle_t qt_meta_stringdata_BatteryChargingControlToggle = {
    {
QT_MOC_LITERAL(0, 0, 28) // "BatteryChargingControlToggle"

    },
    "BatteryChargingControlToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatteryChargingControlToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BatteryChargingControlToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BatteryChargingControlToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_BatteryChargingControlToggle.data,
    qt_meta_data_BatteryChargingControlToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatteryChargingControlToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatteryChargingControlToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatteryChargingControlToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int BatteryChargingControlToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BlindSpotDetectToggle_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlindSpotDetectToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlindSpotDetectToggle_t qt_meta_stringdata_BlindSpotDetectToggle = {
    {
QT_MOC_LITERAL(0, 0, 21) // "BlindSpotDetectToggle"

    },
    "BlindSpotDetectToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlindSpotDetectToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BlindSpotDetectToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BlindSpotDetectToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_BlindSpotDetectToggle.data,
    qt_meta_data_BlindSpotDetectToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlindSpotDetectToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlindSpotDetectToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlindSpotDetectToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int BlindSpotDetectToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_UFCModeEnabledToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UFCModeEnabledToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UFCModeEnabledToggle_t qt_meta_stringdata_UFCModeEnabledToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "UFCModeEnabledToggle"

    },
    "UFCModeEnabledToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UFCModeEnabledToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void UFCModeEnabledToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UFCModeEnabledToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_UFCModeEnabledToggle.data,
    qt_meta_data_UFCModeEnabledToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UFCModeEnabledToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UFCModeEnabledToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UFCModeEnabledToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int UFCModeEnabledToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WhitePandaSupportToggle_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WhitePandaSupportToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WhitePandaSupportToggle_t qt_meta_stringdata_WhitePandaSupportToggle = {
    {
QT_MOC_LITERAL(0, 0, 23) // "WhitePandaSupportToggle"

    },
    "WhitePandaSupportToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WhitePandaSupportToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WhitePandaSupportToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WhitePandaSupportToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_WhitePandaSupportToggle.data,
    qt_meta_data_WhitePandaSupportToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WhitePandaSupportToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WhitePandaSupportToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WhitePandaSupportToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int WhitePandaSupportToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerWarningFixToggle_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerWarningFixToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerWarningFixToggle_t qt_meta_stringdata_SteerWarningFixToggle = {
    {
QT_MOC_LITERAL(0, 0, 21) // "SteerWarningFixToggle"

    },
    "SteerWarningFixToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerWarningFixToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerWarningFixToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerWarningFixToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_SteerWarningFixToggle.data,
    qt_meta_data_SteerWarningFixToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerWarningFixToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerWarningFixToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerWarningFixToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int SteerWarningFixToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LiveSteerRatioToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LiveSteerRatioToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LiveSteerRatioToggle_t qt_meta_stringdata_LiveSteerRatioToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "LiveSteerRatioToggle"

    },
    "LiveSteerRatioToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LiveSteerRatioToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LiveSteerRatioToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LiveSteerRatioToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_LiveSteerRatioToggle.data,
    qt_meta_data_LiveSteerRatioToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LiveSteerRatioToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LiveSteerRatioToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LiveSteerRatioToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int LiveSteerRatioToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VariableSteerMaxToggle_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VariableSteerMaxToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VariableSteerMaxToggle_t qt_meta_stringdata_VariableSteerMaxToggle = {
    {
QT_MOC_LITERAL(0, 0, 22) // "VariableSteerMaxToggle"

    },
    "VariableSteerMaxToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VariableSteerMaxToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VariableSteerMaxToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VariableSteerMaxToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_VariableSteerMaxToggle.data,
    qt_meta_data_VariableSteerMaxToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VariableSteerMaxToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VariableSteerMaxToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VariableSteerMaxToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int VariableSteerMaxToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VariableSteerDeltaToggle_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VariableSteerDeltaToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VariableSteerDeltaToggle_t qt_meta_stringdata_VariableSteerDeltaToggle = {
    {
QT_MOC_LITERAL(0, 0, 24) // "VariableSteerDeltaToggle"

    },
    "VariableSteerDeltaToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VariableSteerDeltaToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VariableSteerDeltaToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VariableSteerDeltaToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_VariableSteerDeltaToggle.data,
    qt_meta_data_VariableSteerDeltaToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VariableSteerDeltaToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VariableSteerDeltaToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VariableSteerDeltaToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int VariableSteerDeltaToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DrivingRecordToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrivingRecordToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrivingRecordToggle_t qt_meta_stringdata_DrivingRecordToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "DrivingRecordToggle"

    },
    "DrivingRecordToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrivingRecordToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DrivingRecordToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DrivingRecordToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_DrivingRecordToggle.data,
    qt_meta_data_DrivingRecordToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrivingRecordToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrivingRecordToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrivingRecordToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int DrivingRecordToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TurnSteeringDisableToggle_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TurnSteeringDisableToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TurnSteeringDisableToggle_t qt_meta_stringdata_TurnSteeringDisableToggle = {
    {
QT_MOC_LITERAL(0, 0, 25) // "TurnSteeringDisableToggle"

    },
    "TurnSteeringDisableToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TurnSteeringDisableToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TurnSteeringDisableToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TurnSteeringDisableToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_TurnSteeringDisableToggle.data,
    qt_meta_data_TurnSteeringDisableToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TurnSteeringDisableToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TurnSteeringDisableToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TurnSteeringDisableToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int TurnSteeringDisableToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HotspotOnBootToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HotspotOnBootToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HotspotOnBootToggle_t qt_meta_stringdata_HotspotOnBootToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "HotspotOnBootToggle"

    },
    "HotspotOnBootToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HotspotOnBootToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void HotspotOnBootToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HotspotOnBootToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_HotspotOnBootToggle.data,
    qt_meta_data_HotspotOnBootToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HotspotOnBootToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HotspotOnBootToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HotspotOnBootToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int HotspotOnBootToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseOverMaxSpeedToggle_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseOverMaxSpeedToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseOverMaxSpeedToggle_t qt_meta_stringdata_CruiseOverMaxSpeedToggle = {
    {
QT_MOC_LITERAL(0, 0, 24) // "CruiseOverMaxSpeedToggle"

    },
    "CruiseOverMaxSpeedToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseOverMaxSpeedToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseOverMaxSpeedToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseOverMaxSpeedToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_CruiseOverMaxSpeedToggle.data,
    qt_meta_data_CruiseOverMaxSpeedToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseOverMaxSpeedToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseOverMaxSpeedToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseOverMaxSpeedToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int CruiseOverMaxSpeedToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugUiOneToggle_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugUiOneToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugUiOneToggle_t qt_meta_stringdata_DebugUiOneToggle = {
    {
QT_MOC_LITERAL(0, 0, 16) // "DebugUiOneToggle"

    },
    "DebugUiOneToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugUiOneToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DebugUiOneToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugUiOneToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_DebugUiOneToggle.data,
    qt_meta_data_DebugUiOneToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugUiOneToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugUiOneToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugUiOneToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int DebugUiOneToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugUiTwoToggle_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugUiTwoToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugUiTwoToggle_t qt_meta_stringdata_DebugUiTwoToggle = {
    {
QT_MOC_LITERAL(0, 0, 16) // "DebugUiTwoToggle"

    },
    "DebugUiTwoToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugUiTwoToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DebugUiTwoToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugUiTwoToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_DebugUiTwoToggle.data,
    qt_meta_data_DebugUiTwoToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugUiTwoToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugUiTwoToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugUiTwoToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int DebugUiTwoToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DebugUiThreeToggle_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugUiThreeToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugUiThreeToggle_t qt_meta_stringdata_DebugUiThreeToggle = {
    {
QT_MOC_LITERAL(0, 0, 18) // "DebugUiThreeToggle"

    },
    "DebugUiThreeToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugUiThreeToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DebugUiThreeToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DebugUiThreeToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_DebugUiThreeToggle.data,
    qt_meta_data_DebugUiThreeToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DebugUiThreeToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugUiThreeToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugUiThreeToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int DebugUiThreeToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LongLogToggle_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LongLogToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LongLogToggle_t qt_meta_stringdata_LongLogToggle = {
    {
QT_MOC_LITERAL(0, 0, 13) // "LongLogToggle"

    },
    "LongLogToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LongLogToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LongLogToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LongLogToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_LongLogToggle.data,
    qt_meta_data_LongLogToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LongLogToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LongLogToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LongLogToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int LongLogToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PrebuiltToggle_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrebuiltToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrebuiltToggle_t qt_meta_stringdata_PrebuiltToggle = {
    {
QT_MOC_LITERAL(0, 0, 14) // "PrebuiltToggle"

    },
    "PrebuiltToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrebuiltToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PrebuiltToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PrebuiltToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_PrebuiltToggle.data,
    qt_meta_data_PrebuiltToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrebuiltToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrebuiltToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrebuiltToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int PrebuiltToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LDWSToggle_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LDWSToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LDWSToggle_t qt_meta_stringdata_LDWSToggle = {
    {
QT_MOC_LITERAL(0, 0, 10) // "LDWSToggle"

    },
    "LDWSToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LDWSToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LDWSToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LDWSToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_LDWSToggle.data,
    qt_meta_data_LDWSToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LDWSToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LDWSToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LDWSToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int LDWSToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FPTwoToggle_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FPTwoToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FPTwoToggle_t qt_meta_stringdata_FPTwoToggle = {
    {
QT_MOC_LITERAL(0, 0, 11) // "FPTwoToggle"

    },
    "FPTwoToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FPTwoToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FPTwoToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FPTwoToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_FPTwoToggle.data,
    qt_meta_data_FPTwoToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FPTwoToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FPTwoToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FPTwoToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int FPTwoToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GearDToggle_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GearDToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GearDToggle_t qt_meta_stringdata_GearDToggle = {
    {
QT_MOC_LITERAL(0, 0, 11) // "GearDToggle"

    },
    "GearDToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GearDToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GearDToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GearDToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_GearDToggle.data,
    qt_meta_data_GearDToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GearDToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GearDToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GearDToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int GearDToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ComIssueToggle_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComIssueToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComIssueToggle_t qt_meta_stringdata_ComIssueToggle = {
    {
QT_MOC_LITERAL(0, 0, 14) // "ComIssueToggle"

    },
    "ComIssueToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComIssueToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ComIssueToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ComIssueToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_ComIssueToggle.data,
    qt_meta_data_ComIssueToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComIssueToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComIssueToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComIssueToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int ComIssueToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RunNaviOnBootToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RunNaviOnBootToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RunNaviOnBootToggle_t qt_meta_stringdata_RunNaviOnBootToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "RunNaviOnBootToggle"

    },
    "RunNaviOnBootToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RunNaviOnBootToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RunNaviOnBootToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RunNaviOnBootToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_RunNaviOnBootToggle.data,
    qt_meta_data_RunNaviOnBootToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RunNaviOnBootToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RunNaviOnBootToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RunNaviOnBootToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int RunNaviOnBootToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BattLessToggle_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BattLessToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BattLessToggle_t qt_meta_stringdata_BattLessToggle = {
    {
QT_MOC_LITERAL(0, 0, 14) // "BattLessToggle"

    },
    "BattLessToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BattLessToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BattLessToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BattLessToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_BattLessToggle.data,
    qt_meta_data_BattLessToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BattLessToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BattLessToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BattLessToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int BattLessToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LiveTunePanelToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LiveTunePanelToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LiveTunePanelToggle_t qt_meta_stringdata_LiveTunePanelToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "LiveTunePanelToggle"

    },
    "LiveTunePanelToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LiveTunePanelToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LiveTunePanelToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LiveTunePanelToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_LiveTunePanelToggle.data,
    qt_meta_data_LiveTunePanelToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LiveTunePanelToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LiveTunePanelToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LiveTunePanelToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int LiveTunePanelToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GitPullOnBootToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GitPullOnBootToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GitPullOnBootToggle_t qt_meta_stringdata_GitPullOnBootToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "GitPullOnBootToggle"

    },
    "GitPullOnBootToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GitPullOnBootToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GitPullOnBootToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GitPullOnBootToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_GitPullOnBootToggle.data,
    qt_meta_data_GitPullOnBootToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GitPullOnBootToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GitPullOnBootToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GitPullOnBootToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int GitPullOnBootToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StoppingDistAdjToggle_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StoppingDistAdjToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StoppingDistAdjToggle_t qt_meta_stringdata_StoppingDistAdjToggle = {
    {
QT_MOC_LITERAL(0, 0, 21) // "StoppingDistAdjToggle"

    },
    "StoppingDistAdjToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StoppingDistAdjToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StoppingDistAdjToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StoppingDistAdjToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_StoppingDistAdjToggle.data,
    qt_meta_data_StoppingDistAdjToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StoppingDistAdjToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StoppingDistAdjToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StoppingDistAdjToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int StoppingDistAdjToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ShowErrorToggle_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShowErrorToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShowErrorToggle_t qt_meta_stringdata_ShowErrorToggle = {
    {
QT_MOC_LITERAL(0, 0, 15) // "ShowErrorToggle"

    },
    "ShowErrorToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShowErrorToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ShowErrorToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ShowErrorToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_ShowErrorToggle.data,
    qt_meta_data_ShowErrorToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShowErrorToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowErrorToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShowErrorToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int ShowErrorToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StockNaviSpeedToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StockNaviSpeedToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StockNaviSpeedToggle_t qt_meta_stringdata_StockNaviSpeedToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "StockNaviSpeedToggle"

    },
    "StockNaviSpeedToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StockNaviSpeedToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StockNaviSpeedToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StockNaviSpeedToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_StockNaviSpeedToggle.data,
    qt_meta_data_StockNaviSpeedToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StockNaviSpeedToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StockNaviSpeedToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StockNaviSpeedToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int StockNaviSpeedToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_E2ELongToggle_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_E2ELongToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_E2ELongToggle_t qt_meta_stringdata_E2ELongToggle = {
    {
QT_MOC_LITERAL(0, 0, 13) // "E2ELongToggle"

    },
    "E2ELongToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_E2ELongToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void E2ELongToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject E2ELongToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_E2ELongToggle.data,
    qt_meta_data_E2ELongToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *E2ELongToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *E2ELongToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_E2ELongToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int E2ELongToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StopAtStopSignToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StopAtStopSignToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StopAtStopSignToggle_t qt_meta_stringdata_StopAtStopSignToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "StopAtStopSignToggle"

    },
    "StopAtStopSignToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StopAtStopSignToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StopAtStopSignToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StopAtStopSignToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_StopAtStopSignToggle.data,
    qt_meta_data_StopAtStopSignToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StopAtStopSignToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StopAtStopSignToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StopAtStopSignToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int StopAtStopSignToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GoogleMapEnabledToggle_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleMapEnabledToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleMapEnabledToggle_t qt_meta_stringdata_GoogleMapEnabledToggle = {
    {
QT_MOC_LITERAL(0, 0, 22) // "GoogleMapEnabledToggle"

    },
    "GoogleMapEnabledToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleMapEnabledToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GoogleMapEnabledToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GoogleMapEnabledToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_GoogleMapEnabledToggle.data,
    qt_meta_data_GoogleMapEnabledToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleMapEnabledToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleMapEnabledToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleMapEnabledToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int GoogleMapEnabledToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OSMEnabledToggle_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSMEnabledToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSMEnabledToggle_t qt_meta_stringdata_OSMEnabledToggle = {
    {
QT_MOC_LITERAL(0, 0, 16) // "OSMEnabledToggle"

    },
    "OSMEnabledToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSMEnabledToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OSMEnabledToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OSMEnabledToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_OSMEnabledToggle.data,
    qt_meta_data_OSMEnabledToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OSMEnabledToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSMEnabledToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSMEnabledToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int OSMEnabledToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OSMSpeedLimitEnabledToggle_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSMSpeedLimitEnabledToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSMSpeedLimitEnabledToggle_t qt_meta_stringdata_OSMSpeedLimitEnabledToggle = {
    {
QT_MOC_LITERAL(0, 0, 26) // "OSMSpeedLimitEnabledToggle"

    },
    "OSMSpeedLimitEnabledToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSMSpeedLimitEnabledToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OSMSpeedLimitEnabledToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OSMSpeedLimitEnabledToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_OSMSpeedLimitEnabledToggle.data,
    qt_meta_data_OSMSpeedLimitEnabledToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OSMSpeedLimitEnabledToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSMSpeedLimitEnabledToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSMSpeedLimitEnabledToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int OSMSpeedLimitEnabledToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IgnoreCanErroronISGToggle_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IgnoreCanErroronISGToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IgnoreCanErroronISGToggle_t qt_meta_stringdata_IgnoreCanErroronISGToggle = {
    {
QT_MOC_LITERAL(0, 0, 25) // "IgnoreCanErroronISGToggle"

    },
    "IgnoreCanErroronISGToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IgnoreCanErroronISGToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IgnoreCanErroronISGToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IgnoreCanErroronISGToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_IgnoreCanErroronISGToggle.data,
    qt_meta_data_IgnoreCanErroronISGToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IgnoreCanErroronISGToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IgnoreCanErroronISGToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IgnoreCanErroronISGToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int IgnoreCanErroronISGToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StockLKASEnabledatDisenagedStatusToggle_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StockLKASEnabledatDisenagedStatusToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StockLKASEnabledatDisenagedStatusToggle_t qt_meta_stringdata_StockLKASEnabledatDisenagedStatusToggle = {
    {
QT_MOC_LITERAL(0, 0, 39) // "StockLKASEnabledatDisenagedSt..."

    },
    "StockLKASEnabledatDisenagedStatusToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StockLKASEnabledatDisenagedStatusToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StockLKASEnabledatDisenagedStatusToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StockLKASEnabledatDisenagedStatusToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_StockLKASEnabledatDisenagedStatusToggle.data,
    qt_meta_data_StockLKASEnabledatDisenagedStatusToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StockLKASEnabledatDisenagedStatusToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StockLKASEnabledatDisenagedStatusToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StockLKASEnabledatDisenagedStatusToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int StockLKASEnabledatDisenagedStatusToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FCA11MessageToggle_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FCA11MessageToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FCA11MessageToggle_t qt_meta_stringdata_FCA11MessageToggle = {
    {
QT_MOC_LITERAL(0, 0, 18) // "FCA11MessageToggle"

    },
    "FCA11MessageToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FCA11MessageToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FCA11MessageToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FCA11MessageToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_FCA11MessageToggle.data,
    qt_meta_data_FCA11MessageToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FCA11MessageToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FCA11MessageToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FCA11MessageToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int FCA11MessageToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StandstillResumeAltToggle_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StandstillResumeAltToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StandstillResumeAltToggle_t qt_meta_stringdata_StandstillResumeAltToggle = {
    {
QT_MOC_LITERAL(0, 0, 25) // "StandstillResumeAltToggle"

    },
    "StandstillResumeAltToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StandstillResumeAltToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StandstillResumeAltToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StandstillResumeAltToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_StandstillResumeAltToggle.data,
    qt_meta_data_StandstillResumeAltToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StandstillResumeAltToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StandstillResumeAltToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StandstillResumeAltToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int StandstillResumeAltToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MapboxEnabledToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapboxEnabledToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapboxEnabledToggle_t qt_meta_stringdata_MapboxEnabledToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "MapboxEnabledToggle"

    },
    "MapboxEnabledToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapboxEnabledToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MapboxEnabledToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MapboxEnabledToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_MapboxEnabledToggle.data,
    qt_meta_data_MapboxEnabledToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapboxEnabledToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxEnabledToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapboxEnabledToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int MapboxEnabledToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_UseRadarTrackToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UseRadarTrackToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UseRadarTrackToggle_t qt_meta_stringdata_UseRadarTrackToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "UseRadarTrackToggle"

    },
    "UseRadarTrackToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UseRadarTrackToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void UseRadarTrackToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UseRadarTrackToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_UseRadarTrackToggle.data,
    qt_meta_data_UseRadarTrackToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UseRadarTrackToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UseRadarTrackToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UseRadarTrackToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int UseRadarTrackToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RadarDisableToggle_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadarDisableToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadarDisableToggle_t qt_meta_stringdata_RadarDisableToggle = {
    {
QT_MOC_LITERAL(0, 0, 18) // "RadarDisableToggle"

    },
    "RadarDisableToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadarDisableToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RadarDisableToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RadarDisableToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_RadarDisableToggle.data,
    qt_meta_data_RadarDisableToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadarDisableToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadarDisableToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadarDisableToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int RadarDisableToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_C2WithCommaPowerToggle_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_C2WithCommaPowerToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_C2WithCommaPowerToggle_t qt_meta_stringdata_C2WithCommaPowerToggle = {
    {
QT_MOC_LITERAL(0, 0, 22) // "C2WithCommaPowerToggle"

    },
    "C2WithCommaPowerToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_C2WithCommaPowerToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void C2WithCommaPowerToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject C2WithCommaPowerToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_C2WithCommaPowerToggle.data,
    qt_meta_data_C2WithCommaPowerToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *C2WithCommaPowerToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *C2WithCommaPowerToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_C2WithCommaPowerToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int C2WithCommaPowerToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CustomTRToggle_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomTRToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomTRToggle_t qt_meta_stringdata_CustomTRToggle = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CustomTRToggle"

    },
    "CustomTRToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomTRToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CustomTRToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CustomTRToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_CustomTRToggle.data,
    qt_meta_data_CustomTRToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomTRToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomTRToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomTRToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int CustomTRToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RoutineDriveOnToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoutineDriveOnToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoutineDriveOnToggle_t qt_meta_stringdata_RoutineDriveOnToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "RoutineDriveOnToggle"

    },
    "RoutineDriveOnToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoutineDriveOnToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RoutineDriveOnToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RoutineDriveOnToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_RoutineDriveOnToggle.data,
    qt_meta_data_RoutineDriveOnToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoutineDriveOnToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoutineDriveOnToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoutineDriveOnToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int RoutineDriveOnToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CloseToRoadEdgeToggle_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CloseToRoadEdgeToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CloseToRoadEdgeToggle_t qt_meta_stringdata_CloseToRoadEdgeToggle = {
    {
QT_MOC_LITERAL(0, 0, 21) // "CloseToRoadEdgeToggle"

    },
    "CloseToRoadEdgeToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CloseToRoadEdgeToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CloseToRoadEdgeToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CloseToRoadEdgeToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_CloseToRoadEdgeToggle.data,
    qt_meta_data_CloseToRoadEdgeToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CloseToRoadEdgeToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CloseToRoadEdgeToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CloseToRoadEdgeToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int CloseToRoadEdgeToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToAvoidLKASFaultToggle_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToAvoidLKASFaultToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToAvoidLKASFaultToggle_t qt_meta_stringdata_ToAvoidLKASFaultToggle = {
    {
QT_MOC_LITERAL(0, 0, 22) // "ToAvoidLKASFaultToggle"

    },
    "ToAvoidLKASFaultToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToAvoidLKASFaultToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ToAvoidLKASFaultToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToAvoidLKASFaultToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_ToAvoidLKASFaultToggle.data,
    qt_meta_data_ToAvoidLKASFaultToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToAvoidLKASFaultToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToAvoidLKASFaultToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToAvoidLKASFaultToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int ToAvoidLKASFaultToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToAvoidLKASFaultBeyondToggle_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToAvoidLKASFaultBeyondToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToAvoidLKASFaultBeyondToggle_t qt_meta_stringdata_ToAvoidLKASFaultBeyondToggle = {
    {
QT_MOC_LITERAL(0, 0, 28) // "ToAvoidLKASFaultBeyondToggle"

    },
    "ToAvoidLKASFaultBeyondToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToAvoidLKASFaultBeyondToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ToAvoidLKASFaultBeyondToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToAvoidLKASFaultBeyondToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_ToAvoidLKASFaultBeyondToggle.data,
    qt_meta_data_ToAvoidLKASFaultBeyondToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToAvoidLKASFaultBeyondToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToAvoidLKASFaultBeyondToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToAvoidLKASFaultBeyondToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int ToAvoidLKASFaultBeyondToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StockDecelonCamToggle_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StockDecelonCamToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StockDecelonCamToggle_t qt_meta_stringdata_StockDecelonCamToggle = {
    {
QT_MOC_LITERAL(0, 0, 21) // "StockDecelonCamToggle"

    },
    "StockDecelonCamToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StockDecelonCamToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StockDecelonCamToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StockDecelonCamToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_StockDecelonCamToggle.data,
    qt_meta_data_StockDecelonCamToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StockDecelonCamToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StockDecelonCamToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StockDecelonCamToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int StockDecelonCamToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_JoystickModeToggle_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickModeToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickModeToggle_t qt_meta_stringdata_JoystickModeToggle = {
    {
QT_MOC_LITERAL(0, 0, 18) // "JoystickModeToggle"

    },
    "JoystickModeToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickModeToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void JoystickModeToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject JoystickModeToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_JoystickModeToggle.data,
    qt_meta_data_JoystickModeToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoystickModeToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickModeToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickModeToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int JoystickModeToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RPMAnimatedToggle_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPMAnimatedToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPMAnimatedToggle_t qt_meta_stringdata_RPMAnimatedToggle = {
    {
QT_MOC_LITERAL(0, 0, 17) // "RPMAnimatedToggle"

    },
    "RPMAnimatedToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPMAnimatedToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RPMAnimatedToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RPMAnimatedToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_RPMAnimatedToggle.data,
    qt_meta_data_RPMAnimatedToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RPMAnimatedToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPMAnimatedToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RPMAnimatedToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int RPMAnimatedToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ShowStopLineToggle_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShowStopLineToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShowStopLineToggle_t qt_meta_stringdata_ShowStopLineToggle = {
    {
QT_MOC_LITERAL(0, 0, 18) // "ShowStopLineToggle"

    },
    "ShowStopLineToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShowStopLineToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ShowStopLineToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ShowStopLineToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_ShowStopLineToggle.data,
    qt_meta_data_ShowStopLineToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShowStopLineToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowStopLineToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShowStopLineToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int ShowStopLineToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_NoSmartMDPSToggle_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoSmartMDPSToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoSmartMDPSToggle_t qt_meta_stringdata_NoSmartMDPSToggle = {
    {
QT_MOC_LITERAL(0, 0, 17) // "NoSmartMDPSToggle"

    },
    "NoSmartMDPSToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoSmartMDPSToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void NoSmartMDPSToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NoSmartMDPSToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_NoSmartMDPSToggle.data,
    qt_meta_data_NoSmartMDPSToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NoSmartMDPSToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoSmartMDPSToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NoSmartMDPSToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int NoSmartMDPSToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpeedCameraOffsetToggle_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedCameraOffsetToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedCameraOffsetToggle_t qt_meta_stringdata_SpeedCameraOffsetToggle = {
    {
QT_MOC_LITERAL(0, 0, 23) // "SpeedCameraOffsetToggle"

    },
    "SpeedCameraOffsetToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedCameraOffsetToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpeedCameraOffsetToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpeedCameraOffsetToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_SpeedCameraOffsetToggle.data,
    qt_meta_data_SpeedCameraOffsetToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpeedCameraOffsetToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedCameraOffsetToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedCameraOffsetToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int SpeedCameraOffsetToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HoldForSettingToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HoldForSettingToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HoldForSettingToggle_t qt_meta_stringdata_HoldForSettingToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "HoldForSettingToggle"

    },
    "HoldForSettingToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HoldForSettingToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void HoldForSettingToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject HoldForSettingToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_HoldForSettingToggle.data,
    qt_meta_data_HoldForSettingToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HoldForSettingToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HoldForSettingToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HoldForSettingToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int HoldForSettingToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RTShieldToggle_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTShieldToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTShieldToggle_t qt_meta_stringdata_RTShieldToggle = {
    {
QT_MOC_LITERAL(0, 0, 14) // "RTShieldToggle"

    },
    "RTShieldToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTShieldToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RTShieldToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RTShieldToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_RTShieldToggle.data,
    qt_meta_data_RTShieldToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RTShieldToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTShieldToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RTShieldToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int RTShieldToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OSMOfflineUseToggle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSMOfflineUseToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSMOfflineUseToggle_t qt_meta_stringdata_OSMOfflineUseToggle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "OSMOfflineUseToggle"

    },
    "OSMOfflineUseToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSMOfflineUseToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OSMOfflineUseToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OSMOfflineUseToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_OSMOfflineUseToggle.data,
    qt_meta_data_OSMOfflineUseToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OSMOfflineUseToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSMOfflineUseToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSMOfflineUseToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int OSMOfflineUseToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpeedBumpDecelToggle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedBumpDecelToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedBumpDecelToggle_t qt_meta_stringdata_SpeedBumpDecelToggle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "SpeedBumpDecelToggle"

    },
    "SpeedBumpDecelToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedBumpDecelToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpeedBumpDecelToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpeedBumpDecelToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_SpeedBumpDecelToggle.data,
    qt_meta_data_SpeedBumpDecelToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpeedBumpDecelToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedBumpDecelToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedBumpDecelToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int SpeedBumpDecelToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKREarlyStoppingToggle_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKREarlyStoppingToggle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKREarlyStoppingToggle_t qt_meta_stringdata_OPKREarlyStoppingToggle = {
    {
QT_MOC_LITERAL(0, 0, 23) // "OPKREarlyStoppingToggle"

    },
    "OPKREarlyStoppingToggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKREarlyStoppingToggle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKREarlyStoppingToggle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKREarlyStoppingToggle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_OPKREarlyStoppingToggle.data,
    qt_meta_data_OPKREarlyStoppingToggle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKREarlyStoppingToggle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKREarlyStoppingToggle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKREarlyStoppingToggle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int OPKREarlyStoppingToggle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TorqueUseAngle_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorqueUseAngle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorqueUseAngle_t qt_meta_stringdata_TorqueUseAngle = {
    {
QT_MOC_LITERAL(0, 0, 14) // "TorqueUseAngle"

    },
    "TorqueUseAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorqueUseAngle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TorqueUseAngle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorqueUseAngle::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_TorqueUseAngle.data,
    qt_meta_data_TorqueUseAngle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorqueUseAngle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorqueUseAngle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorqueUseAngle.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int TorqueUseAngle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DepartChimeAtResume_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DepartChimeAtResume_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DepartChimeAtResume_t qt_meta_stringdata_DepartChimeAtResume = {
    {
QT_MOC_LITERAL(0, 0, 19) // "DepartChimeAtResume"

    },
    "DepartChimeAtResume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DepartChimeAtResume[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DepartChimeAtResume::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DepartChimeAtResume::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_DepartChimeAtResume.data,
    qt_meta_data_DepartChimeAtResume,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DepartChimeAtResume::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DepartChimeAtResume::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DepartChimeAtResume.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int DepartChimeAtResume::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseGapBySpdOn_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseGapBySpdOn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseGapBySpdOn_t qt_meta_stringdata_CruiseGapBySpdOn = {
    {
QT_MOC_LITERAL(0, 0, 16) // "CruiseGapBySpdOn"

    },
    "CruiseGapBySpdOn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseGapBySpdOn[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseGapBySpdOn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseGapBySpdOn::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_CruiseGapBySpdOn.data,
    qt_meta_data_CruiseGapBySpdOn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseGapBySpdOn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseGapBySpdOn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseGapBySpdOn.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int CruiseGapBySpdOn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseSetwithRoadLimitSpeed_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseSetwithRoadLimitSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseSetwithRoadLimitSpeed_t qt_meta_stringdata_CruiseSetwithRoadLimitSpeed = {
    {
QT_MOC_LITERAL(0, 0, 27) // "CruiseSetwithRoadLimitSpeed"

    },
    "CruiseSetwithRoadLimitSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseSetwithRoadLimitSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseSetwithRoadLimitSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseSetwithRoadLimitSpeed::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_CruiseSetwithRoadLimitSpeed.data,
    qt_meta_data_CruiseSetwithRoadLimitSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseSetwithRoadLimitSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseSetwithRoadLimitSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseSetwithRoadLimitSpeed.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int CruiseSetwithRoadLimitSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKRDebug_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKRDebug_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKRDebug_t qt_meta_stringdata_OPKRDebug = {
    {
QT_MOC_LITERAL(0, 0, 9) // "OPKRDebug"

    },
    "OPKRDebug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKRDebug[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKRDebug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKRDebug::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_OPKRDebug.data,
    qt_meta_data_OPKRDebug,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKRDebug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKRDebug::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKRDebug.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int OPKRDebug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SetSpeedByFive_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetSpeedByFive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetSpeedByFive_t qt_meta_stringdata_SetSpeedByFive = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SetSpeedByFive"

    },
    "SetSpeedByFive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetSpeedByFive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SetSpeedByFive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SetSpeedByFive::staticMetaObject = { {
    &ToggleControl::staticMetaObject,
    qt_meta_stringdata_SetSpeedByFive.data,
    qt_meta_data_SetSpeedByFive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetSpeedByFive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetSpeedByFive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetSpeedByFive.stringdata0))
        return static_cast<void*>(this);
    return ToggleControl::qt_metacast(_clname);
}

int SetSpeedByFive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OpenpilotView_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenpilotView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenpilotView_t qt_meta_stringdata_OpenpilotView = {
    {
QT_MOC_LITERAL(0, 0, 13) // "OpenpilotView"

    },
    "OpenpilotView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenpilotView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OpenpilotView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OpenpilotView::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OpenpilotView.data,
    qt_meta_data_OpenpilotView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenpilotView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenpilotView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenpilotView.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OpenpilotView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CarSelectCombo_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CarSelectCombo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CarSelectCombo_t qt_meta_stringdata_CarSelectCombo = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CarSelectCombo"

    },
    "CarSelectCombo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CarSelectCombo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CarSelectCombo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CarSelectCombo::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CarSelectCombo.data,
    qt_meta_data_CarSelectCombo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CarSelectCombo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CarSelectCombo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CarSelectCombo.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CarSelectCombo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BranchSelectCombo_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BranchSelectCombo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BranchSelectCombo_t qt_meta_stringdata_BranchSelectCombo = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BranchSelectCombo"
QT_MOC_LITERAL(1, 18, 9), // "printMsg1"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "processFinished1"
QT_MOC_LITERAL(4, 46, 8), // "exitCode"
QT_MOC_LITERAL(5, 55, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(6, 76, 10) // "exitStatus"

    },
    "BranchSelectCombo\0printMsg1\0\0"
    "processFinished1\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BranchSelectCombo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

       0        // eod
};

void BranchSelectCombo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BranchSelectCombo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->printMsg1(); break;
        case 1: _t->processFinished1((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BranchSelectCombo::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_BranchSelectCombo.data,
    qt_meta_data_BranchSelectCombo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BranchSelectCombo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BranchSelectCombo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BranchSelectCombo.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int BranchSelectCombo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_TimeZoneSelectCombo_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeZoneSelectCombo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeZoneSelectCombo_t qt_meta_stringdata_TimeZoneSelectCombo = {
    {
QT_MOC_LITERAL(0, 0, 19) // "TimeZoneSelectCombo"

    },
    "TimeZoneSelectCombo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeZoneSelectCombo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TimeZoneSelectCombo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TimeZoneSelectCombo::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TimeZoneSelectCombo.data,
    qt_meta_data_TimeZoneSelectCombo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimeZoneSelectCombo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeZoneSelectCombo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimeZoneSelectCombo.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TimeZoneSelectCombo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoShutdown_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoShutdown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoShutdown_t qt_meta_stringdata_AutoShutdown = {
    {
QT_MOC_LITERAL(0, 0, 12) // "AutoShutdown"

    },
    "AutoShutdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoShutdown[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoShutdown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoShutdown::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_AutoShutdown.data,
    qt_meta_data_AutoShutdown,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoShutdown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoShutdown::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoShutdown.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int AutoShutdown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ForceShutdown_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ForceShutdown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ForceShutdown_t qt_meta_stringdata_ForceShutdown = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ForceShutdown"

    },
    "ForceShutdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ForceShutdown[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ForceShutdown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ForceShutdown::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_ForceShutdown.data,
    qt_meta_data_ForceShutdown,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ForceShutdown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ForceShutdown::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ForceShutdown.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int ForceShutdown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoScreenOff_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoScreenOff_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoScreenOff_t qt_meta_stringdata_AutoScreenOff = {
    {
QT_MOC_LITERAL(0, 0, 13) // "AutoScreenOff"

    },
    "AutoScreenOff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoScreenOff[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoScreenOff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoScreenOff::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_AutoScreenOff.data,
    qt_meta_data_AutoScreenOff,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoScreenOff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoScreenOff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoScreenOff.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int AutoScreenOff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VolumeControl_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumeControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumeControl_t qt_meta_stringdata_VolumeControl = {
    {
QT_MOC_LITERAL(0, 0, 13) // "VolumeControl"

    },
    "VolumeControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumeControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VolumeControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VolumeControl::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_VolumeControl.data,
    qt_meta_data_VolumeControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VolumeControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeControl.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int VolumeControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BrightnessControl_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrightnessControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrightnessControl_t qt_meta_stringdata_BrightnessControl = {
    {
QT_MOC_LITERAL(0, 0, 17) // "BrightnessControl"

    },
    "BrightnessControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrightnessControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BrightnessControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BrightnessControl::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_BrightnessControl.data,
    qt_meta_data_BrightnessControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrightnessControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrightnessControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrightnessControl.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int BrightnessControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BrightnessOffControl_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrightnessOffControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrightnessOffControl_t qt_meta_stringdata_BrightnessOffControl = {
    {
QT_MOC_LITERAL(0, 0, 20) // "BrightnessOffControl"

    },
    "BrightnessOffControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrightnessOffControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BrightnessOffControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BrightnessOffControl::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_BrightnessOffControl.data,
    qt_meta_data_BrightnessOffControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrightnessOffControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrightnessOffControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrightnessOffControl.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int BrightnessOffControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ChargingMin_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChargingMin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChargingMin_t qt_meta_stringdata_ChargingMin = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ChargingMin"

    },
    "ChargingMin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChargingMin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ChargingMin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ChargingMin::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_ChargingMin.data,
    qt_meta_data_ChargingMin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChargingMin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChargingMin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChargingMin.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int ChargingMin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ChargingMax_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChargingMax_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChargingMax_t qt_meta_stringdata_ChargingMax = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ChargingMax"

    },
    "ChargingMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChargingMax[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ChargingMax::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ChargingMax::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_ChargingMax.data,
    qt_meta_data_ChargingMax,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChargingMax::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChargingMax::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChargingMax.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int ChargingMax::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruisemodeSelInit_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruisemodeSelInit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruisemodeSelInit_t qt_meta_stringdata_CruisemodeSelInit = {
    {
QT_MOC_LITERAL(0, 0, 17) // "CruisemodeSelInit"

    },
    "CruisemodeSelInit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruisemodeSelInit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruisemodeSelInit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruisemodeSelInit::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CruisemodeSelInit.data,
    qt_meta_data_CruisemodeSelInit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruisemodeSelInit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruisemodeSelInit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruisemodeSelInit.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CruisemodeSelInit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VariableCruiseProfile_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VariableCruiseProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VariableCruiseProfile_t qt_meta_stringdata_VariableCruiseProfile = {
    {
QT_MOC_LITERAL(0, 0, 21) // "VariableCruiseProfile"

    },
    "VariableCruiseProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VariableCruiseProfile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VariableCruiseProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VariableCruiseProfile::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_VariableCruiseProfile.data,
    qt_meta_data_VariableCruiseProfile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VariableCruiseProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VariableCruiseProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VariableCruiseProfile.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int VariableCruiseProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LaneChangeSpeed_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LaneChangeSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LaneChangeSpeed_t qt_meta_stringdata_LaneChangeSpeed = {
    {
QT_MOC_LITERAL(0, 0, 15) // "LaneChangeSpeed"

    },
    "LaneChangeSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LaneChangeSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LaneChangeSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LaneChangeSpeed::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LaneChangeSpeed.data,
    qt_meta_data_LaneChangeSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LaneChangeSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LaneChangeSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LaneChangeSpeed.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LaneChangeSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LaneChangeDelay_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LaneChangeDelay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LaneChangeDelay_t qt_meta_stringdata_LaneChangeDelay = {
    {
QT_MOC_LITERAL(0, 0, 15) // "LaneChangeDelay"

    },
    "LaneChangeDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LaneChangeDelay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LaneChangeDelay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LaneChangeDelay::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LaneChangeDelay.data,
    qt_meta_data_LaneChangeDelay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LaneChangeDelay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LaneChangeDelay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LaneChangeDelay.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LaneChangeDelay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LeftCurvOffset_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LeftCurvOffset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LeftCurvOffset_t qt_meta_stringdata_LeftCurvOffset = {
    {
QT_MOC_LITERAL(0, 0, 14) // "LeftCurvOffset"

    },
    "LeftCurvOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LeftCurvOffset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LeftCurvOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LeftCurvOffset::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LeftCurvOffset.data,
    qt_meta_data_LeftCurvOffset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LeftCurvOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LeftCurvOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LeftCurvOffset.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LeftCurvOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RightCurvOffset_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RightCurvOffset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RightCurvOffset_t qt_meta_stringdata_RightCurvOffset = {
    {
QT_MOC_LITERAL(0, 0, 15) // "RightCurvOffset"

    },
    "RightCurvOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RightCurvOffset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RightCurvOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RightCurvOffset::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RightCurvOffset.data,
    qt_meta_data_RightCurvOffset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RightCurvOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RightCurvOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RightCurvOffset.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RightCurvOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpeedLimitOffset_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedLimitOffset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedLimitOffset_t qt_meta_stringdata_SpeedLimitOffset = {
    {
QT_MOC_LITERAL(0, 0, 16) // "SpeedLimitOffset"

    },
    "SpeedLimitOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedLimitOffset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpeedLimitOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpeedLimitOffset::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SpeedLimitOffset.data,
    qt_meta_data_SpeedLimitOffset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpeedLimitOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedLimitOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedLimitOffset.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SpeedLimitOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CameraOffset_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraOffset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraOffset_t qt_meta_stringdata_CameraOffset = {
    {
QT_MOC_LITERAL(0, 0, 12) // "CameraOffset"

    },
    "CameraOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraOffset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CameraOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CameraOffset::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CameraOffset.data,
    qt_meta_data_CameraOffset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraOffset.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CameraOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PathOffset_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathOffset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathOffset_t qt_meta_stringdata_PathOffset = {
    {
QT_MOC_LITERAL(0, 0, 10) // "PathOffset"

    },
    "PathOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathOffset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PathOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PathOffset::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_PathOffset.data,
    qt_meta_data_PathOffset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PathOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathOffset.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int PathOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SRBaseControl_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SRBaseControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SRBaseControl_t qt_meta_stringdata_SRBaseControl = {
    {
QT_MOC_LITERAL(0, 0, 13) // "SRBaseControl"

    },
    "SRBaseControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SRBaseControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SRBaseControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SRBaseControl::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SRBaseControl.data,
    qt_meta_data_SRBaseControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SRBaseControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SRBaseControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SRBaseControl.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SRBaseControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SRMaxControl_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SRMaxControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SRMaxControl_t qt_meta_stringdata_SRMaxControl = {
    {
QT_MOC_LITERAL(0, 0, 12) // "SRMaxControl"

    },
    "SRMaxControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SRMaxControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SRMaxControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SRMaxControl::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SRMaxControl.data,
    qt_meta_data_SRMaxControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SRMaxControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SRMaxControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SRMaxControl.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SRMaxControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerActuatorDelay_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerActuatorDelay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerActuatorDelay_t qt_meta_stringdata_SteerActuatorDelay = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SteerActuatorDelay"

    },
    "SteerActuatorDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerActuatorDelay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerActuatorDelay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerActuatorDelay::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SteerActuatorDelay.data,
    qt_meta_data_SteerActuatorDelay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerActuatorDelay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerActuatorDelay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerActuatorDelay.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SteerActuatorDelay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerLimitTimer_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerLimitTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerLimitTimer_t qt_meta_stringdata_SteerLimitTimer = {
    {
QT_MOC_LITERAL(0, 0, 15) // "SteerLimitTimer"

    },
    "SteerLimitTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerLimitTimer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerLimitTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerLimitTimer::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SteerLimitTimer.data,
    qt_meta_data_SteerLimitTimer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerLimitTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerLimitTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerLimitTimer.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SteerLimitTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TireStiffnessFactor_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TireStiffnessFactor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TireStiffnessFactor_t qt_meta_stringdata_TireStiffnessFactor = {
    {
QT_MOC_LITERAL(0, 0, 19) // "TireStiffnessFactor"

    },
    "TireStiffnessFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TireStiffnessFactor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TireStiffnessFactor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TireStiffnessFactor::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TireStiffnessFactor.data,
    qt_meta_data_TireStiffnessFactor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TireStiffnessFactor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TireStiffnessFactor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TireStiffnessFactor.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TireStiffnessFactor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerMax_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerMax_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerMax_t qt_meta_stringdata_SteerMax = {
    {
QT_MOC_LITERAL(0, 0, 8) // "SteerMax"

    },
    "SteerMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerMax[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerMax::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerMax::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SteerMax.data,
    qt_meta_data_SteerMax,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerMax::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerMax::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerMax.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SteerMax::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerDeltaUp_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerDeltaUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerDeltaUp_t qt_meta_stringdata_SteerDeltaUp = {
    {
QT_MOC_LITERAL(0, 0, 12) // "SteerDeltaUp"

    },
    "SteerDeltaUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerDeltaUp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerDeltaUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerDeltaUp::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SteerDeltaUp.data,
    qt_meta_data_SteerDeltaUp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerDeltaUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerDeltaUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerDeltaUp.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SteerDeltaUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerDeltaDown_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerDeltaDown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerDeltaDown_t qt_meta_stringdata_SteerDeltaDown = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SteerDeltaDown"

    },
    "SteerDeltaDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerDeltaDown[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerDeltaDown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerDeltaDown::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SteerDeltaDown.data,
    qt_meta_data_SteerDeltaDown,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerDeltaDown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerDeltaDown::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerDeltaDown.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SteerDeltaDown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LateralControl_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LateralControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LateralControl_t qt_meta_stringdata_LateralControl = {
    {
QT_MOC_LITERAL(0, 0, 14) // "LateralControl"

    },
    "LateralControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LateralControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LateralControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LateralControl::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LateralControl.data,
    qt_meta_data_LateralControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LateralControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LateralControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LateralControl.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LateralControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PidKp_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PidKp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PidKp_t qt_meta_stringdata_PidKp = {
    {
QT_MOC_LITERAL(0, 0, 5) // "PidKp"

    },
    "PidKp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PidKp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PidKp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PidKp::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_PidKp.data,
    qt_meta_data_PidKp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PidKp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PidKp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PidKp.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int PidKp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PidKi_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PidKi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PidKi_t qt_meta_stringdata_PidKi = {
    {
QT_MOC_LITERAL(0, 0, 5) // "PidKi"

    },
    "PidKi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PidKi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PidKi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PidKi::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_PidKi.data,
    qt_meta_data_PidKi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PidKi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PidKi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PidKi.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int PidKi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PidKd_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PidKd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PidKd_t qt_meta_stringdata_PidKd = {
    {
QT_MOC_LITERAL(0, 0, 5) // "PidKd"

    },
    "PidKd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PidKd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PidKd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PidKd::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_PidKd.data,
    qt_meta_data_PidKd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PidKd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PidKd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PidKd.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int PidKd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PidKf_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PidKf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PidKf_t qt_meta_stringdata_PidKf = {
    {
QT_MOC_LITERAL(0, 0, 5) // "PidKf"

    },
    "PidKf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PidKf[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PidKf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PidKf::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_PidKf.data,
    qt_meta_data_PidKf,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PidKf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PidKf::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PidKf.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int PidKf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IgnoreZone_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IgnoreZone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IgnoreZone_t qt_meta_stringdata_IgnoreZone = {
    {
QT_MOC_LITERAL(0, 0, 10) // "IgnoreZone"

    },
    "IgnoreZone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IgnoreZone[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IgnoreZone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IgnoreZone::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_IgnoreZone.data,
    qt_meta_data_IgnoreZone,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IgnoreZone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IgnoreZone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IgnoreZone.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int IgnoreZone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OuterLoopGain_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OuterLoopGain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OuterLoopGain_t qt_meta_stringdata_OuterLoopGain = {
    {
QT_MOC_LITERAL(0, 0, 13) // "OuterLoopGain"

    },
    "OuterLoopGain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OuterLoopGain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OuterLoopGain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OuterLoopGain::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OuterLoopGain.data,
    qt_meta_data_OuterLoopGain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OuterLoopGain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OuterLoopGain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OuterLoopGain.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OuterLoopGain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_InnerLoopGain_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InnerLoopGain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InnerLoopGain_t qt_meta_stringdata_InnerLoopGain = {
    {
QT_MOC_LITERAL(0, 0, 13) // "InnerLoopGain"

    },
    "InnerLoopGain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InnerLoopGain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void InnerLoopGain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject InnerLoopGain::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_InnerLoopGain.data,
    qt_meta_data_InnerLoopGain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InnerLoopGain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InnerLoopGain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InnerLoopGain.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int InnerLoopGain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TimeConstant_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeConstant_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeConstant_t qt_meta_stringdata_TimeConstant = {
    {
QT_MOC_LITERAL(0, 0, 12) // "TimeConstant"

    },
    "TimeConstant"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeConstant[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TimeConstant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TimeConstant::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TimeConstant.data,
    qt_meta_data_TimeConstant,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimeConstant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeConstant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimeConstant.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TimeConstant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorEffectiveness_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorEffectiveness_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorEffectiveness_t qt_meta_stringdata_ActuatorEffectiveness = {
    {
QT_MOC_LITERAL(0, 0, 21) // "ActuatorEffectiveness"

    },
    "ActuatorEffectiveness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorEffectiveness[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ActuatorEffectiveness::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorEffectiveness::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_ActuatorEffectiveness.data,
    qt_meta_data_ActuatorEffectiveness,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorEffectiveness::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorEffectiveness::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorEffectiveness.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int ActuatorEffectiveness::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Scale_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scale_t qt_meta_stringdata_Scale = {
    {
QT_MOC_LITERAL(0, 0, 5) // "Scale"

    },
    "Scale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scale[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Scale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Scale::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_Scale.data,
    qt_meta_data_Scale,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Scale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scale.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int Scale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LqrKi_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LqrKi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LqrKi_t qt_meta_stringdata_LqrKi = {
    {
QT_MOC_LITERAL(0, 0, 5) // "LqrKi"

    },
    "LqrKi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LqrKi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LqrKi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LqrKi::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LqrKi.data,
    qt_meta_data_LqrKi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LqrKi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LqrKi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LqrKi.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LqrKi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DcGain_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DcGain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DcGain_t qt_meta_stringdata_DcGain = {
    {
QT_MOC_LITERAL(0, 0, 6) // "DcGain"

    },
    "DcGain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DcGain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DcGain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DcGain::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_DcGain.data,
    qt_meta_data_DcGain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DcGain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DcGain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DcGain.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int DcGain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TorqueKp_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorqueKp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorqueKp_t qt_meta_stringdata_TorqueKp = {
    {
QT_MOC_LITERAL(0, 0, 8) // "TorqueKp"

    },
    "TorqueKp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorqueKp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TorqueKp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorqueKp::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TorqueKp.data,
    qt_meta_data_TorqueKp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorqueKp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorqueKp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorqueKp.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TorqueKp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TorqueKf_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorqueKf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorqueKf_t qt_meta_stringdata_TorqueKf = {
    {
QT_MOC_LITERAL(0, 0, 8) // "TorqueKf"

    },
    "TorqueKf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorqueKf[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TorqueKf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorqueKf::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TorqueKf.data,
    qt_meta_data_TorqueKf,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorqueKf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorqueKf::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorqueKf.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TorqueKf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TorqueKi_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorqueKi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorqueKi_t qt_meta_stringdata_TorqueKi = {
    {
QT_MOC_LITERAL(0, 0, 8) // "TorqueKi"

    },
    "TorqueKi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorqueKi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TorqueKi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorqueKi::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TorqueKi.data,
    qt_meta_data_TorqueKi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorqueKi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorqueKi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorqueKi.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TorqueKi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TorqueFriction_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorqueFriction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorqueFriction_t qt_meta_stringdata_TorqueFriction = {
    {
QT_MOC_LITERAL(0, 0, 14) // "TorqueFriction"

    },
    "TorqueFriction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorqueFriction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TorqueFriction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorqueFriction::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TorqueFriction.data,
    qt_meta_data_TorqueFriction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorqueFriction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorqueFriction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorqueFriction.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TorqueFriction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TorqueMaxLatAccel_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorqueMaxLatAccel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorqueMaxLatAccel_t qt_meta_stringdata_TorqueMaxLatAccel = {
    {
QT_MOC_LITERAL(0, 0, 17) // "TorqueMaxLatAccel"

    },
    "TorqueMaxLatAccel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorqueMaxLatAccel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TorqueMaxLatAccel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorqueMaxLatAccel::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TorqueMaxLatAccel.data,
    qt_meta_data_TorqueMaxLatAccel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorqueMaxLatAccel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorqueMaxLatAccel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorqueMaxLatAccel.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TorqueMaxLatAccel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TorqueAngDeadZone_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorqueAngDeadZone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorqueAngDeadZone_t qt_meta_stringdata_TorqueAngDeadZone = {
    {
QT_MOC_LITERAL(0, 0, 17) // "TorqueAngDeadZone"

    },
    "TorqueAngDeadZone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorqueAngDeadZone[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TorqueAngDeadZone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TorqueAngDeadZone::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_TorqueAngDeadZone.data,
    qt_meta_data_TorqueAngDeadZone,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorqueAngDeadZone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorqueAngDeadZone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorqueAngDeadZone.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int TorqueAngDeadZone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerAngleCorrection_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerAngleCorrection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerAngleCorrection_t qt_meta_stringdata_SteerAngleCorrection = {
    {
QT_MOC_LITERAL(0, 0, 20) // "SteerAngleCorrection"

    },
    "SteerAngleCorrection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerAngleCorrection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerAngleCorrection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerAngleCorrection::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SteerAngleCorrection.data,
    qt_meta_data_SteerAngleCorrection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerAngleCorrection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerAngleCorrection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerAngleCorrection.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SteerAngleCorrection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MaxSteer_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaxSteer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaxSteer_t qt_meta_stringdata_MaxSteer = {
    {
QT_MOC_LITERAL(0, 0, 8) // "MaxSteer"

    },
    "MaxSteer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaxSteer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MaxSteer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MaxSteer::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MaxSteer.data,
    qt_meta_data_MaxSteer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MaxSteer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaxSteer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaxSteer.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MaxSteer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MaxRTDelta_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaxRTDelta_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaxRTDelta_t qt_meta_stringdata_MaxRTDelta = {
    {
QT_MOC_LITERAL(0, 0, 10) // "MaxRTDelta"

    },
    "MaxRTDelta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaxRTDelta[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MaxRTDelta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MaxRTDelta::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MaxRTDelta.data,
    qt_meta_data_MaxRTDelta,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MaxRTDelta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaxRTDelta::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaxRTDelta.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MaxRTDelta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MaxRateUp_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaxRateUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaxRateUp_t qt_meta_stringdata_MaxRateUp = {
    {
QT_MOC_LITERAL(0, 0, 9) // "MaxRateUp"

    },
    "MaxRateUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaxRateUp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MaxRateUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MaxRateUp::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MaxRateUp.data,
    qt_meta_data_MaxRateUp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MaxRateUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaxRateUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaxRateUp.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MaxRateUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MaxRateDown_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaxRateDown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaxRateDown_t qt_meta_stringdata_MaxRateDown = {
    {
QT_MOC_LITERAL(0, 0, 11) // "MaxRateDown"

    },
    "MaxRateDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaxRateDown[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MaxRateDown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MaxRateDown::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MaxRateDown.data,
    qt_meta_data_MaxRateDown,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MaxRateDown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaxRateDown::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaxRateDown.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MaxRateDown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SteerThreshold_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SteerThreshold_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SteerThreshold_t qt_meta_stringdata_SteerThreshold = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SteerThreshold"

    },
    "SteerThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SteerThreshold[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SteerThreshold::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SteerThreshold::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SteerThreshold.data,
    qt_meta_data_SteerThreshold,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SteerThreshold::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SteerThreshold::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SteerThreshold.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SteerThreshold::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RecordCount_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecordCount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecordCount_t qt_meta_stringdata_RecordCount = {
    {
QT_MOC_LITERAL(0, 0, 11) // "RecordCount"

    },
    "RecordCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecordCount[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RecordCount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RecordCount::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RecordCount.data,
    qt_meta_data_RecordCount,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RecordCount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecordCount::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecordCount.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RecordCount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RecordQuality_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecordQuality_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecordQuality_t qt_meta_stringdata_RecordQuality = {
    {
QT_MOC_LITERAL(0, 0, 13) // "RecordQuality"

    },
    "RecordQuality"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecordQuality[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RecordQuality::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RecordQuality::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RecordQuality.data,
    qt_meta_data_RecordQuality,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RecordQuality::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecordQuality::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecordQuality.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RecordQuality::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GitHash_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GitHash_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GitHash_t qt_meta_stringdata_GitHash = {
    {
QT_MOC_LITERAL(0, 0, 7) // "GitHash"

    },
    "GitHash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GitHash[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GitHash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GitHash::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_GitHash.data,
    qt_meta_data_GitHash,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GitHash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GitHash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GitHash.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int GitHash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RESChoice_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RESChoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RESChoice_t qt_meta_stringdata_RESChoice = {
    {
QT_MOC_LITERAL(0, 0, 9) // "RESChoice"

    },
    "RESChoice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RESChoice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RESChoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RESChoice::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RESChoice.data,
    qt_meta_data_RESChoice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RESChoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RESChoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RESChoice.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RESChoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MonitoringMode_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MonitoringMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MonitoringMode_t qt_meta_stringdata_MonitoringMode = {
    {
QT_MOC_LITERAL(0, 0, 14) // "MonitoringMode"

    },
    "MonitoringMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonitoringMode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MonitoringMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MonitoringMode::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MonitoringMode.data,
    qt_meta_data_MonitoringMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MonitoringMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonitoringMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MonitoringMode.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MonitoringMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MonitorEyesThreshold_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MonitorEyesThreshold_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MonitorEyesThreshold_t qt_meta_stringdata_MonitorEyesThreshold = {
    {
QT_MOC_LITERAL(0, 0, 20) // "MonitorEyesThreshold"

    },
    "MonitorEyesThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonitorEyesThreshold[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MonitorEyesThreshold::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MonitorEyesThreshold::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MonitorEyesThreshold.data,
    qt_meta_data_MonitorEyesThreshold,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MonitorEyesThreshold::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonitorEyesThreshold::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MonitorEyesThreshold.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MonitorEyesThreshold::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_NormalEyesThreshold_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NormalEyesThreshold_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NormalEyesThreshold_t qt_meta_stringdata_NormalEyesThreshold = {
    {
QT_MOC_LITERAL(0, 0, 19) // "NormalEyesThreshold"

    },
    "NormalEyesThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NormalEyesThreshold[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void NormalEyesThreshold::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NormalEyesThreshold::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_NormalEyesThreshold.data,
    qt_meta_data_NormalEyesThreshold,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NormalEyesThreshold::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NormalEyesThreshold::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NormalEyesThreshold.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int NormalEyesThreshold::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BlinkThreshold_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlinkThreshold_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlinkThreshold_t qt_meta_stringdata_BlinkThreshold = {
    {
QT_MOC_LITERAL(0, 0, 14) // "BlinkThreshold"

    },
    "BlinkThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlinkThreshold[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BlinkThreshold::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BlinkThreshold::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_BlinkThreshold.data,
    qt_meta_data_BlinkThreshold,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlinkThreshold::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlinkThreshold::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlinkThreshold.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int BlinkThreshold::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FanSpeedGain_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FanSpeedGain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FanSpeedGain_t qt_meta_stringdata_FanSpeedGain = {
    {
QT_MOC_LITERAL(0, 0, 12) // "FanSpeedGain"

    },
    "FanSpeedGain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FanSpeedGain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FanSpeedGain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FanSpeedGain::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_FanSpeedGain.data,
    qt_meta_data_FanSpeedGain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FanSpeedGain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FanSpeedGain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FanSpeedGain.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int FanSpeedGain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseGapTR_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseGapTR_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseGapTR_t qt_meta_stringdata_CruiseGapTR = {
    {
QT_MOC_LITERAL(0, 0, 11) // "CruiseGapTR"

    },
    "CruiseGapTR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseGapTR[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseGapTR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseGapTR::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CruiseGapTR.data,
    qt_meta_data_CruiseGapTR,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseGapTR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseGapTR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseGapTR.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CruiseGapTR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DynamicTRGap_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicTRGap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicTRGap_t qt_meta_stringdata_DynamicTRGap = {
    {
QT_MOC_LITERAL(0, 0, 12) // "DynamicTRGap"

    },
    "DynamicTRGap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicTRGap[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DynamicTRGap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DynamicTRGap::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_DynamicTRGap.data,
    qt_meta_data_DynamicTRGap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DynamicTRGap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicTRGap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicTRGap.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int DynamicTRGap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DynamicTRUD_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicTRUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicTRUD_t qt_meta_stringdata_DynamicTRUD = {
    {
QT_MOC_LITERAL(0, 0, 11) // "DynamicTRUD"

    },
    "DynamicTRUD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicTRUD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DynamicTRUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DynamicTRUD::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_DynamicTRUD.data,
    qt_meta_data_DynamicTRUD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DynamicTRUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicTRUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicTRUD.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int DynamicTRUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LCTimingFactor_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LCTimingFactor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LCTimingFactor_t qt_meta_stringdata_LCTimingFactor = {
    {
QT_MOC_LITERAL(0, 0, 14) // "LCTimingFactor"

    },
    "LCTimingFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LCTimingFactor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LCTimingFactor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LCTimingFactor::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LCTimingFactor.data,
    qt_meta_data_LCTimingFactor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LCTimingFactor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LCTimingFactor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LCTimingFactor.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LCTimingFactor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LCTimingFactorUD_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LCTimingFactorUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LCTimingFactorUD_t qt_meta_stringdata_LCTimingFactorUD = {
    {
QT_MOC_LITERAL(0, 0, 16) // "LCTimingFactorUD"

    },
    "LCTimingFactorUD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LCTimingFactorUD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LCTimingFactorUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LCTimingFactorUD::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LCTimingFactorUD.data,
    qt_meta_data_LCTimingFactorUD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LCTimingFactorUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LCTimingFactorUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LCTimingFactorUD.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LCTimingFactorUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoResCondition_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoResCondition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoResCondition_t qt_meta_stringdata_AutoResCondition = {
    {
QT_MOC_LITERAL(0, 0, 16) // "AutoResCondition"

    },
    "AutoResCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoResCondition[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoResCondition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoResCondition::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_AutoResCondition.data,
    qt_meta_data_AutoResCondition,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoResCondition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoResCondition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoResCondition.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int AutoResCondition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoResLimitTime_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoResLimitTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoResLimitTime_t qt_meta_stringdata_AutoResLimitTime = {
    {
QT_MOC_LITERAL(0, 0, 16) // "AutoResLimitTime"

    },
    "AutoResLimitTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoResLimitTime[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoResLimitTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoResLimitTime::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_AutoResLimitTime.data,
    qt_meta_data_AutoResLimitTime,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoResLimitTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoResLimitTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoResLimitTime.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int AutoResLimitTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoEnableSpeed_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoEnableSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoEnableSpeed_t qt_meta_stringdata_AutoEnableSpeed = {
    {
QT_MOC_LITERAL(0, 0, 15) // "AutoEnableSpeed"

    },
    "AutoEnableSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoEnableSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoEnableSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoEnableSpeed::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_AutoEnableSpeed.data,
    qt_meta_data_AutoEnableSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoEnableSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoEnableSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoEnableSpeed.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int AutoEnableSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CamDecelDistAdd_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CamDecelDistAdd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CamDecelDistAdd_t qt_meta_stringdata_CamDecelDistAdd = {
    {
QT_MOC_LITERAL(0, 0, 15) // "CamDecelDistAdd"

    },
    "CamDecelDistAdd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CamDecelDistAdd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CamDecelDistAdd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CamDecelDistAdd::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CamDecelDistAdd.data,
    qt_meta_data_CamDecelDistAdd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CamDecelDistAdd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CamDecelDistAdd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CamDecelDistAdd.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CamDecelDistAdd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LiveSRPercent_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LiveSRPercent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LiveSRPercent_t qt_meta_stringdata_LiveSRPercent = {
    {
QT_MOC_LITERAL(0, 0, 13) // "LiveSRPercent"

    },
    "LiveSRPercent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LiveSRPercent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LiveSRPercent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LiveSRPercent::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LiveSRPercent.data,
    qt_meta_data_LiveSRPercent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LiveSRPercent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LiveSRPercent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LiveSRPercent.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LiveSRPercent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VCurvSpeedUD_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VCurvSpeedUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VCurvSpeedUD_t qt_meta_stringdata_VCurvSpeedUD = {
    {
QT_MOC_LITERAL(0, 0, 12) // "VCurvSpeedUD"

    },
    "VCurvSpeedUD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VCurvSpeedUD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VCurvSpeedUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VCurvSpeedUD::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_VCurvSpeedUD.data,
    qt_meta_data_VCurvSpeedUD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VCurvSpeedUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VCurvSpeedUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VCurvSpeedUD.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int VCurvSpeedUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VCurvSpeed_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VCurvSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VCurvSpeed_t qt_meta_stringdata_VCurvSpeed = {
    {
QT_MOC_LITERAL(0, 0, 10) // "VCurvSpeed"

    },
    "VCurvSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VCurvSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VCurvSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VCurvSpeed::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_VCurvSpeed.data,
    qt_meta_data_VCurvSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VCurvSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VCurvSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VCurvSpeed.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int VCurvSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OCurvSpeedUD_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCurvSpeedUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCurvSpeedUD_t qt_meta_stringdata_OCurvSpeedUD = {
    {
QT_MOC_LITERAL(0, 0, 12) // "OCurvSpeedUD"

    },
    "OCurvSpeedUD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCurvSpeedUD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OCurvSpeedUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OCurvSpeedUD::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OCurvSpeedUD.data,
    qt_meta_data_OCurvSpeedUD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCurvSpeedUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCurvSpeedUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCurvSpeedUD.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OCurvSpeedUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OCurvSpeed_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCurvSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCurvSpeed_t qt_meta_stringdata_OCurvSpeed = {
    {
QT_MOC_LITERAL(0, 0, 10) // "OCurvSpeed"

    },
    "OCurvSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCurvSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OCurvSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OCurvSpeed::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OCurvSpeed.data,
    qt_meta_data_OCurvSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCurvSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCurvSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCurvSpeed.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OCurvSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GetOffAlert_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetOffAlert_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetOffAlert_t qt_meta_stringdata_GetOffAlert = {
    {
QT_MOC_LITERAL(0, 0, 11) // "GetOffAlert"

    },
    "GetOffAlert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetOffAlert[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GetOffAlert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GetOffAlert::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_GetOffAlert.data,
    qt_meta_data_GetOffAlert,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetOffAlert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetOffAlert::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetOffAlert.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int GetOffAlert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKRNaviSelect_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKRNaviSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKRNaviSelect_t qt_meta_stringdata_OPKRNaviSelect = {
    {
QT_MOC_LITERAL(0, 0, 14) // "OPKRNaviSelect"

    },
    "OPKRNaviSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKRNaviSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKRNaviSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKRNaviSelect::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OPKRNaviSelect.data,
    qt_meta_data_OPKRNaviSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKRNaviSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKRNaviSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKRNaviSelect.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OPKRNaviSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKRServerSelect_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKRServerSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKRServerSelect_t qt_meta_stringdata_OPKRServerSelect = {
    {
QT_MOC_LITERAL(0, 0, 16) // "OPKRServerSelect"

    },
    "OPKRServerSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKRServerSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKRServerSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKRServerSelect::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OPKRServerSelect.data,
    qt_meta_data_OPKRServerSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKRServerSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKRServerSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKRServerSelect.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OPKRServerSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKRServerAPI_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKRServerAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKRServerAPI_t qt_meta_stringdata_OPKRServerAPI = {
    {
QT_MOC_LITERAL(0, 0, 13) // "OPKRServerAPI"

    },
    "OPKRServerAPI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKRServerAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKRServerAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKRServerAPI::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OPKRServerAPI.data,
    qt_meta_data_OPKRServerAPI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKRServerAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKRServerAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKRServerAPI.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OPKRServerAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKRMapboxStyle_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKRMapboxStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKRMapboxStyle_t qt_meta_stringdata_OPKRMapboxStyle = {
    {
QT_MOC_LITERAL(0, 0, 15) // "OPKRMapboxStyle"

    },
    "OPKRMapboxStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKRMapboxStyle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKRMapboxStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKRMapboxStyle::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OPKRMapboxStyle.data,
    qt_meta_data_OPKRMapboxStyle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKRMapboxStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKRMapboxStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKRMapboxStyle.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OPKRMapboxStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RESCountatStandstill_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RESCountatStandstill_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RESCountatStandstill_t qt_meta_stringdata_RESCountatStandstill = {
    {
QT_MOC_LITERAL(0, 0, 20) // "RESCountatStandstill"

    },
    "RESCountatStandstill"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RESCountatStandstill[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RESCountatStandstill::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RESCountatStandstill::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RESCountatStandstill.data,
    qt_meta_data_RESCountatStandstill,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RESCountatStandstill::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RESCountatStandstill::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RESCountatStandstill.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RESCountatStandstill::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpeedLimitSignType_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedLimitSignType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedLimitSignType_t qt_meta_stringdata_SpeedLimitSignType = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SpeedLimitSignType"

    },
    "SpeedLimitSignType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedLimitSignType[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpeedLimitSignType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpeedLimitSignType::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SpeedLimitSignType.data,
    qt_meta_data_SpeedLimitSignType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpeedLimitSignType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedLimitSignType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedLimitSignType.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SpeedLimitSignType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RadarLongHelperOption_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadarLongHelperOption_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadarLongHelperOption_t qt_meta_stringdata_RadarLongHelperOption = {
    {
QT_MOC_LITERAL(0, 0, 21) // "RadarLongHelperOption"

    },
    "RadarLongHelperOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadarLongHelperOption[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RadarLongHelperOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RadarLongHelperOption::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RadarLongHelperOption.data,
    qt_meta_data_RadarLongHelperOption,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadarLongHelperOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadarLongHelperOption::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadarLongHelperOption.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RadarLongHelperOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CurvDecelSelect_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurvDecelSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurvDecelSelect_t qt_meta_stringdata_CurvDecelSelect = {
    {
QT_MOC_LITERAL(0, 0, 15) // "CurvDecelSelect"

    },
    "CurvDecelSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurvDecelSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CurvDecelSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CurvDecelSelect::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CurvDecelSelect.data,
    qt_meta_data_CurvDecelSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurvDecelSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurvDecelSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurvDecelSelect.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CurvDecelSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AutoRESDelay_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoRESDelay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoRESDelay_t qt_meta_stringdata_AutoRESDelay = {
    {
QT_MOC_LITERAL(0, 0, 12) // "AutoRESDelay"

    },
    "AutoRESDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoRESDelay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AutoRESDelay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoRESDelay::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_AutoRESDelay.data,
    qt_meta_data_AutoRESDelay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoRESDelay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoRESDelay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoRESDelay.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int AutoRESDelay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OSMCustomSpeedLimitUD_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSMCustomSpeedLimitUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSMCustomSpeedLimitUD_t qt_meta_stringdata_OSMCustomSpeedLimitUD = {
    {
QT_MOC_LITERAL(0, 0, 21) // "OSMCustomSpeedLimitUD"

    },
    "OSMCustomSpeedLimitUD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSMCustomSpeedLimitUD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OSMCustomSpeedLimitUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OSMCustomSpeedLimitUD::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OSMCustomSpeedLimitUD.data,
    qt_meta_data_OSMCustomSpeedLimitUD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OSMCustomSpeedLimitUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSMCustomSpeedLimitUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSMCustomSpeedLimitUD.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OSMCustomSpeedLimitUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OSMCustomSpeedLimit_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSMCustomSpeedLimit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSMCustomSpeedLimit_t qt_meta_stringdata_OSMCustomSpeedLimit = {
    {
QT_MOC_LITERAL(0, 0, 19) // "OSMCustomSpeedLimit"

    },
    "OSMCustomSpeedLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSMCustomSpeedLimit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OSMCustomSpeedLimit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OSMCustomSpeedLimit::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OSMCustomSpeedLimit.data,
    qt_meta_data_OSMCustomSpeedLimit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OSMCustomSpeedLimit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSMCustomSpeedLimit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSMCustomSpeedLimit.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OSMCustomSpeedLimit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DesiredCurvatureLimit_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesiredCurvatureLimit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesiredCurvatureLimit_t qt_meta_stringdata_DesiredCurvatureLimit = {
    {
QT_MOC_LITERAL(0, 0, 21) // "DesiredCurvatureLimit"

    },
    "DesiredCurvatureLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesiredCurvatureLimit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DesiredCurvatureLimit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DesiredCurvatureLimit::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_DesiredCurvatureLimit.data,
    qt_meta_data_DesiredCurvatureLimit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DesiredCurvatureLimit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesiredCurvatureLimit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesiredCurvatureLimit.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int DesiredCurvatureLimit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DynamicTRBySpeed_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicTRBySpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicTRBySpeed_t qt_meta_stringdata_DynamicTRBySpeed = {
    {
QT_MOC_LITERAL(0, 0, 16) // "DynamicTRBySpeed"

    },
    "DynamicTRBySpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicTRBySpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DynamicTRBySpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DynamicTRBySpeed::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_DynamicTRBySpeed.data,
    qt_meta_data_DynamicTRBySpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DynamicTRBySpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicTRBySpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicTRBySpeed.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int DynamicTRBySpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LaneWidth_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LaneWidth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LaneWidth_t qt_meta_stringdata_LaneWidth = {
    {
QT_MOC_LITERAL(0, 0, 9) // "LaneWidth"

    },
    "LaneWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LaneWidth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LaneWidth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LaneWidth::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_LaneWidth.data,
    qt_meta_data_LaneWidth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LaneWidth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LaneWidth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LaneWidth.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int LaneWidth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpeedLaneWidthUD_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedLaneWidthUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedLaneWidthUD_t qt_meta_stringdata_SpeedLaneWidthUD = {
    {
QT_MOC_LITERAL(0, 0, 16) // "SpeedLaneWidthUD"

    },
    "SpeedLaneWidthUD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedLaneWidthUD[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpeedLaneWidthUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpeedLaneWidthUD::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SpeedLaneWidthUD.data,
    qt_meta_data_SpeedLaneWidthUD,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpeedLaneWidthUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedLaneWidthUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedLaneWidthUD.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SpeedLaneWidthUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SpeedLaneWidth_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedLaneWidth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedLaneWidth_t qt_meta_stringdata_SpeedLaneWidth = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SpeedLaneWidth"

    },
    "SpeedLaneWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedLaneWidth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpeedLaneWidth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SpeedLaneWidth::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_SpeedLaneWidth.data,
    qt_meta_data_SpeedLaneWidth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpeedLaneWidth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedLaneWidth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedLaneWidth.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int SpeedLaneWidth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKRTopTextView_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKRTopTextView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKRTopTextView_t qt_meta_stringdata_OPKRTopTextView = {
    {
QT_MOC_LITERAL(0, 0, 15) // "OPKRTopTextView"

    },
    "OPKRTopTextView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKRTopTextView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKRTopTextView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKRTopTextView::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OPKRTopTextView.data,
    qt_meta_data_OPKRTopTextView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKRTopTextView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKRTopTextView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKRTopTextView.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OPKRTopTextView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OPKREdgeOffset_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPKREdgeOffset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPKREdgeOffset_t qt_meta_stringdata_OPKREdgeOffset = {
    {
QT_MOC_LITERAL(0, 0, 14) // "OPKREdgeOffset"

    },
    "OPKREdgeOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPKREdgeOffset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OPKREdgeOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPKREdgeOffset::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_OPKREdgeOffset.data,
    qt_meta_data_OPKREdgeOffset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OPKREdgeOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPKREdgeOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPKREdgeOffset.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int OPKREdgeOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToAvoidLKASFault_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToAvoidLKASFault_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToAvoidLKASFault_t qt_meta_stringdata_ToAvoidLKASFault = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ToAvoidLKASFault"

    },
    "ToAvoidLKASFault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToAvoidLKASFault[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ToAvoidLKASFault::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToAvoidLKASFault::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_ToAvoidLKASFault.data,
    qt_meta_data_ToAvoidLKASFault,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToAvoidLKASFault::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToAvoidLKASFault::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToAvoidLKASFault.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int ToAvoidLKASFault::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RoutineDriveOption_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoutineDriveOption_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoutineDriveOption_t qt_meta_stringdata_RoutineDriveOption = {
    {
QT_MOC_LITERAL(0, 0, 18) // "RoutineDriveOption"

    },
    "RoutineDriveOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoutineDriveOption[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RoutineDriveOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RoutineDriveOption::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RoutineDriveOption.data,
    qt_meta_data_RoutineDriveOption,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoutineDriveOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoutineDriveOption::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoutineDriveOption.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RoutineDriveOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RPMAnimatedMaxValue_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPMAnimatedMaxValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPMAnimatedMaxValue_t qt_meta_stringdata_RPMAnimatedMaxValue = {
    {
QT_MOC_LITERAL(0, 0, 19) // "RPMAnimatedMaxValue"

    },
    "RPMAnimatedMaxValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPMAnimatedMaxValue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RPMAnimatedMaxValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RPMAnimatedMaxValue::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_RPMAnimatedMaxValue.data,
    qt_meta_data_RPMAnimatedMaxValue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RPMAnimatedMaxValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPMAnimatedMaxValue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RPMAnimatedMaxValue.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int RPMAnimatedMaxValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_UserSpecificFeature_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserSpecificFeature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserSpecificFeature_t qt_meta_stringdata_UserSpecificFeature = {
    {
QT_MOC_LITERAL(0, 0, 19) // "UserSpecificFeature"

    },
    "UserSpecificFeature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserSpecificFeature[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void UserSpecificFeature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UserSpecificFeature::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_UserSpecificFeature.data,
    qt_meta_data_UserSpecificFeature,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserSpecificFeature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserSpecificFeature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserSpecificFeature.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int UserSpecificFeature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MultipleLatSelect_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultipleLatSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultipleLatSelect_t qt_meta_stringdata_MultipleLatSelect = {
    {
QT_MOC_LITERAL(0, 0, 17) // "MultipleLatSelect"

    },
    "MultipleLatSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultipleLatSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MultipleLatSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MultipleLatSelect::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MultipleLatSelect.data,
    qt_meta_data_MultipleLatSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MultipleLatSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultipleLatSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultipleLatSelect.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MultipleLatSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MultipleLateralSpeed_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultipleLateralSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultipleLateralSpeed_t qt_meta_stringdata_MultipleLateralSpeed = {
    {
QT_MOC_LITERAL(0, 0, 20) // "MultipleLateralSpeed"

    },
    "MultipleLateralSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultipleLateralSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MultipleLateralSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MultipleLateralSpeed::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MultipleLateralSpeed.data,
    qt_meta_data_MultipleLateralSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MultipleLateralSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultipleLateralSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultipleLateralSpeed.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MultipleLateralSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MultipleLateralAngle_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultipleLateralAngle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultipleLateralAngle_t qt_meta_stringdata_MultipleLateralAngle = {
    {
QT_MOC_LITERAL(0, 0, 20) // "MultipleLateralAngle"

    },
    "MultipleLateralAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultipleLateralAngle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MultipleLateralAngle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MultipleLateralAngle::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_MultipleLateralAngle.data,
    qt_meta_data_MultipleLateralAngle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MultipleLateralAngle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultipleLateralAngle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultipleLateralAngle.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int MultipleLateralAngle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StoppingDist_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StoppingDist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StoppingDist_t qt_meta_stringdata_StoppingDist = {
    {
QT_MOC_LITERAL(0, 0, 12) // "StoppingDist"

    },
    "StoppingDist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StoppingDist[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StoppingDist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StoppingDist::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_StoppingDist.data,
    qt_meta_data_StoppingDist,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StoppingDist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StoppingDist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StoppingDist.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int StoppingDist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VariableCruiseLevel_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VariableCruiseLevel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VariableCruiseLevel_t qt_meta_stringdata_VariableCruiseLevel = {
    {
QT_MOC_LITERAL(0, 0, 19) // "VariableCruiseLevel"

    },
    "VariableCruiseLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VariableCruiseLevel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VariableCruiseLevel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VariableCruiseLevel::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_VariableCruiseLevel.data,
    qt_meta_data_VariableCruiseLevel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VariableCruiseLevel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VariableCruiseLevel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VariableCruiseLevel.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int VariableCruiseLevel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ExternalDeviceIP_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExternalDeviceIP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExternalDeviceIP_t qt_meta_stringdata_ExternalDeviceIP = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ExternalDeviceIP"

    },
    "ExternalDeviceIP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExternalDeviceIP[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ExternalDeviceIP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExternalDeviceIP::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_ExternalDeviceIP.data,
    qt_meta_data_ExternalDeviceIP,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExternalDeviceIP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExternalDeviceIP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExternalDeviceIP.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int ExternalDeviceIP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DoNotDisturbMode_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DoNotDisturbMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DoNotDisturbMode_t qt_meta_stringdata_DoNotDisturbMode = {
    {
QT_MOC_LITERAL(0, 0, 16) // "DoNotDisturbMode"

    },
    "DoNotDisturbMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoNotDisturbMode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DoNotDisturbMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DoNotDisturbMode::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_DoNotDisturbMode.data,
    qt_meta_data_DoNotDisturbMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DoNotDisturbMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoNotDisturbMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DoNotDisturbMode.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int DoNotDisturbMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseGapBySpd_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseGapBySpd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseGapBySpd_t qt_meta_stringdata_CruiseGapBySpd = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CruiseGapBySpd"

    },
    "CruiseGapBySpd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseGapBySpd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseGapBySpd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseGapBySpd::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CruiseGapBySpd.data,
    qt_meta_data_CruiseGapBySpd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseGapBySpd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseGapBySpd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseGapBySpd.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CruiseGapBySpd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CruiseSetwithRoadLimitSpeedOffset_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CruiseSetwithRoadLimitSpeedOffset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CruiseSetwithRoadLimitSpeedOffset_t qt_meta_stringdata_CruiseSetwithRoadLimitSpeedOffset = {
    {
QT_MOC_LITERAL(0, 0, 33) // "CruiseSetwithRoadLimitSpeedOf..."

    },
    "CruiseSetwithRoadLimitSpeedOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CruiseSetwithRoadLimitSpeedOffset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CruiseSetwithRoadLimitSpeedOffset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CruiseSetwithRoadLimitSpeedOffset::staticMetaObject = { {
    &AbstractControl::staticMetaObject,
    qt_meta_stringdata_CruiseSetwithRoadLimitSpeedOffset.data,
    qt_meta_data_CruiseSetwithRoadLimitSpeedOffset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CruiseSetwithRoadLimitSpeedOffset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CruiseSetwithRoadLimitSpeedOffset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CruiseSetwithRoadLimitSpeedOffset.stringdata0))
        return static_cast<void*>(this);
    return AbstractControl::qt_metacast(_clname);
}

int CruiseSetwithRoadLimitSpeedOffset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
