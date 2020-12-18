// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPaletteListenerAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaPaletteListener.h"
                 void REcmaPaletteListenerAdapter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPaletteListenerAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaPaletteListener::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RPaletteListener
        REcmaHelper::registerFunction(&engine, proto, getRPaletteListener, "getRPaletteListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RPaletteListener:
        

        // methods of secondary base class RPaletteListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updatePalette, "updatePalette");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPaletteListenerAdapter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RPaletteListenerAdapter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPaletteListenerAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPaletteListenerAdapter::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPaletteListenerAdapter(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RPaletteListenerAdapter
                    * cppResult =
                    new
                    RPaletteListenerAdapter
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                ) /* type: QObject * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RPaletteListenerAdapter
                    * cppResult =
                    new
                    RPaletteListenerAdapter
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPaletteListenerAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaPaletteListenerAdapter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RPaletteListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaPaletteListenerAdapter::getRPaletteListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPaletteListener* cppResult =
                    qscriptvalue_cast<RPaletteListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaPaletteListenerAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPaletteListenerAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPaletteListenerAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RPaletteListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RPaletteListener:
        

        // methods of secondary base class RPaletteListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPaletteListenerAdapter::updatePalette
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPaletteListenerAdapter::updatePalette", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPaletteListenerAdapter::updatePalette";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPaletteListenerAdapter* self = 
                        getSelf("updatePalette", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updatePalette();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPaletteListenerAdapter.updatePalette().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPaletteListenerAdapter::updatePalette", context, engine);
            return result;
        }
         QScriptValue REcmaPaletteListenerAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPaletteListenerAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPaletteListenerAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPaletteListenerAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPaletteListenerAdapter* self = getSelf("RPaletteListenerAdapter", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPaletteListenerAdapter* REcmaPaletteListenerAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPaletteListenerAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPaletteListenerAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPaletteListenerAdapter.%1(): "
                        "This object is not a RPaletteListenerAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPaletteListenerAdapter* REcmaPaletteListenerAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPaletteListenerAdapter* selfBase = getSelf(fName, context);
                RPaletteListenerAdapter* self = dynamic_cast<RPaletteListenerAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPaletteListenerAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPaletteListenerAdapter.%1(): "
                    "This object is not a RPaletteListenerAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RPaletteListenerAdapter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RPaletteListenerAdapter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RPaletteListenerAdapter*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    