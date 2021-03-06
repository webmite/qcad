// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMAVIEWPORTDATA_H
        #define RECMAVIEWPORTDATA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RViewportData.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaViewportData {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        castToShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewportId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewportId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewTarget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setViewTarget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRotation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOverall
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOverall
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOff
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOff
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RViewportData* getSelf(const QString& fName, QScriptContext* context)
    ;static RViewportData* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumStatus(QScriptEngine* engine, const RViewportData::Status& value)
    ;static  void fromScriptValueEnumStatus(const QScriptValue& value, RViewportData::Status& out)
    ;};
    #endif
    