/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSMimeType.h"

#include "JSPlugin.h"
#include "KURL.h"
#include "MimeType.h"
#include "Plugin.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMimeType);

/* Hash table */

static const HashTableValue JSMimeTypeTableValues[6] =
{
    { "type", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMimeTypeType), (intptr_t)0 },
    { "suffixes", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMimeTypeSuffixes), (intptr_t)0 },
    { "description", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMimeTypeDescription), (intptr_t)0 },
    { "enabledPlugin", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMimeTypeEnabledPlugin), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMimeTypeConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSMimeTypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSMimeTypeTableValues, 0 };
#else
    { 16, 15, JSMimeTypeTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSMimeTypeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSMimeTypeConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSMimeTypeConstructorTableValues, 0 };
#else
    { 1, 0, JSMimeTypeConstructorTableValues, 0 };
#endif

class JSMimeTypeConstructor : public DOMConstructorObject {
public:
    JSMimeTypeConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSMimeTypeConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSMimeTypePrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSMimeTypeConstructor::s_info = { "MimeTypeConstructor", 0, &JSMimeTypeConstructorTable, 0 };

bool JSMimeTypeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMimeTypeConstructor, DOMObject>(exec, &JSMimeTypeConstructorTable, this, propertyName, slot);
}

bool JSMimeTypeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMimeTypeConstructor, DOMObject>(exec, &JSMimeTypeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSMimeTypePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSMimeTypePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSMimeTypePrototypeTableValues, 0 };
#else
    { 1, 0, JSMimeTypePrototypeTableValues, 0 };
#endif

const ClassInfo JSMimeTypePrototype::s_info = { "MimeTypePrototype", 0, &JSMimeTypePrototypeTable, 0 };

JSObject* JSMimeTypePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMimeType>(exec, globalObject);
}

const ClassInfo JSMimeType::s_info = { "MimeType", 0, &JSMimeTypeTable, 0 };

JSMimeType::JSMimeType(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<MimeType> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSMimeType::~JSMimeType()
{
    forgetDOMObject(this, impl());
}

JSObject* JSMimeType::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSMimeTypePrototype(JSMimeTypePrototype::createStructure(globalObject->objectPrototype()));
}

bool JSMimeType::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMimeType, Base>(exec, &JSMimeTypeTable, this, propertyName, slot);
}

bool JSMimeType::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMimeType, Base>(exec, &JSMimeTypeTable, this, propertyName, descriptor);
}

JSValue jsMimeTypeType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMimeType* castedThis = static_cast<JSMimeType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MimeType* imp = static_cast<MimeType*>(castedThis->impl());
    JSValue result = jsString(exec, imp->type());
    return result;
}

JSValue jsMimeTypeSuffixes(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMimeType* castedThis = static_cast<JSMimeType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MimeType* imp = static_cast<MimeType*>(castedThis->impl());
    JSValue result = jsString(exec, imp->suffixes());
    return result;
}

JSValue jsMimeTypeDescription(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMimeType* castedThis = static_cast<JSMimeType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MimeType* imp = static_cast<MimeType*>(castedThis->impl());
    JSValue result = jsString(exec, imp->description());
    return result;
}

JSValue jsMimeTypeEnabledPlugin(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMimeType* castedThis = static_cast<JSMimeType*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MimeType* imp = static_cast<MimeType*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->enabledPlugin()));
    return result;
}

JSValue jsMimeTypeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMimeType* domObject = static_cast<JSMimeType*>(asObject(slotBase));
    return JSMimeType::getConstructor(exec, domObject->globalObject());
}
JSValue JSMimeType::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMimeTypeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MimeType* object)
{
    return getDOMObjectWrapper<JSMimeType>(exec, globalObject, object);
}
MimeType* toMimeType(JSC::JSValue value)
{
    return value.inherits(&JSMimeType::s_info) ? static_cast<JSMimeType*>(asObject(value))->impl() : 0;
}

}