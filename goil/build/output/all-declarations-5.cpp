#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_uint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_uint_36__34__5F_class * p = (const cPtr_void_5F_uint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_uint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_uint_36__34__5F_class::objectCompare (const GALGAS_void_5F_uint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class::GALGAS_void_5F_uint_36__34__5F_class (void) :
GALGAS_uint_36__34__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_uint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_uint_36__34_::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class::GALGAS_void_5F_uint_36__34__5F_class (const cPtr_void_5F_uint_36__34__5F_class * inSourcePtr) :
GALGAS_uint_36__34__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_uint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_uint_36__34_ & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_uint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_uint64_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_uint_36__34__5F_class::cPtr_void_5F_uint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_uint_36__34_ & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_uint_36__34__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_uint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ;
}

void cPtr_void_5F_uint_36__34__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_uint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_uint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_uint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_uint64_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ("void_uint64_class",
                                                      & kTypeDescriptor_GALGAS_uint_36__34__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_uint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_uint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_uint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_uint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_uint_36__34__5F_class GALGAS_void_5F_uint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_uint_36__34__5F_class result ;
  const GALGAS_void_5F_uint_36__34__5F_class * p = (const GALGAS_void_5F_uint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_uint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_uint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_sint_36__34__5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_sint_36__34__5F_class * p = (const cPtr_void_5F_sint_36__34__5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_sint_36__34__5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_sint_36__34__5F_class::objectCompare (const GALGAS_void_5F_sint_36__34__5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class::GALGAS_void_5F_sint_36__34__5F_class (void) :
GALGAS_sint_36__34__5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_sint_36__34__5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_sint_36__34_::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class::GALGAS_void_5F_sint_36__34__5F_class (const cPtr_void_5F_sint_36__34__5F_class * inSourcePtr) :
GALGAS_sint_36__34__5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_sint_36__34__5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                            const GALGAS_location & inAttribute_location,
                                                                                            const GALGAS_sint_36__34_ & inAttribute_value
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_36__34__5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_sint_36__34__5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_sint64_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_sint_36__34__5F_class::cPtr_void_5F_sint_36__34__5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                                        const GALGAS_location & in_location,
                                                                        const GALGAS_sint_36__34_ & in_value
                                                                        COMMA_LOCATION_ARGS) :
cPtr_sint_36__34__5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_sint_36__34__5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ;
}

void cPtr_void_5F_sint_36__34__5F_class::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@void_sint64_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_sint_36__34__5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_sint_36__34__5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_sint64_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ("void_sint64_class",
                                                      & kTypeDescriptor_GALGAS_sint_36__34__5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_sint_36__34__5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_sint_36__34__5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_sint_36__34__5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_sint_36__34__5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_sint_36__34__5F_class GALGAS_void_5F_sint_36__34__5F_class::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_sint_36__34__5F_class result ;
  const GALGAS_void_5F_sint_36__34__5F_class * p = (const GALGAS_void_5F_sint_36__34__5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_sint_36__34__5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_sint64_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_float_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_float_5F_class * p = (const cPtr_void_5F_float_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_float_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_float_5F_class::objectCompare (const GALGAS_void_5F_float_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class::GALGAS_void_5F_float_5F_class (void) :
GALGAS_float_5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_float_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_double::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class::GALGAS_void_5F_float_5F_class (const cPtr_void_5F_float_5F_class * inSourcePtr) :
GALGAS_float_5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_float_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                              const GALGAS_location & inAttribute_location,
                                                                              const GALGAS_double & inAttribute_value
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_float_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_float_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @void_float_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_float_5F_class::cPtr_void_5F_float_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                          const GALGAS_location & in_location,
                                                          const GALGAS_double & in_value
                                                          COMMA_LOCATION_ARGS) :
cPtr_float_5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_float_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_float_5F_class ;
}

void cPtr_void_5F_float_5F_class::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@void_float_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_float_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_float_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_float_class type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_float_5F_class ("void_float_class",
                                               & kTypeDescriptor_GALGAS_float_5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_float_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_float_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_float_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_float_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_float_5F_class GALGAS_void_5F_float_5F_class::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_float_5F_class result ;
  const GALGAS_void_5F_float_5F_class * p = (const GALGAS_void_5F_float_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_float_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_float_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_string_5F_class::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_string_5F_class * p = (const cPtr_void_5F_string_5F_class *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_string_5F_class) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_string_5F_class::objectCompare (const GALGAS_void_5F_string_5F_class & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class::GALGAS_void_5F_string_5F_class (void) :
GALGAS_string_5F_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_string_5F_class::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_string::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class::GALGAS_void_5F_string_5F_class (const cPtr_void_5F_string_5F_class * inSourcePtr) :
GALGAS_string_5F_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_string_5F_class) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                                const GALGAS_location & inAttribute_location,
                                                                                const GALGAS_string & inAttribute_value
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_string_5F_class result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_string_5F_class (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @void_string_class class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_string_5F_class::cPtr_void_5F_string_5F_class (const GALGAS_lstring & in_oil_5F_desc,
                                                            const GALGAS_location & in_location,
                                                            const GALGAS_string & in_value
                                                            COMMA_LOCATION_ARGS) :
cPtr_string_5F_class (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_string_5F_class::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_string_5F_class ;
}

void cPtr_void_5F_string_5F_class::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@void_string_class:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_string_5F_class::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_string_5F_class (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @void_string_class type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_string_5F_class ("void_string_class",
                                                & kTypeDescriptor_GALGAS_string_5F_class) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_string_5F_class::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_string_5F_class ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_string_5F_class::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_string_5F_class (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_string_5F_class GALGAS_void_5F_string_5F_class::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_string_5F_class result ;
  const GALGAS_void_5F_string_5F_class * p = (const GALGAS_void_5F_string_5F_class *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_string_5F_class *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_string_class", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_void_5F_bool_5F_t::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_void_5F_bool_5F_t * p = (const cPtr_void_5F_bool_5F_t *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_void_5F_bool_5F_t) ;
  if (kOperandEqual == result) {
    result = mAttribute_oil_5F_desc.objectCompare (p->mAttribute_oil_5F_desc) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_location.objectCompare (p->mAttribute_location) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_void_5F_bool_5F_t::objectCompare (const GALGAS_void_5F_bool_5F_t & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t::GALGAS_void_5F_bool_5F_t (void) :
GALGAS_bool_5F_t () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::constructor_default (LOCATION_ARGS) {
  return GALGAS_void_5F_bool_5F_t::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_bool::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t::GALGAS_void_5F_bool_5F_t (const cPtr_void_5F_bool_5F_t * inSourcePtr) :
GALGAS_bool_5F_t (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_void_5F_bool_5F_t) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::constructor_new (const GALGAS_lstring & inAttribute_oil_5F_desc,
                                                                    const GALGAS_location & inAttribute_location,
                                                                    const GALGAS_bool & inAttribute_value
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_bool_5F_t result ;
  if (inAttribute_oil_5F_desc.isValid () && inAttribute_location.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_void_5F_bool_5F_t (inAttribute_oil_5F_desc, inAttribute_location, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @void_bool_t class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_void_5F_bool_5F_t::cPtr_void_5F_bool_5F_t (const GALGAS_lstring & in_oil_5F_desc,
                                                const GALGAS_location & in_location,
                                                const GALGAS_bool & in_value
                                                COMMA_LOCATION_ARGS) :
cPtr_bool_5F_t (in_oil_5F_desc, in_location, in_value COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_void_5F_bool_5F_t::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_bool_5F_t ;
}

void cPtr_void_5F_bool_5F_t::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@void_bool_t:" ;
  mAttribute_oil_5F_desc.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_location.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_void_5F_bool_5F_t::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_void_5F_bool_5F_t (mAttribute_oil_5F_desc, mAttribute_location, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @void_bool_t type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_void_5F_bool_5F_t ("void_bool_t",
                                          & kTypeDescriptor_GALGAS_bool_5F_t) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_void_5F_bool_5F_t::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_void_5F_bool_5F_t ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_void_5F_bool_5F_t::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_void_5F_bool_5F_t (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_void_5F_bool_5F_t GALGAS_void_5F_bool_5F_t::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_void_5F_bool_5F_t result ;
  const GALGAS_void_5F_bool_5F_t * p = (const GALGAS_void_5F_bool_5F_t *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_void_5F_bool_5F_t *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("void_bool_t", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_oil_5F_obj::objectCompare (const GALGAS_oil_5F_obj & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj::GALGAS_oil_5F_obj (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj::GALGAS_oil_5F_obj (const cPtr_oil_5F_obj * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_oil_5F_obj) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_oil_5F_obj::getter_desc (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_oil_5F_obj * p = (const cPtr_oil_5F_obj *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_oil_5F_obj) ;
    result = p->mAttribute_desc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_oil_5F_obj::getter_desc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_desc ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @oil_obj class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_oil_5F_obj::cPtr_oil_5F_obj (const GALGAS_lstring & in_desc
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_desc (in_desc) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @oil_obj type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_oil_5F_obj ("oil_obj",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_oil_5F_obj::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_oil_5F_obj ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_oil_5F_obj::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_oil_5F_obj (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_oil_5F_obj GALGAS_oil_5F_obj::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_oil_5F_obj result ;
  const GALGAS_oil_5F_obj * p = (const GALGAS_oil_5F_obj *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_oil_5F_obj *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("oil_obj", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension method '@object_t set'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_object_5F_t_set> gExtensionMethodTable_object_5F_t_set ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_set (const int32_t inClassIndex,
                               extensionMethodSignature_object_5F_t_set inMethod) {
  gExtensionMethodTable_object_5F_t_set.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_set (const cPtr_object_5F_t * inObject,
                              const GALGAS_lstring constin_name,
                              GALGAS_gtlData & io_result,
                              C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_object_5F_t) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_object_5F_t_set f = NULL ;
    if (classIndex < gExtensionMethodTable_object_5F_t_set.count ()) {
      f = gExtensionMethodTable_object_5F_t_set (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_object_5F_t_set.count ()) {
           f = gExtensionMethodTable_object_5F_t_set (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_object_5F_t_set.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, io_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_object_5F_t_set (const cPtr_object_5F_t * /* inObject */,
                                             const GALGAS_lstring constinArgument_name,
                                             GALGAS_gtlData & /* ioArgument_result */,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 28)), GALGAS_string ("Attribute: ").add_operation (constinArgument_name.getter_string (SOURCE_FILE ("systemConfig.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 28)).add_operation (GALGAS_string (", Internal error"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 28)), fixItArray0  COMMA_SOURCE_FILE ("systemConfig.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_object_5F_t_set (void) {
  enterExtensionMethod_set (kTypeDescriptor_GALGAS_object_5F_t.mSlotID,
                            extensionMethod_object_5F_t_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_object_5F_t_set (void) {
  gExtensionMethodTable_object_5F_t_set.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_object_5F_t_set (defineExtensionMethod_object_5F_t_set,
                                            freeExtensionMethod_object_5F_t_set) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_applicationDefinition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_applicationDefinition) ;
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_cpuDescription.objectCompare (p->mAttribute_cpuDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_version.objectCompare (p->mAttribute_version) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_versionDescription.objectCompare (p->mAttribute_versionDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_objects.objectCompare (p->mAttribute_objects) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_applicationDefinition::objectCompare (const GALGAS_applicationDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition::GALGAS_applicationDefinition (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition GALGAS_applicationDefinition::constructor_default (LOCATION_ARGS) {
  return GALGAS_applicationDefinition::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_objectsMap::constructor_emptyMap (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition::GALGAS_applicationDefinition (const cPtr_applicationDefinition * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationDefinition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition GALGAS_applicationDefinition::constructor_new (const GALGAS_lstring & inAttribute_name,
                                                                            const GALGAS_lstring & inAttribute_cpuDescription,
                                                                            const GALGAS_lstring & inAttribute_version,
                                                                            const GALGAS_lstring & inAttribute_versionDescription,
                                                                            const GALGAS_objectsMap & inAttribute_objects
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_applicationDefinition result ;
  if (inAttribute_name.isValid () && inAttribute_cpuDescription.isValid () && inAttribute_version.isValid () && inAttribute_versionDescription.isValid () && inAttribute_objects.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_applicationDefinition (inAttribute_name, inAttribute_cpuDescription, inAttribute_version, inAttribute_versionDescription, inAttribute_objects COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_name (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_name ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_cpuDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_cpuDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_cpuDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_cpuDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_version (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_version ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_version (UNUSED_LOCATION_ARGS) const {
  return mAttribute_version ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_applicationDefinition::getter_versionDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_versionDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_applicationDefinition::getter_versionDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_versionDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap GALGAS_applicationDefinition::getter_objects (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectsMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_applicationDefinition * p = (const cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    result = p->mAttribute_objects ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap cPtr_applicationDefinition::getter_objects (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objects ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setName (GALGAS_lstring inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_name = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setName (GALGAS_lstring inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_name = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setCpuDescription (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_cpuDescription = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setCpuDescription (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_cpuDescription = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setVersion (GALGAS_lstring inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_version = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setVersion (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_version = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setVersionDescription (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_versionDescription = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setVersionDescription (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_versionDescription = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_applicationDefinition::setter_setObjects (GALGAS_objectsMap inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_applicationDefinition * p = (cPtr_applicationDefinition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_applicationDefinition) ;
    p->mAttribute_objects = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_applicationDefinition::setter_setObjects (GALGAS_objectsMap inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_objects = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @applicationDefinition class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_applicationDefinition::cPtr_applicationDefinition (const GALGAS_lstring & in_name,
                                                        const GALGAS_lstring & in_cpuDescription,
                                                        const GALGAS_lstring & in_version,
                                                        const GALGAS_lstring & in_versionDescription,
                                                        const GALGAS_objectsMap & in_objects
                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_name (in_name),
mAttribute_cpuDescription (in_cpuDescription),
mAttribute_version (in_version),
mAttribute_versionDescription (in_versionDescription),
mAttribute_objects (in_objects) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_applicationDefinition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationDefinition ;
}

void cPtr_applicationDefinition::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@applicationDefinition:" ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_cpuDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_version.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_versionDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_objects.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_applicationDefinition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_applicationDefinition (mAttribute_name, mAttribute_cpuDescription, mAttribute_version, mAttribute_versionDescription, mAttribute_objects COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @applicationDefinition type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationDefinition ("applicationDefinition",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_applicationDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationDefinition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_applicationDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationDefinition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition GALGAS_applicationDefinition::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationDefinition result ;
  const GALGAS_applicationDefinition * p = (const GALGAS_applicationDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_applicationDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@applicationDefinition applicationWithDefaults'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_applicationDefinition_applicationWithDefaults> gExtensionGetterTable_applicationDefinition_applicationWithDefaults ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_applicationWithDefaults (const int32_t inClassIndex,
                                                   enterExtensionGetter_applicationDefinition_applicationWithDefaults inGetter) {
  gExtensionGetterTable_applicationDefinition_applicationWithDefaults.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition callExtensionGetter_applicationWithDefaults (const cPtr_applicationDefinition * inObject,
                                                                          const GALGAS_implementation & in_imp,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationDefinition result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_applicationDefinition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_applicationDefinition_applicationWithDefaults f = NULL ;
    if (classIndex < gExtensionGetterTable_applicationDefinition_applicationWithDefaults.count ()) {
      f = gExtensionGetterTable_applicationDefinition_applicationWithDefaults (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_applicationDefinition_applicationWithDefaults.count ()) {
           f = gExtensionGetterTable_applicationDefinition_applicationWithDefaults (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_applicationDefinition_applicationWithDefaults.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_imp, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_applicationDefinition extensionGetter_applicationDefinition_applicationWithDefaults (const cPtr_applicationDefinition * inObject,
                                                                                                   const GALGAS_implementation & /* constinArgument_imp */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_applicationDefinition result_result ; // Returned variable
  const cPtr_applicationDefinition * object = inObject ;
  macroValidSharedObject (object, cPtr_applicationDefinition) ;
  const GALGAS_applicationDefinition temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_applicationDefinition_applicationWithDefaults (void) {
  enterExtensionGetter_applicationWithDefaults (kTypeDescriptor_GALGAS_applicationDefinition.mSlotID,
                                                extensionGetter_applicationDefinition_applicationWithDefaults) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_applicationDefinition_applicationWithDefaults (void) {
  gExtensionGetterTable_applicationDefinition_applicationWithDefaults.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_applicationDefinition_applicationWithDefaults (defineExtensionGetter_applicationDefinition_applicationWithDefaults,
                                                                          freeExtensionGetter_applicationDefinition_applicationWithDefaults) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@implementationObject verifyApplication'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_implementationObject_verifyApplication> gExtensionMethodTable_implementationObject_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyApplication (const int32_t inClassIndex,
                                             extensionMethodSignature_implementationObject_verifyApplication inMethod) {
  gExtensionMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyApplication (const cPtr_implementationObject * inObject,
                                            const GALGAS_objectKind constin_objectsOfKind,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementationObject) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_implementationObject_verifyApplication f = NULL ;
    if (classIndex < gExtensionMethodTable_implementationObject_verifyApplication.count ()) {
      f = gExtensionMethodTable_implementationObject_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_implementationObject_verifyApplication.count ()) {
           f = gExtensionMethodTable_implementationObject_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_objectsOfKind, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementationObject_verifyApplication (const cPtr_implementationObject * inObject,
                                                                    const GALGAS_objectKind constinArgument_objectsOfKind,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementationObject * object = inObject ;
  macroValidSharedObject (object, cPtr_implementationObject) ;
  cEnumerator_objectKindMap enumerator_1305 (constinArgument_objectsOfKind.getter_objects (SOURCE_FILE ("semantic_verification.galgas", 46)), kEnumeration_up) ;
  while (enumerator_1305.hasCurrentObject ()) {
    cEnumerator_implementationObjectMap enumerator_1334 (object->mAttribute_attributes, kEnumeration_up) ;
    while (enumerator_1334.hasCurrentObject ()) {
      callExtensionMethod_verifyApplication ((const cPtr_impType *) enumerator_1334.current_type (HERE).ptr (), enumerator_1305.current_attributes (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 48)) ;
      enumerator_1334.gotoNextObject () ;
    }
    enumerator_1305.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementationObject_verifyApplication (void) {
  enterExtensionMethod_verifyApplication (kTypeDescriptor_GALGAS_implementationObject.mSlotID,
                                          extensionMethod_implementationObject_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_implementationObject_verifyApplication (void) {
  gExtensionMethodTable_implementationObject_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementationObject_verifyApplication (defineExtensionMethod_implementationObject_verifyApplication,
                                                                   freeExtensionMethod_implementationObject_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension method '@impType verifyApplication'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyApplication> gExtensionMethodTable_impType_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyApplication (const int32_t inClassIndex,
                                             extensionMethodSignature_impType_verifyApplication inMethod) {
  gExtensionMethodTable_impType_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyApplication (const cPtr_impType * inObject,
                                            const GALGAS_objectAttributes constin_attrs,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyApplication f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyApplication.count ()) {
      f = gExtensionMethodTable_impType_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyApplication.count ()) {
           f = gExtensionMethodTable_impType_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attrs, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyApplication (const cPtr_impType * inObject,
                                                       const GALGAS_objectAttributes constinArgument_attrs,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  cEnumerator_identifierMap enumerator_1580 (constinArgument_attrs.getter_objectParams (SOURCE_FILE ("semantic_verification.galgas", 56)), kEnumeration_up) ;
  while (enumerator_1580.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1580.current_lkey (HERE).getter_string (SOURCE_FILE ("semantic_verification.galgas", 57)).objectCompare (object->mAttribute_name.getter_string (SOURCE_FILE ("semantic_verification.galgas", 57)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_impType temp_1 = object ;
      callExtensionMethod_verifyMultipleType ((const cPtr_impType *) temp_1.ptr (), enumerator_1580.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 58)) ;
    }
    enumerator_1580.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyApplication (void) {
  enterExtensionMethod_verifyApplication (kTypeDescriptor_GALGAS_impType.mSlotID,
                                          extensionMethod_impType_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyApplication (void) {
  gExtensionMethodTable_impType_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyApplication (defineExtensionMethod_impType_verifyApplication,
                                                      freeExtensionMethod_impType_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@impType verifyType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyType> gExtensionMethodTable_impType_verifyType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyType (const int32_t inClassIndex,
                                      extensionMethodSignature_impType_verifyType inMethod) {
  gExtensionMethodTable_impType_verifyType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyType (const cPtr_impType * inObject,
                                     const GALGAS_object_5F_t constin_attr,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyType f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyType.count ()) {
      f = gExtensionMethodTable_impType_verifyType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyType.count ()) {
           f = gExtensionMethodTable_impType_verifyType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyType (const cPtr_impType * /* inObject */,
                                                const GALGAS_object_5F_t constinArgument_attr,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (constinArgument_attr.getter_location (SOURCE_FILE ("semantic_verification.galgas", 66)), GALGAS_string ("Internal error, a generic type should not be instantiated"), fixItArray0  COMMA_SOURCE_FILE ("semantic_verification.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyType (void) {
  enterExtensionMethod_verifyType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                   extensionMethod_impType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyType (void) {
  gExtensionMethodTable_impType_verifyType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyType (defineExtensionMethod_impType_verifyType,
                                               freeExtensionMethod_impType_verifyType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@impType verifyMultipleType'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyMultipleType> gExtensionMethodTable_impType_verifyMultipleType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyMultipleType (const int32_t inClassIndex,
                                              extensionMethodSignature_impType_verifyMultipleType inMethod) {
  gExtensionMethodTable_impType_verifyMultipleType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyMultipleType (const cPtr_impType * inObject,
                                             const GALGAS_object_5F_t constin_attr,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyMultipleType f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyMultipleType.count ()) {
      f = gExtensionMethodTable_impType_verifyMultipleType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyMultipleType.count ()) {
           f = gExtensionMethodTable_impType_verifyMultipleType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyMultipleType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyMultipleType (const cPtr_impType * inObject,
                                                        const GALGAS_object_5F_t constinArgument_attr,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_multipleAttribute) {
      GALGAS_multipleAttribute cast_2080_ma ((cPtr_multipleAttribute *) constinArgument_attr.ptr ()) ;
      cEnumerator_identifierList enumerator_2108 (cast_2080_ma.getter_items (SOURCE_FILE ("semantic_verification.galgas", 74)), kEnumeration_up) ;
      while (enumerator_2108.hasCurrentObject ()) {
        const GALGAS_impType temp_0 = object ;
        callExtensionMethod_verifyType ((const cPtr_impType *) temp_0.ptr (), enumerator_2108.current_item (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 75)) ;
        enumerator_2108.gotoNextObject () ;
      }
    }else{
      const GALGAS_impType temp_1 = object ;
      callExtensionMethod_verifyType ((const cPtr_impType *) temp_1.ptr (), constinArgument_attr, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 78)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyMultipleType (void) {
  enterExtensionMethod_verifyMultipleType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                           extensionMethod_impType_verifyMultipleType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyMultipleType (void) {
  gExtensionMethodTable_impType_verifyMultipleType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyMultipleType (defineExtensionMethod_impType_verifyMultipleType,
                                                       freeExtensionMethod_impType_verifyMultipleType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@objectsMap verifyCrossReferences'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_verifyCrossReferences (const GALGAS_objectsMap inObject,
                                            const GALGAS_implementation constinArgument_imp,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_objectsMap temp_0 = inObject ;
  cEnumerator_objectsMap enumerator_18146 (temp_0, kEnumeration_up) ;
  while (enumerator_18146.hasCurrentObject ()) {
    GALGAS_implementationObject var_obj_18201 ;
    constinArgument_imp.getter_imp (SOURCE_FILE ("semantic_verification.galgas", 580)).method_get (enumerator_18146.current_lkey (HERE), var_obj_18201, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 580)) ;
    const GALGAS_objectsMap temp_1 = inObject ;
    callExtensionMethod_verifyCrossReferences ((const cPtr_objectKind *) enumerator_18146.current_objectsOfKind (HERE).ptr (), temp_1, var_obj_18201, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 581)) ;
    enumerator_18146.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_objectKind::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectKind * p = (const cPtr_objectKind *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectKind) ;
  if (kOperandEqual == result) {
    result = mAttribute_objects.objectCompare (p->mAttribute_objects) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_objectKind::objectCompare (const GALGAS_objectKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind::GALGAS_objectKind (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectKind::constructor_default (LOCATION_ARGS) {
  return GALGAS_objectKind::constructor_new (GALGAS_objectKindMap::constructor_emptyMap (HERE)
                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind::GALGAS_objectKind (const cPtr_objectKind * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectKind::constructor_new (const GALGAS_objectKindMap & inAttribute_objects
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  if (inAttribute_objects.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_objectKind (inAttribute_objects COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap GALGAS_objectKind::getter_objects (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectKindMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_objectKind * p = (const cPtr_objectKind *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_objectKind) ;
    result = p->mAttribute_objects ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap cPtr_objectKind::getter_objects (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objects ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectKind::setter_setObjects (GALGAS_objectKindMap inValue
                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_objectKind * p = (cPtr_objectKind *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_objectKind) ;
    p->mAttribute_objects = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_objectKind::setter_setObjects (GALGAS_objectKindMap inValue
                                         COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_objects = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @objectKind class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_objectKind::cPtr_objectKind (const GALGAS_objectKindMap & in_objects
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_objects (in_objects) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_objectKind::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectKind ;
}

void cPtr_objectKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "[@objectKind:" ;
  mAttribute_objects.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_objectKind::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectKind (mAttribute_objects COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @objectKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectKind ("objectKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  const GALGAS_objectKind * p = (const GALGAS_objectKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@object_t verifyCrossReferences'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_object_5F_t_verifyCrossReferences> gExtensionMethodTable_object_5F_t_verifyCrossReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyCrossReferences (const int32_t inClassIndex,
                                                 extensionMethodSignature_object_5F_t_verifyCrossReferences inMethod) {
  gExtensionMethodTable_object_5F_t_verifyCrossReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyCrossReferences (const cPtr_object_5F_t * inObject,
                                                const GALGAS_objectsMap constin_allObjects,
                                                const GALGAS_impType constin_type,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_object_5F_t) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_object_5F_t_verifyCrossReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_object_5F_t_verifyCrossReferences.count ()) {
      f = gExtensionMethodTable_object_5F_t_verifyCrossReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_object_5F_t_verifyCrossReferences.count ()) {
           f = gExtensionMethodTable_object_5F_t_verifyCrossReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_object_5F_t_verifyCrossReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_allObjects, constin_type, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_object_5F_t_verifyCrossReferences (const cPtr_object_5F_t * /* inObject */,
                                                               const GALGAS_objectsMap /* constinArgument_allObjects */,
                                                               const GALGAS_impType /* constinArgument_type */,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_object_5F_t_verifyCrossReferences (void) {
  enterExtensionMethod_verifyCrossReferences (kTypeDescriptor_GALGAS_object_5F_t.mSlotID,
                                              extensionMethod_object_5F_t_verifyCrossReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_object_5F_t_verifyCrossReferences (void) {
  gExtensionMethodTable_object_5F_t_verifyCrossReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_object_5F_t_verifyCrossReferences (defineExtensionMethod_object_5F_t_verifyCrossReferences,
                                                              freeExtensionMethod_object_5F_t_verifyCrossReferences) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@applicationDefinition verifyCrossReferences'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_applicationDefinition_verifyCrossReferences> gExtensionMethodTable_applicationDefinition_verifyCrossReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyCrossReferences (const int32_t inClassIndex,
                                                 extensionMethodSignature_applicationDefinition_verifyCrossReferences inMethod) {
  gExtensionMethodTable_applicationDefinition_verifyCrossReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyCrossReferences (const cPtr_applicationDefinition * inObject,
                                                const GALGAS_implementation constin_imp,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_applicationDefinition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_applicationDefinition_verifyCrossReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_applicationDefinition_verifyCrossReferences.count ()) {
      f = gExtensionMethodTable_applicationDefinition_verifyCrossReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_applicationDefinition_verifyCrossReferences.count ()) {
           f = gExtensionMethodTable_applicationDefinition_verifyCrossReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_applicationDefinition_verifyCrossReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_imp, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_applicationDefinition_verifyCrossReferences (const cPtr_applicationDefinition * inObject,
                                                                         const GALGAS_implementation constinArgument_imp,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_applicationDefinition * object = inObject ;
  macroValidSharedObject (object, cPtr_applicationDefinition) ;
  extensionMethod_verifyCrossReferences (object->mAttribute_objects, constinArgument_imp, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 667)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_applicationDefinition_verifyCrossReferences (void) {
  enterExtensionMethod_verifyCrossReferences (kTypeDescriptor_GALGAS_applicationDefinition.mSlotID,
                                              extensionMethod_applicationDefinition_verifyCrossReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_applicationDefinition_verifyCrossReferences (void) {
  gExtensionMethodTable_applicationDefinition_verifyCrossReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_applicationDefinition_verifyCrossReferences (defineExtensionMethod_applicationDefinition_verifyCrossReferences,
                                                                        freeExtensionMethod_applicationDefinition_verifyCrossReferences) ;



//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_definition_i0_ (GALGAS_implementation & ioArgument_implementation,
                                                                                                       C_Lexique_goil_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION) COMMA_SOURCE_FILE ("implementation_parser.galgas", 57)) ;
  GALGAS_lstring var_implementationName_1955 = inCompiler->synthetizedAttribute_att_5F_token () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 57)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 57)) ;
  nt_implementation_5F_object_5F_list_ (ioArgument_implementation, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 59)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_definition_i0_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION) COMMA_SOURCE_FILE ("implementation_parser.galgas", 57)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 57)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 57)) ;
  nt_implementation_5F_object_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 59)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_ (GALGAS_implementation & ioArgument_implementation,
                                                                                                           C_Lexique_goil_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_0 (inCompiler)) {
    case 2: {
      nt_implementation_5F_objects_ (ioArgument_implementation, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 66)) ;
    } break ;
    case 3: {
      nt_include_5F_implementation_5F_level_ (ioArgument_implementation, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_0 (inCompiler)) {
    case 2: {
      nt_implementation_5F_objects_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 66)) ;
    } break ;
    case 3: {
      nt_include_5F_implementation_5F_level_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_ (GALGAS_implementation & ioArgument_implementation,
                                                                                                             C_Lexique_goil_5F_lexique * inCompiler) {
  GALGAS_bool var_includeIfExists_2316 = GALGAS_bool (false) ;
  switch (select_implementation_5F_parser_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_SOURCE_FILE ("implementation_parser.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) COMMA_SOURCE_FILE ("implementation_parser.galgas", 78)) ;
    var_includeIfExists_2316 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_file_5F_name_2424 ;
  switch (select_implementation_5F_parser_2 (inCompiler)) {
  case 1: {
    var_file_5F_name_2424 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 82)) ;
    {
    routine_file_5F_in_5F_path (var_file_5F_name_2424, inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 83)) ;
    }
  } break ;
  case 2: {
    var_file_5F_name_2424 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool test_0 = var_includeIfExists_2316.operator_not (SOURCE_FILE ("implementation_parser.galgas", 87)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    GALGAS_bool test_1 = var_includeIfExists_2316 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = var_file_5F_name_2424.mAttribute_string.getter_fileExists (SOURCE_FILE ("implementation_parser.galgas", 87)) ;
    }
    test_0 = test_1 ;
  }
  const enumGalgasBool test_2 = test_0.boolEnum () ;
  if (kBoolTrue == test_2) {
    cGrammar_goil_5F_implementation_5F_level_5F_include::_performSourceFileParsing_ (inCompiler, var_file_5F_name_2424, ioArgument_implementation  COMMA_SOURCE_FILE ("implementation_parser.galgas", 88)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  switch (select_implementation_5F_parser_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_SOURCE_FILE ("implementation_parser.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) COMMA_SOURCE_FILE ("implementation_parser.galgas", 78)) ;
  } break ;
  default:
    break ;
  }
  switch (select_implementation_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 82)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_include_5F_type_5F_level_i3_ (GALGAS_implementationObjectMap & ioArgument_objectAttributes,
                                                                                                   C_Lexique_goil_5F_lexique * inCompiler) {
  GALGAS_bool var_includeIfExists_2788 = GALGAS_bool (false) ;
  switch (select_implementation_5F_parser_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_SOURCE_FILE ("implementation_parser.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) COMMA_SOURCE_FILE ("implementation_parser.galgas", 99)) ;
    var_includeIfExists_2788 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_file_5F_name_2896 ;
  switch (select_implementation_5F_parser_4 (inCompiler)) {
  case 1: {
    var_file_5F_name_2896 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 103)) ;
    {
    routine_file_5F_in_5F_path (var_file_5F_name_2896, inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 104)) ;
    }
  } break ;
  case 2: {
    var_file_5F_name_2896 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 106)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool test_0 = var_includeIfExists_2788.operator_not (SOURCE_FILE ("implementation_parser.galgas", 108)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    GALGAS_bool test_1 = var_includeIfExists_2788 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = var_file_5F_name_2896.mAttribute_string.getter_fileExists (SOURCE_FILE ("implementation_parser.galgas", 108)) ;
    }
    test_0 = test_1 ;
  }
  const enumGalgasBool test_2 = test_0.boolEnum () ;
  if (kBoolTrue == test_2) {
    cGrammar_goil_5F_type_5F_level_5F_include::_performSourceFileParsing_ (inCompiler, var_file_5F_name_2896, ioArgument_objectAttributes  COMMA_SOURCE_FILE ("implementation_parser.galgas", 109)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_include_5F_type_5F_level_i3_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  switch (select_implementation_5F_parser_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_SOURCE_FILE ("implementation_parser.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) COMMA_SOURCE_FILE ("implementation_parser.galgas", 99)) ;
  } break ;
  default:
    break ;
  }
  switch (select_implementation_5F_parser_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 103)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 106)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_objects_i4_ (GALGAS_implementation & ioArgument_implementation,
                                                                                                    C_Lexique_goil_5F_lexique * inCompiler) {
  GALGAS_implementationMap var_imp_3918 = ioArgument_implementation.getter_imp (SOURCE_FILE ("implementation_parser.galgas", 138)) ;
  GALGAS_lstring var_objectName_3977 = inCompiler->synthetizedAttribute_att_5F_token () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 140)) ;
  GALGAS_lbool var_multiple_4017 ;
  switch (select_implementation_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 144)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 144)) ;
    var_multiple_4017 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 144))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 144)) ;
  } break ;
  case 2: {
    var_multiple_4017 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 146))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 146)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_implementationObjectMap var_objectAttributes_4234 = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 149)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 151)) ;
  nt_implementation_5F_list_ (var_objectAttributes_4234, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 153)) ;
  GALGAS_implementationObject var_newObject_4339 = GALGAS_implementationObject::constructor_new (var_multiple_4017, var_objectAttributes_4234  COMMA_SOURCE_FILE ("implementation_parser.galgas", 155)) ;
  GALGAS_implementationObject var_object_4511 ;
  const enumGalgasBool test_0 = callExtensionGetter_hasKey ((const cPtr_implementation *) ioArgument_implementation.ptr (), var_objectName_3977.getter_string (SOURCE_FILE ("implementation_parser.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 160)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    var_imp_3918.setter_del (var_objectName_3977, var_object_4511, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 161)) ;
    }
    var_object_4511 = callExtensionGetter_mergeImplementationObjectWith ((const cPtr_implementationObject *) var_object_4511.ptr (), var_newObject_4339, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 162)) ;
  }else if (kBoolFalse == test_0) {
    var_object_4511 = var_newObject_4339 ;
  }
  {
  var_imp_3918.setter_put (var_objectName_3977, var_object_4511, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 179)) ;
  }
  {
  ioArgument_implementation.setter_setImp (var_imp_3918 COMMA_SOURCE_FILE ("implementation_parser.galgas", 180)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_objects_i4_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 140)) ;
  switch (select_implementation_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 144)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 144)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 151)) ;
  nt_implementation_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 153)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_list_i5_ (GALGAS_implementationObjectMap & ioArgument_objectAttributes,
                                                                                                 C_Lexique_goil_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_5239 ;
      GALGAS_impType var_type_5257 ;
      nt_implementation_5F_type_ (var_attributeName_5239, var_type_5257, inCompiler) ;
      const enumGalgasBool test_1 = ioArgument_objectAttributes.getter_hasKey (var_attributeName_5239.getter_string (SOURCE_FILE ("implementation_parser.galgas", 191)) COMMA_SOURCE_FILE ("implementation_parser.galgas", 191)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_impType var_previousType_5394 ;
        ioArgument_objectAttributes.method_get (var_attributeName_5239, var_previousType_5394, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 193)) ;
        const enumGalgasBool test_2 = function_checkNewTypeWithinPreviousType (var_attributeName_5239, var_previousType_5394, var_type_5257, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 197)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_impType joker_5737 ; // Joker input parameter
          ioArgument_objectAttributes.setter_del (var_attributeName_5239, joker_5737, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 200)) ;
          }
          {
          ioArgument_objectAttributes.setter_put (var_attributeName_5239, var_type_5257, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 201)) ;
          }
        }
      }else if (kBoolFalse == test_1) {
        {
        ioArgument_objectAttributes.setter_put (var_attributeName_5239, var_type_5257, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 204)) ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 206)) ;
    } break ;
    case 3: {
      nt_include_5F_type_5F_level_ (ioArgument_objectAttributes, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_list_i5_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_6 (inCompiler)) {
    case 2: {
      nt_implementation_5F_type_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 206)) ;
    } break ;
    case 3: {
      nt_include_5F_type_5F_level_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_type_i6_ (GALGAS_lstring & outArgument_attributeName,
                                                                                                 GALGAS_impType & outArgument_type,
                                                                                                 C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_attributeName.drop () ; // Release 'out' argument
  outArgument_type.drop () ; // Release 'out' argument
  switch (select_implementation_5F_parser_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_33__32_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 216)) ;
    nt_number_5F_options_ (outArgument_attributeName, outArgument_type, GALGAS_dataType::constructor_uint_33__32_Number (SOURCE_FILE ("implementation_parser.galgas", 216)), inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_33__32_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 218)) ;
    nt_number_5F_options_ (outArgument_attributeName, outArgument_type, GALGAS_dataType::constructor_sint_33__32_Number (SOURCE_FILE ("implementation_parser.galgas", 218)), inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_36__34_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 220)) ;
    nt_number_5F_options_ (outArgument_attributeName, outArgument_type, GALGAS_dataType::constructor_uint_36__34_Number (SOURCE_FILE ("implementation_parser.galgas", 220)), inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_36__34_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 222)) ;
    nt_number_5F_options_ (outArgument_attributeName, outArgument_type, GALGAS_dataType::constructor_sint_36__34_Number (SOURCE_FILE ("implementation_parser.galgas", 222)), inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FLOAT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 224)) ;
    nt_number_5F_options_ (outArgument_attributeName, outArgument_type, GALGAS_dataType::constructor_floatNumber (SOURCE_FILE ("implementation_parser.galgas", 224)), inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ENUM) COMMA_SOURCE_FILE ("implementation_parser.galgas", 226)) ;
    nt_enum_5F_options_ (outArgument_attributeName, outArgument_type, inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_BOOLEAN) COMMA_SOURCE_FILE ("implementation_parser.galgas", 228)) ;
    nt_boolean_5F_options_ (outArgument_attributeName, outArgument_type, inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRING) COMMA_SOURCE_FILE ("implementation_parser.galgas", 230)) ;
    nt_string_5F_options_ (outArgument_attributeName, outArgument_type, inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_IDENTIFIER) COMMA_SOURCE_FILE ("implementation_parser.galgas", 232)) ;
    nt_type_5F_options_ (outArgument_attributeName, outArgument_type, GALGAS_dataType::constructor_identifier (SOURCE_FILE ("implementation_parser.galgas", 232)), inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRUCT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 234)) ;
    nt_struct_5F_options_ (outArgument_attributeName, outArgument_type, inCompiler) ;
  } break ;
  case 11: {
    GALGAS_lstring var_typeName_6752 ;
    var_typeName_6752 = inCompiler->synthetizedAttribute_att_5F_token () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 236)) ;
    nt_objref_5F_option_ (outArgument_attributeName, outArgument_type, var_typeName_6752, inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_implementation_5F_type_i6_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  switch (select_implementation_5F_parser_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_33__32_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 216)) ;
    nt_number_5F_options_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_33__32_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 218)) ;
    nt_number_5F_options_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_36__34_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 220)) ;
    nt_number_5F_options_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_36__34_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 222)) ;
    nt_number_5F_options_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FLOAT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 224)) ;
    nt_number_5F_options_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ENUM) COMMA_SOURCE_FILE ("implementation_parser.galgas", 226)) ;
    nt_enum_5F_options_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_BOOLEAN) COMMA_SOURCE_FILE ("implementation_parser.galgas", 228)) ;
    nt_boolean_5F_options_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRING) COMMA_SOURCE_FILE ("implementation_parser.galgas", 230)) ;
    nt_string_5F_options_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_IDENTIFIER) COMMA_SOURCE_FILE ("implementation_parser.galgas", 232)) ;
    nt_type_5F_options_parse (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRUCT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 234)) ;
    nt_struct_5F_options_parse (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 236)) ;
    nt_objref_5F_option_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_struct_5F_options_i7_ (GALGAS_lstring & outArgument_name,
                                                                                            GALGAS_impType & outArgument_options,
                                                                                            C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_options.drop () ; // Release 'out' argument
  GALGAS_implementationObjectMap var_structAttributes_6908 = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 243)) ;
  switch (select_implementation_5F_parser_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 245)) ;
    nt_implementation_5F_list_ (var_structAttributes_6908, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 247)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_identifier_5F_or_5F_attribute_ (outArgument_name, inCompiler) ;
  GALGAS_bool var_multiple_7076 ;
  nt_multiple_ (var_multiple_7076, inCompiler) ;
  GALGAS_lstring var_description_7122 ;
  nt_description_ (var_description_7122, inCompiler) ;
  GALGAS_locationList temp_0 = GALGAS_locationList::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 254)) ;
  temp_0.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 254))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 254)) ;
  GALGAS_lstringlist temp_1 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 254)) ;
  temp_1.addAssign_operation (var_description_7122  COMMA_SOURCE_FILE ("implementation_parser.galgas", 254)) ;
  outArgument_options = GALGAS_impStructType::constructor_new (temp_0, GALGAS_dataType::constructor_structType (SOURCE_FILE ("implementation_parser.galgas", 254)), outArgument_name, var_multiple_7076, temp_1, var_structAttributes_6908  COMMA_SOURCE_FILE ("implementation_parser.galgas", 254)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_struct_5F_options_i7_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  switch (select_implementation_5F_parser_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 245)) ;
    nt_implementation_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 247)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
  nt_multiple_parse (inCompiler) ;
  nt_description_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_objref_5F_option_i8_ (GALGAS_lstring & outArgument_name,
                                                                                           GALGAS_impType & outArgument_options,
                                                                                           GALGAS_lstring inArgument_ref,
                                                                                           C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_options.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_ref.getter_string (SOURCE_FILE ("implementation_parser.galgas", 261)).getter_rightSubString (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("implementation_parser.galgas", 261)).objectCompare (GALGAS_string ("_TYPE"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 262)), GALGAS_string ("an object reference must end with _TYPE"), fixItArray1  COMMA_SOURCE_FILE ("implementation_parser.galgas", 262)) ;
  }else if (kBoolFalse == test_0) {
    inArgument_ref = GALGAS_lstring::constructor_new (inArgument_ref.mAttribute_string.getter_leftSubString (inArgument_ref.mAttribute_string.getter_length (SOURCE_FILE ("implementation_parser.galgas", 264)).substract_operation (GALGAS_uint ((uint32_t) 5U), inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 264)) COMMA_SOURCE_FILE ("implementation_parser.galgas", 264)), inArgument_ref.getter_location (SOURCE_FILE ("implementation_parser.galgas", 264))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 264)) ;
  }
  nt_identifier_5F_or_5F_attribute_ (outArgument_name, inCompiler) ;
  GALGAS_bool var_multiple_7623 ;
  nt_multiple_ (var_multiple_7623, inCompiler) ;
  GALGAS_lstring var_description_7669 ;
  nt_description_ (var_description_7669, inCompiler) ;
  GALGAS_locationList temp_2 = GALGAS_locationList::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 271)) ;
  temp_2.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 271))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 271)) ;
  GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 271)) ;
  temp_3.addAssign_operation (var_description_7669  COMMA_SOURCE_FILE ("implementation_parser.galgas", 271)) ;
  outArgument_options = GALGAS_refType::constructor_new (temp_2, GALGAS_dataType::constructor_objectType (SOURCE_FILE ("implementation_parser.galgas", 271)), outArgument_name, var_multiple_7623, temp_3, inArgument_ref  COMMA_SOURCE_FILE ("implementation_parser.galgas", 271)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_objref_5F_option_i8_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
  nt_multiple_parse (inCompiler) ;
  nt_description_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_string_5F_options_i9_ (GALGAS_lstring & outArgument_name,
                                                                                            GALGAS_impType & outArgument_options,
                                                                                            C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_options.drop () ; // Release 'out' argument
  GALGAS_bool var_withAuto_7890 ;
  nt_with_5F_auto_ (var_withAuto_7890, inCompiler) ;
  nt_identifier_5F_or_5F_attribute_ (outArgument_name, inCompiler) ;
  GALGAS_bool var_multiple_7965 ;
  nt_multiple_ (var_multiple_7965, inCompiler) ;
  GALGAS_object_5F_t var_defaultValue_8013 ;
  GALGAS_lstring var_oil_5F_desc_8033 ;
  switch (select_implementation_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 286)) ;
    switch (select_implementation_5F_parser_10 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_stringValue_8102 = inCompiler->synthetizedAttribute_a_5F_string () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 288)) ;
      nt_description_ (var_oil_5F_desc_8033, inCompiler) ;
      var_defaultValue_8013 = GALGAS_stringAttribute::constructor_new (var_oil_5F_desc_8033, var_stringValue_8102.getter_location (SOURCE_FILE ("implementation_parser.galgas", 290)), var_stringValue_8102.getter_string (SOURCE_FILE ("implementation_parser.galgas", 290))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 290)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 292)) ;
      nt_description_ (var_oil_5F_desc_8033, inCompiler) ;
      var_defaultValue_8013 = GALGAS_auto::constructor_new (var_oil_5F_desc_8033, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 294))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 294)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 296)) ;
      nt_description_ (var_oil_5F_desc_8033, inCompiler) ;
      var_defaultValue_8013 = GALGAS_void::constructor_new (var_oil_5F_desc_8033, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 298))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 298)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_ (var_oil_5F_desc_8033, inCompiler) ;
    var_defaultValue_8013 = GALGAS_void::constructor_new (var_oil_5F_desc_8033, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 302))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 302)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_locationList temp_0 = GALGAS_locationList::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 304)) ;
  temp_0.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 304))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 304)) ;
  GALGAS_lstringlist temp_1 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 304)) ;
  temp_1.addAssign_operation (var_oil_5F_desc_8033  COMMA_SOURCE_FILE ("implementation_parser.galgas", 304)) ;
  outArgument_options = GALGAS_impAutoDefaultType::constructor_new (temp_0, GALGAS_dataType::constructor_string (SOURCE_FILE ("implementation_parser.galgas", 304)), outArgument_name, var_multiple_7965, temp_1, var_withAuto_7890, var_defaultValue_8013  COMMA_SOURCE_FILE ("implementation_parser.galgas", 304)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_string_5F_options_i9_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_with_5F_auto_parse (inCompiler) ;
  nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
  nt_multiple_parse (inCompiler) ;
  switch (select_implementation_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 286)) ;
    switch (select_implementation_5F_parser_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_SOURCE_FILE ("implementation_parser.galgas", 288)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 292)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 296)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_boolean_5F_options_i10_ (GALGAS_lstring & outArgument_name,
                                                                                              GALGAS_impType & outArgument_options,
                                                                                              C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_options.drop () ; // Release 'out' argument
  GALGAS_bool var_withAuto_8778 ;
  nt_with_5F_auto_ (var_withAuto_8778, inCompiler) ;
  GALGAS_implementationObjectMap var_trueSubAttributes_8826 = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 312)) ;
  GALGAS_implementationObjectMap var_falseSubAttributes_8888 = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 313)) ;
  switch (select_implementation_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 315)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_SOURCE_FILE ("implementation_parser.galgas", 316)) ;
    switch (select_implementation_5F_parser_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 318)) ;
      nt_implementation_5F_list_ (var_trueSubAttributes_8826, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 320)) ;
    } break ;
    case 2: {
      var_trueSubAttributes_8826 = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 322)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 324)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_SOURCE_FILE ("implementation_parser.galgas", 325)) ;
    switch (select_implementation_5F_parser_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 327)) ;
      nt_implementation_5F_list_ (var_falseSubAttributes_8888, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 329)) ;
    } break ;
    case 2: {
      var_falseSubAttributes_8888 = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 331)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 333)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_identifier_5F_or_5F_attribute_ (outArgument_name, inCompiler) ;
  GALGAS_bool var_multiple_9355 ;
  nt_multiple_ (var_multiple_9355, inCompiler) ;
  GALGAS_object_5F_t var_defaultValue_9403 ;
  GALGAS_lstring var_oil_5F_desc_9423 ;
  switch (select_implementation_5F_parser_14 (inCompiler)) {
  case 1: {
    GALGAS_lbool var_boolValue_9453 ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 342)) ;
    nt_boolean_ (var_boolValue_9453, inCompiler) ;
    nt_description_ (var_oil_5F_desc_9423, inCompiler) ;
    var_defaultValue_9403 = GALGAS_boolAttribute::constructor_new (var_oil_5F_desc_9423, var_boolValue_9453.getter_location (SOURCE_FILE ("implementation_parser.galgas", 344)), var_boolValue_9453.getter_bool (SOURCE_FILE ("implementation_parser.galgas", 344)), GALGAS_objectAttributes::constructor_new (GALGAS_identifierMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 344))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 344))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 344)) ;
  } break ;
  case 2: {
    nt_description_ (var_oil_5F_desc_9423, inCompiler) ;
    var_defaultValue_9403 = GALGAS_void::constructor_new (var_oil_5F_desc_9423, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 347))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 347)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_locationList temp_0 = GALGAS_locationList::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 349)) ;
  temp_0.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 349))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 349)) ;
  GALGAS_lstringlist temp_1 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 349)) ;
  temp_1.addAssign_operation (var_oil_5F_desc_9423  COMMA_SOURCE_FILE ("implementation_parser.galgas", 349)) ;
  outArgument_options = GALGAS_impBoolType::constructor_new (temp_0, GALGAS_dataType::constructor_boolean (SOURCE_FILE ("implementation_parser.galgas", 349)), outArgument_name, var_multiple_9355, temp_1, var_withAuto_8778, var_defaultValue_9403, var_trueSubAttributes_8826, var_falseSubAttributes_8888  COMMA_SOURCE_FILE ("implementation_parser.galgas", 349)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_boolean_5F_options_i10_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_with_5F_auto_parse (inCompiler) ;
  switch (select_implementation_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 315)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_SOURCE_FILE ("implementation_parser.galgas", 316)) ;
    switch (select_implementation_5F_parser_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 318)) ;
      nt_implementation_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 320)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 324)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_SOURCE_FILE ("implementation_parser.galgas", 325)) ;
    switch (select_implementation_5F_parser_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 327)) ;
      nt_implementation_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 329)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 333)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
  nt_multiple_parse (inCompiler) ;
  switch (select_implementation_5F_parser_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 342)) ;
    nt_boolean_parse (inCompiler) ;
    nt_description_parse (inCompiler) ;
  } break ;
  case 2: {
    nt_description_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_enum_5F_item_i11_ (GALGAS_enumValues & ioArgument_items,
                                                                                        C_Lexique_goil_5F_lexique * inCompiler) {
  GALGAS_lstring var_enumItem_9980 ;
  GALGAS_implementationObjectMap var_subAttributes_10000 = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 355)) ;
  nt_identifier_5F_or_5F_enum_5F_value_ (var_enumItem_9980, inCompiler) ;
  switch (select_implementation_5F_parser_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 358)) ;
    nt_implementation_5F_list_ (var_subAttributes_10000, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 360)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  {
  ioArgument_items.setter_put (var_enumItem_9980, var_subAttributes_10000, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 362)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_enum_5F_item_i11_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_identifier_5F_or_5F_enum_5F_value_parse (inCompiler) ;
  switch (select_implementation_5F_parser_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 358)) ;
    nt_implementation_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 360)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_enum_5F_options_i12_ (GALGAS_lstring & outArgument_name,
                                                                                           GALGAS_impType & outArgument_options,
                                                                                           C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_options.drop () ; // Release 'out' argument
  GALGAS_bool var_withAuto_10272 ;
  nt_with_5F_auto_ (var_withAuto_10272, inCompiler) ;
  GALGAS_enumValues var_items_10308 = GALGAS_enumValues::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 370)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 371)) ;
  nt_enum_5F_item_ (var_items_10308, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 375)) ;
      nt_enum_5F_item_ (var_items_10308, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 377)) ;
  nt_identifier_5F_or_5F_attribute_ (outArgument_name, inCompiler) ;
  GALGAS_bool var_multiple_10468 ;
  nt_multiple_ (var_multiple_10468, inCompiler) ;
  GALGAS_lstring var_oil_5F_desc_10511 ;
  GALGAS_object_5F_t var_defaultValue_10536 ;
  switch (select_implementation_5F_parser_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 384)) ;
    switch (select_implementation_5F_parser_18 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_stringValue_10591 ;
      var_stringValue_10591 = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 387)) ;
      nt_description_ (var_oil_5F_desc_10511, inCompiler) ;
      var_defaultValue_10536 = GALGAS_enumAttribute::constructor_new (var_oil_5F_desc_10511, var_stringValue_10591.getter_location (SOURCE_FILE ("implementation_parser.galgas", 389)), var_stringValue_10591.getter_string (SOURCE_FILE ("implementation_parser.galgas", 389)), GALGAS_objectAttributes::constructor_new (GALGAS_identifierMap::constructor_emptyMap (SOURCE_FILE ("implementation_parser.galgas", 389))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 389))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 389)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 391)) ;
      nt_description_ (var_oil_5F_desc_10511, inCompiler) ;
      var_defaultValue_10536 = GALGAS_auto::constructor_new (var_oil_5F_desc_10511, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 393))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 393)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 395)) ;
      nt_description_ (var_oil_5F_desc_10511, inCompiler) ;
      var_defaultValue_10536 = GALGAS_void::constructor_new (var_oil_5F_desc_10511, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 397))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 397)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_ (var_oil_5F_desc_10511, inCompiler) ;
    var_defaultValue_10536 = GALGAS_void::constructor_new (var_oil_5F_desc_10511, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 401))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 401)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_locationList temp_1 = GALGAS_locationList::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 403)) ;
  temp_1.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 403))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 403)) ;
  GALGAS_lstringlist temp_2 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 403)) ;
  temp_2.addAssign_operation (var_oil_5F_desc_10511  COMMA_SOURCE_FILE ("implementation_parser.galgas", 403)) ;
  outArgument_options = GALGAS_impEnumType::constructor_new (temp_1, GALGAS_dataType::constructor_enumeration (SOURCE_FILE ("implementation_parser.galgas", 403)), outArgument_name, var_multiple_10468, temp_2, var_withAuto_10272, var_defaultValue_10536, var_items_10308  COMMA_SOURCE_FILE ("implementation_parser.galgas", 403)) ;
  {
  routine_verifyEnum (outArgument_options, inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 404)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_enum_5F_options_i12_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_with_5F_auto_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 371)) ;
  nt_enum_5F_item_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 375)) ;
      nt_enum_5F_item_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 377)) ;
  nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
  nt_multiple_parse (inCompiler) ;
  switch (select_implementation_5F_parser_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 384)) ;
    switch (select_implementation_5F_parser_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 387)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 391)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 395)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_number_5F_options_i13_ (GALGAS_lstring & outArgument_name,
                                                                                             GALGAS_impType & outArgument_options,
                                                                                             const GALGAS_dataType constinArgument_type,
                                                                                             C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_options.drop () ; // Release 'out' argument
  GALGAS_bool var_withAuto_11397 ;
  nt_with_5F_auto_ (var_withAuto_11397, inCompiler) ;
  GALGAS_attributeRange var_range_11445 ;
  nt_range_ (var_range_11445, constinArgument_type, inCompiler) ;
  nt_identifier_5F_or_5F_attribute_ (outArgument_name, inCompiler) ;
  GALGAS_bool var_multiple_11519 ;
  nt_multiple_ (var_multiple_11519, inCompiler) ;
  GALGAS_lstring var_oil_5F_desc_11562 ;
  GALGAS_object_5F_t var_defaultValue_11587 ;
  switch (select_implementation_5F_parser_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 421)) ;
    switch (select_implementation_5F_parser_20 (inCompiler)) {
    case 1: {
      nt_int_5F_or_5F_float_ (var_defaultValue_11587, constinArgument_type, inCompiler) ;
      var_oil_5F_desc_11562 = var_defaultValue_11587.getter_oil_5F_desc (SOURCE_FILE ("implementation_parser.galgas", 424)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 426)) ;
      nt_description_ (var_oil_5F_desc_11562, inCompiler) ;
      var_defaultValue_11587 = GALGAS_void::constructor_new (var_oil_5F_desc_11562, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 428))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 428)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 430)) ;
      nt_description_ (var_oil_5F_desc_11562, inCompiler) ;
      var_defaultValue_11587 = GALGAS_auto::constructor_new (var_oil_5F_desc_11562, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 432))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 432)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_ (var_oil_5F_desc_11562, inCompiler) ;
    var_defaultValue_11587 = GALGAS_void::constructor_new (var_oil_5F_desc_11562, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 436))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 436)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_locationList temp_0 = GALGAS_locationList::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 438)) ;
  temp_0.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 438))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 438)) ;
  GALGAS_lstringlist temp_1 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 438)) ;
  temp_1.addAssign_operation (var_oil_5F_desc_11562  COMMA_SOURCE_FILE ("implementation_parser.galgas", 438)) ;
  outArgument_options = GALGAS_impRangedType::constructor_new (temp_0, constinArgument_type, outArgument_name, var_multiple_11519, temp_1, var_withAuto_11397, var_defaultValue_11587, var_range_11445  COMMA_SOURCE_FILE ("implementation_parser.galgas", 438)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_number_5F_options_i13_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_with_5F_auto_parse (inCompiler) ;
  nt_range_parse (inCompiler) ;
  nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
  nt_multiple_parse (inCompiler) ;
  switch (select_implementation_5F_parser_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 421)) ;
    switch (select_implementation_5F_parser_20 (inCompiler)) {
    case 1: {
      nt_int_5F_or_5F_float_parse (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 426)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 430)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_type_5F_options_i14_ (GALGAS_lstring & outArgument_name,
                                                                                           GALGAS_impType & outArgument_options,
                                                                                           const GALGAS_dataType constinArgument_type,
                                                                                           C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_options.drop () ; // Release 'out' argument
  GALGAS_bool var_withAuto_12252 ;
  nt_with_5F_auto_ (var_withAuto_12252, inCompiler) ;
  nt_identifier_5F_or_5F_attribute_ (outArgument_name, inCompiler) ;
  GALGAS_bool var_multiple_12327 ;
  nt_multiple_ (var_multiple_12327, inCompiler) ;
  GALGAS_object_5F_t var_defaultValue_12375 ;
  GALGAS_lstring var_oil_5F_desc_12395 ;
  switch (select_implementation_5F_parser_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 453)) ;
    switch (select_implementation_5F_parser_22 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_ident_12444 ;
      nt_identifier_5F_or_5F_attribute_ (var_ident_12444, inCompiler) ;
      nt_description_ (var_oil_5F_desc_12395, inCompiler) ;
      var_defaultValue_12375 = GALGAS_stringAttribute::constructor_new (var_oil_5F_desc_12395, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 458)), var_ident_12444.getter_string (SOURCE_FILE ("implementation_parser.galgas", 458))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 458)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 460)) ;
      nt_description_ (var_oil_5F_desc_12395, inCompiler) ;
      var_defaultValue_12375 = GALGAS_void::constructor_new (var_oil_5F_desc_12395, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 462))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 462)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 464)) ;
      nt_description_ (var_oil_5F_desc_12395, inCompiler) ;
      var_defaultValue_12375 = GALGAS_auto::constructor_new (var_oil_5F_desc_12395, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 466))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 466)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_ (var_oil_5F_desc_12395, inCompiler) ;
    var_defaultValue_12375 = GALGAS_void::constructor_new (var_oil_5F_desc_12395, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 470))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 470)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_locationList temp_0 = GALGAS_locationList::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 472)) ;
  temp_0.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 472))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 472)) ;
  GALGAS_lstringlist temp_1 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("implementation_parser.galgas", 472)) ;
  temp_1.addAssign_operation (var_oil_5F_desc_12395  COMMA_SOURCE_FILE ("implementation_parser.galgas", 472)) ;
  outArgument_options = GALGAS_impAutoDefaultType::constructor_new (temp_0, constinArgument_type, outArgument_name, var_multiple_12327, temp_1, var_withAuto_12252, var_defaultValue_12375  COMMA_SOURCE_FILE ("implementation_parser.galgas", 472)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_type_5F_options_i14_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_with_5F_auto_parse (inCompiler) ;
  nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
  nt_multiple_parse (inCompiler) ;
  switch (select_implementation_5F_parser_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 453)) ;
    switch (select_implementation_5F_parser_22 (inCompiler)) {
    case 1: {
      nt_identifier_5F_or_5F_attribute_parse (inCompiler) ;
      nt_description_parse (inCompiler) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) COMMA_SOURCE_FILE ("implementation_parser.galgas", 460)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 464)) ;
      nt_description_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_description_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_with_5F_auto_i15_ (GALGAS_bool & outArgument_withAuto,
                                                                                        C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_withAuto.drop () ; // Release 'out' argument
  switch (select_implementation_5F_parser_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 478)) ;
    outArgument_withAuto = GALGAS_bool (true) ;
  } break ;
  case 2: {
    outArgument_withAuto = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_with_5F_auto_i15_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  switch (select_implementation_5F_parser_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO) COMMA_SOURCE_FILE ("implementation_parser.galgas", 478)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_int_5F_or_5F_float_i16_ (GALGAS_object_5F_t & outArgument_num,
                                                                                              const GALGAS_dataType constinArgument_type,
                                                                                              C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_num.drop () ; // Release 'out' argument
  GALGAS_bool var_signed_13245 ;
  nt_sign_ (var_signed_13245, inCompiler) ;
  switch (select_implementation_5F_parser_24 (inCompiler)) {
  case 1: {
    GALGAS_luint_36__34_ var_number_13291 ;
    var_number_13291 = inCompiler->synthetizedAttribute_integerNumber () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 491)) ;
    GALGAS_lstring var_oil_5F_desc_13359 ;
    nt_description_ (var_oil_5F_desc_13359, inCompiler) ;
    outArgument_num = function_checkAndGetIntegerNumber (var_oil_5F_desc_13359, constinArgument_type, var_number_13291, var_signed_13245, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 493)) ;
  } break ;
  case 2: {
    GALGAS_ldouble var_number_13452 ;
    var_number_13452 = inCompiler->synthetizedAttribute_floatNumber () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 496)) ;
    GALGAS_lstring var_oil_5F_desc_13520 ;
    nt_description_ (var_oil_5F_desc_13520, inCompiler) ;
    outArgument_num = function_checkAndGetFloatNumber (var_oil_5F_desc_13520, constinArgument_type, var_number_13452, var_signed_13245, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 498)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_int_5F_or_5F_float_i16_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_sign_parse (inCompiler) ;
  switch (select_implementation_5F_parser_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 491)) ;
    nt_description_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 496)) ;
    nt_description_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_set_5F_followup_i17_ (GALGAS_numberList & ioArgument_numbers,
                                                                                           const GALGAS_dataType constinArgument_type,
                                                                                           C_Lexique_goil_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 507)) ;
      GALGAS_object_5F_t var_num_13706 ;
      nt_int_5F_or_5F_float_ (var_num_13706, constinArgument_type, inCompiler) ;
      ioArgument_numbers.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 510)), var_num_13706  COMMA_SOURCE_FILE ("implementation_parser.galgas", 510)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_set_5F_followup_i17_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_implementation_5F_parser_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 507)) ;
      nt_int_5F_or_5F_float_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_range_5F_content_i18_ (GALGAS_attributeRange & outArgument_range,
                                                                                            const GALGAS_dataType constinArgument_type,
                                                                                            C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_range.drop () ; // Release 'out' argument
  GALGAS_object_5F_t var_start_13869 = GALGAS_void::constructor_new (function_emptyLString (inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 517)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 517))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 517)) ;
  GALGAS_object_5F_t var_stop_13934 = GALGAS_void::constructor_new (function_emptyLString (inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 518)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 518))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 518)) ;
  GALGAS_bool var_signed_13997 ;
  nt_sign_ (var_signed_13997, inCompiler) ;
  switch (select_implementation_5F_parser_26 (inCompiler)) {
  case 1: {
    GALGAS_luint_36__34_ var_number_14043 ;
    var_number_14043 = inCompiler->synthetizedAttribute_integerNumber () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 523)) ;
    var_start_13869 = function_checkAndGetIntegerNumber (function_emptyLString (inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 524)), constinArgument_type, var_number_14043, var_signed_13997, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 524)) ;
    nt_int_5F_or_5F_float_ (var_stop_13934, constinArgument_type, inCompiler) ;
    outArgument_range = function_buildRange (constinArgument_type, var_start_13869, var_stop_13934, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 526)) ;
  } break ;
  case 2: {
    GALGAS_luint_36__34_ var_number_14254 ;
    var_number_14254 = inCompiler->synthetizedAttribute_integerNumber () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 529)) ;
    var_start_13869 = function_checkAndGetIntegerNumber (function_emptyLString (inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 530)), constinArgument_type, var_number_14254, var_signed_13997, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 530)) ;
    switch (select_implementation_5F_parser_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 532)) ;
      nt_int_5F_or_5F_float_ (var_stop_13934, constinArgument_type, inCompiler) ;
      outArgument_range = function_buildRange (constinArgument_type, var_start_13869, var_stop_13934, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 533)) ;
    } break ;
    case 2: {
      GALGAS_numberList var_numbers_14483 = GALGAS_numberList::constructor_listWithValue (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 535)), var_start_13869  COMMA_SOURCE_FILE ("implementation_parser.galgas", 535)) ;
      nt_set_5F_followup_ (var_numbers_14483, constinArgument_type, inCompiler) ;
      outArgument_range = function_attributeRangeWithNumberList (var_numbers_14483, constinArgument_type, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 537)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    GALGAS_ldouble var_number_14667 ;
    var_number_14667 = inCompiler->synthetizedAttribute_floatNumber () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 541)) ;
    var_start_13869 = function_checkAndGetFloatNumber (function_emptyLString (inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 542)), constinArgument_type, var_number_14667, var_signed_13997, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 542)) ;
    switch (select_implementation_5F_parser_28 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 544)) ;
      nt_int_5F_or_5F_float_ (var_stop_13934, constinArgument_type, inCompiler) ;
      outArgument_range = function_buildRange (constinArgument_type, var_start_13869, var_stop_13934, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 545)) ;
    } break ;
    case 2: {
      GALGAS_numberList var_numbers_14895 = GALGAS_numberList::constructor_listWithValue (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 547)), var_start_13869  COMMA_SOURCE_FILE ("implementation_parser.galgas", 547)) ;
      nt_set_5F_followup_ (var_numbers_14895, constinArgument_type, inCompiler) ;
      outArgument_range = function_attributeRangeWithNumberList (var_numbers_14895, constinArgument_type, inCompiler COMMA_SOURCE_FILE ("implementation_parser.galgas", 549)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_range_5F_content_i18_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  nt_sign_parse (inCompiler) ;
  switch (select_implementation_5F_parser_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 523)) ;
    nt_int_5F_or_5F_float_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 529)) ;
    switch (select_implementation_5F_parser_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 532)) ;
      nt_int_5F_or_5F_float_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_set_5F_followup_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) COMMA_SOURCE_FILE ("implementation_parser.galgas", 541)) ;
    switch (select_implementation_5F_parser_28 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 544)) ;
      nt_int_5F_or_5F_float_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_set_5F_followup_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_range_i19_ (GALGAS_attributeRange & outArgument_range,
                                                                                 const GALGAS_dataType constinArgument_rangeType,
                                                                                 C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_range.drop () ; // Release 'out' argument
  switch (select_implementation_5F_parser_29 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 558)) ;
    nt_range_5F_content_ (outArgument_range, constinArgument_rangeType, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 558)) ;
  } break ;
  case 2: {
    outArgument_range = GALGAS_noRange::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_parser.galgas", 560))  COMMA_SOURCE_FILE ("implementation_parser.galgas", 560)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_range_i19_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  switch (select_implementation_5F_parser_29 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 558)) ;
    nt_range_5F_content_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 558)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_multiple_i20_ (GALGAS_bool & outArgument_multi,
                                                                                    C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_multi.drop () ; // Release 'out' argument
  switch (select_implementation_5F_parser_30 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 567)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 567)) ;
    outArgument_multi = GALGAS_bool (true) ;
  } break ;
  case 2: {
    outArgument_multi = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_multiple_i20_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  switch (select_implementation_5F_parser_30 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 567)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("implementation_parser.galgas", 567)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_ (GALGAS_lstring & outArgument_name,
                                                                                                         C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_name = inCompiler->synthetizedAttribute_att_5F_token () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 576)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 576)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_ (GALGAS_lstring & outArgument_name,
                                                                                                             C_Lexique_goil_5F_lexique * inCompiler) {
  outArgument_name.drop () ; // Release 'out' argument
  outArgument_name = inCompiler->synthetizedAttribute_att_5F_token () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 584)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_implementation_5F_parser::rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE ("implementation_parser.galgas", 584)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_goil_file_level_include [] = {
// At index 0 : <implementation_definition>, in file 'implementation_parser.ggs', line 55
  TERMINAL (C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION) // $IMPLEMENTATION$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (14) // <implementation_object_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 7 : <start>, in file 'goil_syntax.ggs', line 38
, NONTERMINAL (5) // <OIL_version>
, NONTERMINAL (2) // <file>
, END_PRODUCTION
// At index 10 : <file>, in file 'goil_syntax.ggs', line 110
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 12 : <sign>, in file 'goil_syntax.ggs', line 126
, NONTERMINAL (37) // <select_goil_5F_syntax_1>
, END_PRODUCTION
// At index 14 : <description>, in file 'goil_syntax.ggs', line 139
, NONTERMINAL (38) // <select_goil_5F_syntax_2>
, END_PRODUCTION
// At index 16 : <OIL_version>, in file 'goil_syntax.ggs', line 163
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_OIL_5F_VERSION) // $OIL_VERSION$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 22 : <application_definition>, in file 'goil_syntax.ggs', line 170
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_CPU) // $CPU$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (7) // <object_definition_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 30 : <object_definition_list>, in file 'goil_syntax.ggs', line 184
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 32 : <boolean>, in file 'goil_syntax.ggs', line 230
, NONTERMINAL (41) // <select_goil_5F_syntax_5>
, END_PRODUCTION
// At index 34 : <oil_declaration_list>, in file 'goil_syntax.ggs', line 240
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 36 : <oil_declaration>, in file 'goil_syntax.ggs', line 252
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (43) // <select_goil_5F_syntax_7>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 40 : <include_file_level>, in file 'goil_syntax.ggs', line 425
, NONTERMINAL (48) // <select_goil_5F_syntax_12>
, NONTERMINAL (49) // <select_goil_5F_syntax_13>
, END_PRODUCTION
// At index 43 : <include_cpu_level>, in file 'goil_syntax.ggs', line 449
, NONTERMINAL (50) // <select_goil_5F_syntax_14>
, NONTERMINAL (51) // <select_goil_5F_syntax_15>
, END_PRODUCTION
// At index 46 : <include_object_level>, in file 'goil_syntax.ggs', line 473
, NONTERMINAL (52) // <select_goil_5F_syntax_16>
, NONTERMINAL (53) // <select_goil_5F_syntax_17>
, END_PRODUCTION
// At index 49 : <implementation_object_list>, in file 'implementation_parser.ggs', line 62
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 51 : <include_implementation_level>, in file 'implementation_parser.ggs', line 71
, NONTERMINAL (55) // <select_implementation_5F_parser_1>
, NONTERMINAL (56) // <select_implementation_5F_parser_2>
, END_PRODUCTION
// At index 54 : <include_type_level>, in file 'implementation_parser.ggs', line 92
, NONTERMINAL (57) // <select_implementation_5F_parser_3>
, NONTERMINAL (58) // <select_implementation_5F_parser_4>
, END_PRODUCTION
// At index 57 : <implementation_objects>, in file 'implementation_parser.ggs', line 135
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (59) // <select_implementation_5F_parser_5>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 63 : <implementation_list>, in file 'implementation_parser.ggs', line 183
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 65 : <implementation_type>, in file 'implementation_parser.ggs', line 212
, NONTERMINAL (61) // <select_implementation_5F_parser_7>
, END_PRODUCTION
// At index 67 : <struct_options>, in file 'implementation_parser.ggs', line 240
, NONTERMINAL (62) // <select_implementation_5F_parser_8>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 72 : <objref_option>, in file 'implementation_parser.ggs', line 257
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 76 : <string_options>, in file 'implementation_parser.ggs', line 275
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (63) // <select_implementation_5F_parser_9>
, END_PRODUCTION
// At index 81 : <boolean_options>, in file 'implementation_parser.ggs', line 307
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (65) // <select_implementation_5F_parser_11>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (68) // <select_implementation_5F_parser_14>
, END_PRODUCTION
// At index 87 : <enum_item>, in file 'implementation_parser.ggs', line 352
, NONTERMINAL (35) // <identifier_or_enum_value>
, NONTERMINAL (69) // <select_implementation_5F_parser_15>
, END_PRODUCTION
// At index 90 : <enum_options>, in file 'implementation_parser.ggs', line 365
, NONTERMINAL (28) // <with_auto>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, NONTERMINAL (24) // <enum_item>
, NONTERMINAL (70) // <select_implementation_5F_parser_16>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (71) // <select_implementation_5F_parser_17>
, END_PRODUCTION
// At index 99 : <number_options>, in file 'implementation_parser.ggs', line 407
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (32) // <range>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (73) // <select_implementation_5F_parser_19>
, END_PRODUCTION
// At index 105 : <type_options>, in file 'implementation_parser.ggs', line 441
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (75) // <select_implementation_5F_parser_21>
, END_PRODUCTION
// At index 110 : <with_auto>, in file 'implementation_parser.ggs', line 475
, NONTERMINAL (77) // <select_implementation_5F_parser_23>
, END_PRODUCTION
// At index 112 : <int_or_float>, in file 'implementation_parser.ggs', line 484
, NONTERMINAL (3) // <sign>
, NONTERMINAL (78) // <select_implementation_5F_parser_24>
, END_PRODUCTION
// At index 115 : <set_followup>, in file 'implementation_parser.ggs', line 502
, NONTERMINAL (79) // <select_implementation_5F_parser_25>
, END_PRODUCTION
// At index 117 : <range_content>, in file 'implementation_parser.ggs', line 514
, NONTERMINAL (3) // <sign>
, NONTERMINAL (80) // <select_implementation_5F_parser_26>
, END_PRODUCTION
// At index 120 : <range>, in file 'implementation_parser.ggs', line 554
, NONTERMINAL (83) // <select_implementation_5F_parser_29>
, END_PRODUCTION
// At index 122 : <multiple>, in file 'implementation_parser.ggs', line 564
, NONTERMINAL (84) // <select_implementation_5F_parser_30>
, END_PRODUCTION
// At index 124 : <identifier_or_attribute>, in file 'implementation_parser.ggs', line 574
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, END_PRODUCTION
// At index 126 : <identifier_or_enum_value>, in file 'implementation_parser.ggs', line 579
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 128 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, END_PRODUCTION
// At index 129 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (11) // <include_file_level>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 132 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (0) // <implementation_definition>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 135 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (6) // <application_definition>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 138 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2D_) // $-$
, END_PRODUCTION
// At index 140 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2B_) // $+$
, END_PRODUCTION
// At index 142 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, END_PRODUCTION
// At index 143 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
, END_PRODUCTION
// At index 144 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3A_) // $:$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (39) // <select_goil_5F_syntax_3>
, END_PRODUCTION
// At index 148 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
, END_PRODUCTION
// At index 149 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (39) // <select_goil_5F_syntax_3>
, END_PRODUCTION
// At index 152 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, END_PRODUCTION
// At index 153 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 162 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, NONTERMINAL (12) // <include_cpu_level>
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 165 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) // $TRUE$
, END_PRODUCTION
// At index 167 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) // $FALSE$
, END_PRODUCTION
// At index 169 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, END_PRODUCTION
// At index 170 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, NONTERMINAL (10) // <oil_declaration>
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 173 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, NONTERMINAL (13) // <include_object_level>
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 176 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (44) // <select_goil_5F_syntax_8>
, END_PRODUCTION
// At index 179 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 185 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (45) // <select_goil_5F_syntax_9>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 189 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, NONTERMINAL (3) // <sign>
, NONTERMINAL (46) // <select_goil_5F_syntax_10>
, END_PRODUCTION
// At index 192 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, NONTERMINAL (8) // <boolean>
, NONTERMINAL (47) // <select_goil_5F_syntax_11>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 196 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 199 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 202 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 206 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
, END_PRODUCTION
// At index 207 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 210 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 213 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 217 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
, END_PRODUCTION
// At index 218 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 220 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 222 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 224 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 226 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 228 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 230 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 232 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 234 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 236 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 238 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 240 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 242 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, END_PRODUCTION
// At index 243 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, NONTERMINAL (17) // <implementation_objects>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 247 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, NONTERMINAL (15) // <include_implementation_level>
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 250 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 252 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 254 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 256 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 258 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 260 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 262 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 264 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 266 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 269 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
, END_PRODUCTION
// At index 270 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, END_PRODUCTION
// At index 271 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, NONTERMINAL (19) // <implementation_type>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 275 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, NONTERMINAL (16) // <include_type_level>
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 278 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_33__32_) // $UINT32$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 281 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_33__32_) // $INT32$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 284 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_36__34_) // $UINT64$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 287 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_36__34_) // $INT64$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 290 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FLOAT) // $FLOAT$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 293 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_ENUM) // $ENUM$
, NONTERMINAL (25) // <enum_options>
, END_PRODUCTION
// At index 296 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_BOOLEAN) // $BOOLEAN$
, NONTERMINAL (23) // <boolean_options>
, END_PRODUCTION
// At index 299 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRING) // $STRING$
, NONTERMINAL (22) // <string_options>
, END_PRODUCTION
// At index 302 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_IDENTIFIER) // $IDENTIFIER$
, NONTERMINAL (27) // <type_options>
, END_PRODUCTION
// At index 305 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRUCT) // $STRUCT$
, NONTERMINAL (20) // <struct_options>
, END_PRODUCTION
// At index 308 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (21) // <objref_option>
, END_PRODUCTION
// At index 311 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 315 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
, END_PRODUCTION
// At index 316 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (64) // <select_implementation_5F_parser_10>
, END_PRODUCTION
// At index 319 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 321 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 324 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 327 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 330 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) // $TRUE$
, NONTERMINAL (66) // <select_implementation_5F_parser_12>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) // $FALSE$
, NONTERMINAL (67) // <select_implementation_5F_parser_13>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 338 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
, END_PRODUCTION
// At index 339 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 343 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
, END_PRODUCTION
// At index 344 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 348 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
, END_PRODUCTION
// At index 349 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (8) // <boolean>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 353 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 355 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 359 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
, END_PRODUCTION
// At index 360 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
, END_PRODUCTION
// At index 361 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (24) // <enum_item>
, NONTERMINAL (70) // <select_implementation_5F_parser_16>
, END_PRODUCTION
// At index 365 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (72) // <select_implementation_5F_parser_18>
, END_PRODUCTION
// At index 368 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 370 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 373 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 376 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 379 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (74) // <select_implementation_5F_parser_20>
, END_PRODUCTION
// At index 382 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 384 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 386 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 389 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 392 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (76) // <select_implementation_5F_parser_22>
, END_PRODUCTION
// At index 395 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 397 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 400 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 403 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 406 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO) // $WITH_AUTO$
, END_PRODUCTION
// At index 408 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
, END_PRODUCTION
// At index 409 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 412 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 415 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
, END_PRODUCTION
// At index 416 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (29) // <int_or_float>
, NONTERMINAL (79) // <select_implementation_5F_parser_25>
, END_PRODUCTION
// At index 420 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number) // $set_start_uint_number$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 423 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (81) // <select_implementation_5F_parser_27>
, END_PRODUCTION
// At index 426 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (82) // <select_implementation_5F_parser_28>
, END_PRODUCTION
// At index 429 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) // $..$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 432 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
, NONTERMINAL (30) // <set_followup>
, END_PRODUCTION
// At index 434 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) // $..$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 437 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
, NONTERMINAL (30) // <set_followup>
, END_PRODUCTION
// At index 439 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, NONTERMINAL (31) // <range_content>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 443 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
, END_PRODUCTION
// At index 444 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 447 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
, END_PRODUCTION
// At index 448 : <>, in file '.ggs', line 0
, NONTERMINAL (2) // <file>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_goil_file_level_include [159] = {
 {"<implementation_definition>", "implementation_parser", 0}, // at index 0
 {"<start>", "goil_syntax", 7}, // at index 1
 {"<file>", "goil_syntax", 10}, // at index 2
 {"<sign>", "goil_syntax", 12}, // at index 3
 {"<description>", "goil_syntax", 14}, // at index 4
 {"<OIL_version>", "goil_syntax", 16}, // at index 5
 {"<application_definition>", "goil_syntax", 22}, // at index 6
 {"<object_definition_list>", "goil_syntax", 30}, // at index 7
 {"<boolean>", "goil_syntax", 32}, // at index 8
 {"<oil_declaration_list>", "goil_syntax", 34}, // at index 9
 {"<oil_declaration>", "goil_syntax", 36}, // at index 10
 {"<include_file_level>", "goil_syntax", 40}, // at index 11
 {"<include_cpu_level>", "goil_syntax", 43}, // at index 12
 {"<include_object_level>", "goil_syntax", 46}, // at index 13
 {"<implementation_object_list>", "implementation_parser", 49}, // at index 14
 {"<include_implementation_level>", "implementation_parser", 51}, // at index 15
 {"<include_type_level>", "implementation_parser", 54}, // at index 16
 {"<implementation_objects>", "implementation_parser", 57}, // at index 17
 {"<implementation_list>", "implementation_parser", 63}, // at index 18
 {"<implementation_type>", "implementation_parser", 65}, // at index 19
 {"<struct_options>", "implementation_parser", 67}, // at index 20
 {"<objref_option>", "implementation_parser", 72}, // at index 21
 {"<string_options>", "implementation_parser", 76}, // at index 22
 {"<boolean_options>", "implementation_parser", 81}, // at index 23
 {"<enum_item>", "implementation_parser", 87}, // at index 24
 {"<enum_options>", "implementation_parser", 90}, // at index 25
 {"<number_options>", "implementation_parser", 99}, // at index 26
 {"<type_options>", "implementation_parser", 105}, // at index 27
 {"<with_auto>", "implementation_parser", 110}, // at index 28
 {"<int_or_float>", "implementation_parser", 112}, // at index 29
 {"<set_followup>", "implementation_parser", 115}, // at index 30
 {"<range_content>", "implementation_parser", 117}, // at index 31
 {"<range>", "implementation_parser", 120}, // at index 32
 {"<multiple>", "implementation_parser", 122}, // at index 33
 {"<identifier_or_attribute>", "implementation_parser", 124}, // at index 34
 {"<identifier_or_enum_value>", "implementation_parser", 126}, // at index 35
 {"<select_goil_5F_syntax_0>", "goil_syntax", 128}, // at index 36
 {"<select_goil_5F_syntax_0>", "goil_syntax", 129}, // at index 37
 {"<select_goil_5F_syntax_0>", "goil_syntax", 132}, // at index 38
 {"<select_goil_5F_syntax_0>", "goil_syntax", 135}, // at index 39
 {"<select_goil_5F_syntax_1>", "goil_syntax", 138}, // at index 40
 {"<select_goil_5F_syntax_1>", "goil_syntax", 140}, // at index 41
 {"<select_goil_5F_syntax_1>", "goil_syntax", 142}, // at index 42
 {"<select_goil_5F_syntax_2>", "goil_syntax", 143}, // at index 43
 {"<select_goil_5F_syntax_2>", "goil_syntax", 144}, // at index 44
 {"<select_goil_5F_syntax_3>", "goil_syntax", 148}, // at index 45
 {"<select_goil_5F_syntax_3>", "goil_syntax", 149}, // at index 46
 {"<select_goil_5F_syntax_4>", "goil_syntax", 152}, // at index 47
 {"<select_goil_5F_syntax_4>", "goil_syntax", 153}, // at index 48
 {"<select_goil_5F_syntax_4>", "goil_syntax", 162}, // at index 49
 {"<select_goil_5F_syntax_5>", "goil_syntax", 165}, // at index 50
 {"<select_goil_5F_syntax_5>", "goil_syntax", 167}, // at index 51
 {"<select_goil_5F_syntax_6>", "goil_syntax", 169}, // at index 52
 {"<select_goil_5F_syntax_6>", "goil_syntax", 170}, // at index 53
 {"<select_goil_5F_syntax_6>", "goil_syntax", 173}, // at index 54
 {"<select_goil_5F_syntax_7>", "goil_syntax", 176}, // at index 55
 {"<select_goil_5F_syntax_7>", "goil_syntax", 179}, // at index 56
 {"<select_goil_5F_syntax_8>", "goil_syntax", 185}, // at index 57
 {"<select_goil_5F_syntax_8>", "goil_syntax", 189}, // at index 58
 {"<select_goil_5F_syntax_8>", "goil_syntax", 192}, // at index 59
 {"<select_goil_5F_syntax_8>", "goil_syntax", 196}, // at index 60
 {"<select_goil_5F_syntax_8>", "goil_syntax", 199}, // at index 61
 {"<select_goil_5F_syntax_9>", "goil_syntax", 202}, // at index 62
 {"<select_goil_5F_syntax_9>", "goil_syntax", 206}, // at index 63
 {"<select_goil_5F_syntax_10>", "goil_syntax", 207}, // at index 64
 {"<select_goil_5F_syntax_10>", "goil_syntax", 210}, // at index 65
 {"<select_goil_5F_syntax_11>", "goil_syntax", 213}, // at index 66
 {"<select_goil_5F_syntax_11>", "goil_syntax", 217}, // at index 67
 {"<select_goil_5F_syntax_12>", "goil_syntax", 218}, // at index 68
 {"<select_goil_5F_syntax_12>", "goil_syntax", 220}, // at index 69
 {"<select_goil_5F_syntax_13>", "goil_syntax", 222}, // at index 70
 {"<select_goil_5F_syntax_13>", "goil_syntax", 224}, // at index 71
 {"<select_goil_5F_syntax_14>", "goil_syntax", 226}, // at index 72
 {"<select_goil_5F_syntax_14>", "goil_syntax", 228}, // at index 73
 {"<select_goil_5F_syntax_15>", "goil_syntax", 230}, // at index 74
 {"<select_goil_5F_syntax_15>", "goil_syntax", 232}, // at index 75
 {"<select_goil_5F_syntax_16>", "goil_syntax", 234}, // at index 76
 {"<select_goil_5F_syntax_16>", "goil_syntax", 236}, // at index 77
 {"<select_goil_5F_syntax_17>", "goil_syntax", 238}, // at index 78
 {"<select_goil_5F_syntax_17>", "goil_syntax", 240}, // at index 79
 {"<select_implementation_5F_parser_0>", "implementation_parser", 242}, // at index 80
 {"<select_implementation_5F_parser_0>", "implementation_parser", 243}, // at index 81
 {"<select_implementation_5F_parser_0>", "implementation_parser", 247}, // at index 82
 {"<select_implementation_5F_parser_1>", "implementation_parser", 250}, // at index 83
 {"<select_implementation_5F_parser_1>", "implementation_parser", 252}, // at index 84
 {"<select_implementation_5F_parser_2>", "implementation_parser", 254}, // at index 85
 {"<select_implementation_5F_parser_2>", "implementation_parser", 256}, // at index 86
 {"<select_implementation_5F_parser_3>", "implementation_parser", 258}, // at index 87
 {"<select_implementation_5F_parser_3>", "implementation_parser", 260}, // at index 88
 {"<select_implementation_5F_parser_4>", "implementation_parser", 262}, // at index 89
 {"<select_implementation_5F_parser_4>", "implementation_parser", 264}, // at index 90
 {"<select_implementation_5F_parser_5>", "implementation_parser", 266}, // at index 91
 {"<select_implementation_5F_parser_5>", "implementation_parser", 269}, // at index 92
 {"<select_implementation_5F_parser_6>", "implementation_parser", 270}, // at index 93
 {"<select_implementation_5F_parser_6>", "implementation_parser", 271}, // at index 94
 {"<select_implementation_5F_parser_6>", "implementation_parser", 275}, // at index 95
 {"<select_implementation_5F_parser_7>", "implementation_parser", 278}, // at index 96
 {"<select_implementation_5F_parser_7>", "implementation_parser", 281}, // at index 97
 {"<select_implementation_5F_parser_7>", "implementation_parser", 284}, // at index 98
 {"<select_implementation_5F_parser_7>", "implementation_parser", 287}, // at index 99
 {"<select_implementation_5F_parser_7>", "implementation_parser", 290}, // at index 100
 {"<select_implementation_5F_parser_7>", "implementation_parser", 293}, // at index 101
 {"<select_implementation_5F_parser_7>", "implementation_parser", 296}, // at index 102
 {"<select_implementation_5F_parser_7>", "implementation_parser", 299}, // at index 103
 {"<select_implementation_5F_parser_7>", "implementation_parser", 302}, // at index 104
 {"<select_implementation_5F_parser_7>", "implementation_parser", 305}, // at index 105
 {"<select_implementation_5F_parser_7>", "implementation_parser", 308}, // at index 106
 {"<select_implementation_5F_parser_8>", "implementation_parser", 311}, // at index 107
 {"<select_implementation_5F_parser_8>", "implementation_parser", 315}, // at index 108
 {"<select_implementation_5F_parser_9>", "implementation_parser", 316}, // at index 109
 {"<select_implementation_5F_parser_9>", "implementation_parser", 319}, // at index 110
 {"<select_implementation_5F_parser_10>", "implementation_parser", 321}, // at index 111
 {"<select_implementation_5F_parser_10>", "implementation_parser", 324}, // at index 112
 {"<select_implementation_5F_parser_10>", "implementation_parser", 327}, // at index 113
 {"<select_implementation_5F_parser_11>", "implementation_parser", 330}, // at index 114
 {"<select_implementation_5F_parser_11>", "implementation_parser", 338}, // at index 115
 {"<select_implementation_5F_parser_12>", "implementation_parser", 339}, // at index 116
 {"<select_implementation_5F_parser_12>", "implementation_parser", 343}, // at index 117
 {"<select_implementation_5F_parser_13>", "implementation_parser", 344}, // at index 118
 {"<select_implementation_5F_parser_13>", "implementation_parser", 348}, // at index 119
 {"<select_implementation_5F_parser_14>", "implementation_parser", 349}, // at index 120
 {"<select_implementation_5F_parser_14>", "implementation_parser", 353}, // at index 121
 {"<select_implementation_5F_parser_15>", "implementation_parser", 355}, // at index 122
 {"<select_implementation_5F_parser_15>", "implementation_parser", 359}, // at index 123
 {"<select_implementation_5F_parser_16>", "implementation_parser", 360}, // at index 124
 {"<select_implementation_5F_parser_16>", "implementation_parser", 361}, // at index 125
 {"<select_implementation_5F_parser_17>", "implementation_parser", 365}, // at index 126
 {"<select_implementation_5F_parser_17>", "implementation_parser", 368}, // at index 127
 {"<select_implementation_5F_parser_18>", "implementation_parser", 370}, // at index 128
 {"<select_implementation_5F_parser_18>", "implementation_parser", 373}, // at index 129
 {"<select_implementation_5F_parser_18>", "implementation_parser", 376}, // at index 130
 {"<select_implementation_5F_parser_19>", "implementation_parser", 379}, // at index 131
 {"<select_implementation_5F_parser_19>", "implementation_parser", 382}, // at index 132
 {"<select_implementation_5F_parser_20>", "implementation_parser", 384}, // at index 133
 {"<select_implementation_5F_parser_20>", "implementation_parser", 386}, // at index 134
 {"<select_implementation_5F_parser_20>", "implementation_parser", 389}, // at index 135
 {"<select_implementation_5F_parser_21>", "implementation_parser", 392}, // at index 136
 {"<select_implementation_5F_parser_21>", "implementation_parser", 395}, // at index 137
 {"<select_implementation_5F_parser_22>", "implementation_parser", 397}, // at index 138
 {"<select_implementation_5F_parser_22>", "implementation_parser", 400}, // at index 139
 {"<select_implementation_5F_parser_22>", "implementation_parser", 403}, // at index 140
 {"<select_implementation_5F_parser_23>", "implementation_parser", 406}, // at index 141
 {"<select_implementation_5F_parser_23>", "implementation_parser", 408}, // at index 142
 {"<select_implementation_5F_parser_24>", "implementation_parser", 409}, // at index 143
 {"<select_implementation_5F_parser_24>", "implementation_parser", 412}, // at index 144
 {"<select_implementation_5F_parser_25>", "implementation_parser", 415}, // at index 145
 {"<select_implementation_5F_parser_25>", "implementation_parser", 416}, // at index 146
 {"<select_implementation_5F_parser_26>", "implementation_parser", 420}, // at index 147
 {"<select_implementation_5F_parser_26>", "implementation_parser", 423}, // at index 148
 {"<select_implementation_5F_parser_26>", "implementation_parser", 426}, // at index 149
 {"<select_implementation_5F_parser_27>", "implementation_parser", 429}, // at index 150
 {"<select_implementation_5F_parser_27>", "implementation_parser", 432}, // at index 151
 {"<select_implementation_5F_parser_28>", "implementation_parser", 434}, // at index 152
 {"<select_implementation_5F_parser_28>", "implementation_parser", 437}, // at index 153
 {"<select_implementation_5F_parser_29>", "implementation_parser", 439}, // at index 154
 {"<select_implementation_5F_parser_29>", "implementation_parser", 443}, // at index 155
 {"<select_implementation_5F_parser_30>", "implementation_parser", 444}, // at index 156
 {"<select_implementation_5F_parser_30>", "implementation_parser", 447}, // at index 157
 {"<>", "", 448} // at index 158
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_goil_file_level_include [159] = {
0, // index 0 : <implementation_definition>, in file 'implementation_parser.ggs', line 55
7, // index 1 : <start>, in file 'goil_syntax.ggs', line 38
10, // index 2 : <file>, in file 'goil_syntax.ggs', line 110
12, // index 3 : <sign>, in file 'goil_syntax.ggs', line 126
14, // index 4 : <description>, in file 'goil_syntax.ggs', line 139
16, // index 5 : <OIL_version>, in file 'goil_syntax.ggs', line 163
22, // index 6 : <application_definition>, in file 'goil_syntax.ggs', line 170
30, // index 7 : <object_definition_list>, in file 'goil_syntax.ggs', line 184
32, // index 8 : <boolean>, in file 'goil_syntax.ggs', line 230
34, // index 9 : <oil_declaration_list>, in file 'goil_syntax.ggs', line 240
36, // index 10 : <oil_declaration>, in file 'goil_syntax.ggs', line 252
40, // index 11 : <include_file_level>, in file 'goil_syntax.ggs', line 425
43, // index 12 : <include_cpu_level>, in file 'goil_syntax.ggs', line 449
46, // index 13 : <include_object_level>, in file 'goil_syntax.ggs', line 473
49, // index 14 : <implementation_object_list>, in file 'implementation_parser.ggs', line 62
51, // index 15 : <include_implementation_level>, in file 'implementation_parser.ggs', line 71
54, // index 16 : <include_type_level>, in file 'implementation_parser.ggs', line 92
57, // index 17 : <implementation_objects>, in file 'implementation_parser.ggs', line 135
63, // index 18 : <implementation_list>, in file 'implementation_parser.ggs', line 183
65, // index 19 : <implementation_type>, in file 'implementation_parser.ggs', line 212
67, // index 20 : <struct_options>, in file 'implementation_parser.ggs', line 240
72, // index 21 : <objref_option>, in file 'implementation_parser.ggs', line 257
76, // index 22 : <string_options>, in file 'implementation_parser.ggs', line 275
81, // index 23 : <boolean_options>, in file 'implementation_parser.ggs', line 307
87, // index 24 : <enum_item>, in file 'implementation_parser.ggs', line 352
90, // index 25 : <enum_options>, in file 'implementation_parser.ggs', line 365
99, // index 26 : <number_options>, in file 'implementation_parser.ggs', line 407
105, // index 27 : <type_options>, in file 'implementation_parser.ggs', line 441
110, // index 28 : <with_auto>, in file 'implementation_parser.ggs', line 475
112, // index 29 : <int_or_float>, in file 'implementation_parser.ggs', line 484
115, // index 30 : <set_followup>, in file 'implementation_parser.ggs', line 502
117, // index 31 : <range_content>, in file 'implementation_parser.ggs', line 514
120, // index 32 : <range>, in file 'implementation_parser.ggs', line 554
122, // index 33 : <multiple>, in file 'implementation_parser.ggs', line 564
124, // index 34 : <identifier_or_attribute>, in file 'implementation_parser.ggs', line 574
126, // index 35 : <identifier_or_enum_value>, in file 'implementation_parser.ggs', line 579
128, // index 36 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
129, // index 37 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
132, // index 38 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
135, // index 39 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
138, // index 40 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
140, // index 41 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
142, // index 42 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
143, // index 43 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
144, // index 44 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
148, // index 45 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
149, // index 46 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
152, // index 47 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
153, // index 48 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
162, // index 49 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
165, // index 50 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
167, // index 51 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
169, // index 52 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
170, // index 53 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
173, // index 54 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
176, // index 55 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
179, // index 56 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
185, // index 57 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
189, // index 58 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
192, // index 59 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
196, // index 60 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
199, // index 61 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
202, // index 62 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
206, // index 63 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
207, // index 64 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
210, // index 65 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
213, // index 66 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
217, // index 67 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
218, // index 68 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
220, // index 69 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
222, // index 70 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
224, // index 71 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
226, // index 72 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
228, // index 73 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
230, // index 74 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
232, // index 75 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
234, // index 76 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
236, // index 77 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
238, // index 78 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
240, // index 79 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
242, // index 80 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
243, // index 81 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
247, // index 82 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
250, // index 83 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
252, // index 84 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
254, // index 85 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
256, // index 86 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
258, // index 87 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
260, // index 88 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
262, // index 89 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
264, // index 90 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
266, // index 91 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
269, // index 92 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
270, // index 93 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
271, // index 94 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
275, // index 95 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
278, // index 96 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
281, // index 97 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
284, // index 98 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
287, // index 99 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
290, // index 100 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
293, // index 101 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
296, // index 102 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
299, // index 103 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
302, // index 104 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
305, // index 105 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
308, // index 106 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
311, // index 107 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
315, // index 108 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
316, // index 109 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
319, // index 110 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
321, // index 111 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
324, // index 112 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
327, // index 113 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
330, // index 114 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
338, // index 115 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
339, // index 116 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
343, // index 117 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
344, // index 118 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
348, // index 119 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
349, // index 120 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
353, // index 121 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
355, // index 122 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
359, // index 123 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
360, // index 124 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
361, // index 125 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
365, // index 126 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
368, // index 127 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
370, // index 128 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
373, // index 129 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
376, // index 130 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
379, // index 131 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
382, // index 132 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
384, // index 133 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
386, // index 134 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
389, // index 135 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
392, // index 136 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
395, // index 137 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
397, // index 138 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
400, // index 139 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
403, // index 140 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
406, // index 141 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
408, // index 142 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
409, // index 143 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
412, // index 144 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
415, // index 145 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
416, // index 146 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
420, // index 147 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
423, // index 148 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
426, // index 149 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
429, // index 150 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
432, // index 151 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
434, // index 152 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
437, // index 153 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
439, // index 154 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
443, // index 155 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
444, // index 156 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
447, // index 157 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
448 // index 158 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_goil_file_level_include [87] = {
0, // at 0 : <implementation_definition>
1, // at 1 : <start>
2, // at 2 : <file>
3, // at 3 : <sign>
4, // at 4 : <description>
5, // at 5 : <OIL_version>
6, // at 6 : <application_definition>
7, // at 7 : <object_definition_list>
8, // at 8 : <boolean>
9, // at 9 : <oil_declaration_list>
10, // at 10 : <oil_declaration>
11, // at 11 : <include_file_level>
12, // at 12 : <include_cpu_level>
13, // at 13 : <include_object_level>
14, // at 14 : <implementation_object_list>
15, // at 15 : <include_implementation_level>
16, // at 16 : <include_type_level>
17, // at 17 : <implementation_objects>
18, // at 18 : <implementation_list>
19, // at 19 : <implementation_type>
20, // at 20 : <struct_options>
21, // at 21 : <objref_option>
22, // at 22 : <string_options>
23, // at 23 : <boolean_options>
24, // at 24 : <enum_item>
25, // at 25 : <enum_options>
26, // at 26 : <number_options>
27, // at 27 : <type_options>
28, // at 28 : <with_auto>
29, // at 29 : <int_or_float>
30, // at 30 : <set_followup>
31, // at 31 : <range_content>
32, // at 32 : <range>
33, // at 33 : <multiple>
34, // at 34 : <identifier_or_attribute>
35, // at 35 : <identifier_or_enum_value>
36, // at 36 : <select_goil_5F_syntax_0>
40, // at 37 : <select_goil_5F_syntax_1>
43, // at 38 : <select_goil_5F_syntax_2>
45, // at 39 : <select_goil_5F_syntax_3>
47, // at 40 : <select_goil_5F_syntax_4>
50, // at 41 : <select_goil_5F_syntax_5>
52, // at 42 : <select_goil_5F_syntax_6>
55, // at 43 : <select_goil_5F_syntax_7>
57, // at 44 : <select_goil_5F_syntax_8>
62, // at 45 : <select_goil_5F_syntax_9>
64, // at 46 : <select_goil_5F_syntax_10>
66, // at 47 : <select_goil_5F_syntax_11>
68, // at 48 : <select_goil_5F_syntax_12>
70, // at 49 : <select_goil_5F_syntax_13>
72, // at 50 : <select_goil_5F_syntax_14>
74, // at 51 : <select_goil_5F_syntax_15>
76, // at 52 : <select_goil_5F_syntax_16>
78, // at 53 : <select_goil_5F_syntax_17>
80, // at 54 : <select_implementation_5F_parser_0>
83, // at 55 : <select_implementation_5F_parser_1>
85, // at 56 : <select_implementation_5F_parser_2>
87, // at 57 : <select_implementation_5F_parser_3>
89, // at 58 : <select_implementation_5F_parser_4>
91, // at 59 : <select_implementation_5F_parser_5>
93, // at 60 : <select_implementation_5F_parser_6>
96, // at 61 : <select_implementation_5F_parser_7>
107, // at 62 : <select_implementation_5F_parser_8>
109, // at 63 : <select_implementation_5F_parser_9>
111, // at 64 : <select_implementation_5F_parser_10>
114, // at 65 : <select_implementation_5F_parser_11>
116, // at 66 : <select_implementation_5F_parser_12>
118, // at 67 : <select_implementation_5F_parser_13>
120, // at 68 : <select_implementation_5F_parser_14>
122, // at 69 : <select_implementation_5F_parser_15>
124, // at 70 : <select_implementation_5F_parser_16>
126, // at 71 : <select_implementation_5F_parser_17>
128, // at 72 : <select_implementation_5F_parser_18>
131, // at 73 : <select_implementation_5F_parser_19>
133, // at 74 : <select_implementation_5F_parser_20>
136, // at 75 : <select_implementation_5F_parser_21>
138, // at 76 : <select_implementation_5F_parser_22>
141, // at 77 : <select_implementation_5F_parser_23>
143, // at 78 : <select_implementation_5F_parser_24>
145, // at 79 : <select_implementation_5F_parser_25>
147, // at 80 : <select_implementation_5F_parser_26>
150, // at 81 : <select_implementation_5F_parser_27>
152, // at 82 : <select_implementation_5F_parser_28>
154, // at 83 : <select_implementation_5F_parser_29>
156, // at 84 : <select_implementation_5F_parser_30>
158, // at 85 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_goil_file_level_include [] = {
// At index 0 : <implementation_definition> only one production, no choice
  -1,
// At index 1 : <start> only one production, no choice
  -1,
// At index 2 : <file> only one production, no choice
  -1,
// At index 3 : <sign> only one production, no choice
  -1,
// At index 4 : <description> only one production, no choice
  -1,
// At index 5 : <OIL_version> only one production, no choice
  -1,
// At index 6 : <application_definition> only one production, no choice
  -1,
// At index 7 : <object_definition_list> only one production, no choice
  -1,
// At index 8 : <boolean> only one production, no choice
  -1,
// At index 9 : <oil_declaration_list> only one production, no choice
  -1,
// At index 10 : <oil_declaration> only one production, no choice
  -1,
// At index 11 : <include_file_level> only one production, no choice
  -1,
// At index 12 : <include_cpu_level> only one production, no choice
  -1,
// At index 13 : <include_object_level> only one production, no choice
  -1,
// At index 14 : <implementation_object_list> only one production, no choice
  -1,
// At index 15 : <include_implementation_level> only one production, no choice
  -1,
// At index 16 : <include_type_level> only one production, no choice
  -1,
// At index 17 : <implementation_objects> only one production, no choice
  -1,
// At index 18 : <implementation_list> only one production, no choice
  -1,
// At index 19 : <implementation_type> only one production, no choice
  -1,
// At index 20 : <struct_options> only one production, no choice
  -1,
// At index 21 : <objref_option> only one production, no choice
  -1,
// At index 22 : <string_options> only one production, no choice
  -1,
// At index 23 : <boolean_options> only one production, no choice
  -1,
// At index 24 : <enum_item> only one production, no choice
  -1,
// At index 25 : <enum_options> only one production, no choice
  -1,
// At index 26 : <number_options> only one production, no choice
  -1,
// At index 27 : <type_options> only one production, no choice
  -1,
// At index 28 : <with_auto> only one production, no choice
  -1,
// At index 29 : <int_or_float> only one production, no choice
  -1,
// At index 30 : <set_followup> only one production, no choice
  -1,
// At index 31 : <range_content> only one production, no choice
  -1,
// At index 32 : <range> only one production, no choice
  -1,
// At index 33 : <multiple> only one production, no choice
  -1,
// At index 34 : <identifier_or_attribute> only one production, no choice
  -1,
// At index 35 : <identifier_or_enum_value> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 36 : <select_goil_5F_syntax_0>
C_Lexique_goil_5F_lexique::kToken_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_CPU, -1, // Choice 4
  -1,
// At index 46 : <select_goil_5F_syntax_1>
C_Lexique_goil_5F_lexique::kToken__2D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2B_, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 3
  -1,
// At index 55 : <select_goil_5F_syntax_2>
C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, -1, // Choice 2
  -1,
// At index 62 : <select_goil_5F_syntax_3>
C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 69 : <select_goil_5F_syntax_4>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 77 : <select_goil_5F_syntax_5>
C_Lexique_goil_5F_lexique::kToken_TRUE, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_FALSE, -1, // Choice 2
  -1,
// At index 82 : <select_goil_5F_syntax_6>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 90 : <select_goil_5F_syntax_7>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 95 : <select_goil_5F_syntax_8>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2D_, C_Lexique_goil_5F_lexique::kToken__2B_, C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_TRUE, C_Lexique_goil_5F_lexique::kToken_FALSE, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 4
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 5
  -1,
// At index 111 : <select_goil_5F_syntax_9>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 117 : <select_goil_5F_syntax_10>
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 2
  -1,
// At index 122 : <select_goil_5F_syntax_11>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 128 : <select_goil_5F_syntax_12>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 133 : <select_goil_5F_syntax_13>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 138 : <select_goil_5F_syntax_14>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 143 : <select_goil_5F_syntax_15>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 148 : <select_goil_5F_syntax_16>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 153 : <select_goil_5F_syntax_17>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 158 : <select_implementation_5F_parser_0>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 166 : <select_implementation_5F_parser_1>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 171 : <select_implementation_5F_parser_2>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 176 : <select_implementation_5F_parser_3>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 181 : <select_implementation_5F_parser_4>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 186 : <select_implementation_5F_parser_5>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 2
  -1,
// At index 191 : <select_implementation_5F_parser_6>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, C_Lexique_goil_5F_lexique::kToken_UINT_33__32_, C_Lexique_goil_5F_lexique::kToken_INT_33__32_, C_Lexique_goil_5F_lexique::kToken_UINT_36__34_, C_Lexique_goil_5F_lexique::kToken_INT_36__34_, C_Lexique_goil_5F_lexique::kToken_FLOAT, C_Lexique_goil_5F_lexique::kToken_ENUM, C_Lexique_goil_5F_lexique::kToken_BOOLEAN, C_Lexique_goil_5F_lexique::kToken_STRING, C_Lexique_goil_5F_lexique::kToken_IDENTIFIER, C_Lexique_goil_5F_lexique::kToken_STRUCT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 209 : <select_implementation_5F_parser_7>
C_Lexique_goil_5F_lexique::kToken_UINT_33__32_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_INT_33__32_, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_UINT_36__34_, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_INT_36__34_, -1, // Choice 4
C_Lexique_goil_5F_lexique::kToken_FLOAT, -1, // Choice 5
C_Lexique_goil_5F_lexique::kToken_ENUM, -1, // Choice 6
C_Lexique_goil_5F_lexique::kToken_BOOLEAN, -1, // Choice 7
C_Lexique_goil_5F_lexique::kToken_STRING, -1, // Choice 8
C_Lexique_goil_5F_lexique::kToken_IDENTIFIER, -1, // Choice 9
C_Lexique_goil_5F_lexique::kToken_STRUCT, -1, // Choice 10
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 11
  -1,
// At index 232 : <select_implementation_5F_parser_8>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 237 : <select_implementation_5F_parser_9>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 245 : <select_implementation_5F_parser_10>
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 3
  -1,
// At index 252 : <select_implementation_5F_parser_11>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 257 : <select_implementation_5F_parser_12>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 262 : <select_implementation_5F_parser_13>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 2
  -1,
// At index 267 : <select_implementation_5F_parser_14>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 275 : <select_implementation_5F_parser_15>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 281 : <select_implementation_5F_parser_16>
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 286 : <select_implementation_5F_parser_17>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 294 : <select_implementation_5F_parser_18>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 3
  -1,
// At index 301 : <select_implementation_5F_parser_19>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 309 : <select_implementation_5F_parser_20>
C_Lexique_goil_5F_lexique::kToken__2D_, C_Lexique_goil_5F_lexique::kToken__2B_, C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 3
  -1,
// At index 319 : <select_implementation_5F_parser_21>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 327 : <select_implementation_5F_parser_22>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 3
  -1,
// At index 334 : <select_implementation_5F_parser_23>
C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 2
  -1,
// At index 340 : <select_implementation_5F_parser_24>
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 2
  -1,
// At index 345 : <select_implementation_5F_parser_25>
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 350 : <select_implementation_5F_parser_26>
C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 3
  -1,
// At index 357 : <select_implementation_5F_parser_27>
C_Lexique_goil_5F_lexique::kToken__2E__2E_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 363 : <select_implementation_5F_parser_28>
C_Lexique_goil_5F_lexique::kToken__2E__2E_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 369 : <select_implementation_5F_parser_29>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 374 : <select_implementation_5F_parser_30>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3D_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 381 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_goil_file_level_include [87] = {
0, // at 0 : <implementation_definition>
1, // at 1 : <start>
2, // at 2 : <file>
3, // at 3 : <sign>
4, // at 4 : <description>
5, // at 5 : <OIL_version>
6, // at 6 : <application_definition>
7, // at 7 : <object_definition_list>
8, // at 8 : <boolean>
9, // at 9 : <oil_declaration_list>
10, // at 10 : <oil_declaration>
11, // at 11 : <include_file_level>
12, // at 12 : <include_cpu_level>
13, // at 13 : <include_object_level>
14, // at 14 : <implementation_object_list>
15, // at 15 : <include_implementation_level>
16, // at 16 : <include_type_level>
17, // at 17 : <implementation_objects>
18, // at 18 : <implementation_list>
19, // at 19 : <implementation_type>
20, // at 20 : <struct_options>
21, // at 21 : <objref_option>
22, // at 22 : <string_options>
23, // at 23 : <boolean_options>
24, // at 24 : <enum_item>
25, // at 25 : <enum_options>
26, // at 26 : <number_options>
27, // at 27 : <type_options>
28, // at 28 : <with_auto>
29, // at 29 : <int_or_float>
30, // at 30 : <set_followup>
31, // at 31 : <range_content>
32, // at 32 : <range>
33, // at 33 : <multiple>
34, // at 34 : <identifier_or_attribute>
35, // at 35 : <identifier_or_enum_value>
36, // at 36 : <select_goil_5F_syntax_0>
46, // at 37 : <select_goil_5F_syntax_1>
55, // at 38 : <select_goil_5F_syntax_2>
62, // at 39 : <select_goil_5F_syntax_3>
69, // at 40 : <select_goil_5F_syntax_4>
77, // at 41 : <select_goil_5F_syntax_5>
82, // at 42 : <select_goil_5F_syntax_6>
90, // at 43 : <select_goil_5F_syntax_7>
95, // at 44 : <select_goil_5F_syntax_8>
111, // at 45 : <select_goil_5F_syntax_9>
117, // at 46 : <select_goil_5F_syntax_10>
122, // at 47 : <select_goil_5F_syntax_11>
128, // at 48 : <select_goil_5F_syntax_12>
133, // at 49 : <select_goil_5F_syntax_13>
138, // at 50 : <select_goil_5F_syntax_14>
143, // at 51 : <select_goil_5F_syntax_15>
148, // at 52 : <select_goil_5F_syntax_16>
153, // at 53 : <select_goil_5F_syntax_17>
158, // at 54 : <select_implementation_5F_parser_0>
166, // at 55 : <select_implementation_5F_parser_1>
171, // at 56 : <select_implementation_5F_parser_2>
176, // at 57 : <select_implementation_5F_parser_3>
181, // at 58 : <select_implementation_5F_parser_4>
186, // at 59 : <select_implementation_5F_parser_5>
191, // at 60 : <select_implementation_5F_parser_6>
209, // at 61 : <select_implementation_5F_parser_7>
232, // at 62 : <select_implementation_5F_parser_8>
237, // at 63 : <select_implementation_5F_parser_9>
245, // at 64 : <select_implementation_5F_parser_10>
252, // at 65 : <select_implementation_5F_parser_11>
257, // at 66 : <select_implementation_5F_parser_12>
262, // at 67 : <select_implementation_5F_parser_13>
267, // at 68 : <select_implementation_5F_parser_14>
275, // at 69 : <select_implementation_5F_parser_15>
281, // at 70 : <select_implementation_5F_parser_16>
286, // at 71 : <select_implementation_5F_parser_17>
294, // at 72 : <select_implementation_5F_parser_18>
301, // at 73 : <select_implementation_5F_parser_19>
309, // at 74 : <select_implementation_5F_parser_20>
319, // at 75 : <select_implementation_5F_parser_21>
327, // at 76 : <select_implementation_5F_parser_22>
334, // at 77 : <select_implementation_5F_parser_23>
340, // at 78 : <select_implementation_5F_parser_24>
345, // at 79 : <select_implementation_5F_parser_25>
350, // at 80 : <select_implementation_5F_parser_26>
357, // at 81 : <select_implementation_5F_parser_27>
363, // at 82 : <select_implementation_5F_parser_28>
369, // at 83 : <select_implementation_5F_parser_29>
374, // at 84 : <select_implementation_5F_parser_30>
381, // at 85 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'implementation_definition' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_definition_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_definition_i0_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_definition_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_definition_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'start' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_start_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_start_i0_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_start_ (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_start_i0_(inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'file' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_file_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_file_i1_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_file_ (GALGAS_implementation & parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_file_i1_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_goil_5F_file_5F_level_5F_include::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_goil_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_goil_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_goil_file_level_include, gProductionNames_goil_file_level_include, gProductionIndexes_goil_file_level_include,
                                    gFirstProductionIndexes_goil_file_level_include, gDecision_goil_file_level_include, gDecisionIndexes_goil_file_level_include, 448) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_implementation &  parameter_1,
                                GALGAS_applicationDefinition &  parameter_2,
                                GALGAS_string &  parameter_3,
                                const GALGAS_bool  parameter_4
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_goil_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_goil_file_level_include, gProductionNames_goil_file_level_include, gProductionIndexes_goil_file_level_include,
                                                      gFirstProductionIndexes_goil_file_level_include, gDecision_goil_file_level_include, gDecisionIndexes_goil_file_level_include, 448) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_goil_5F_file_5F_level_5F_include grammar ;
        grammar.nt_file_ (parameter_1, parameter_2, parameter_3, parameter_4, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_implementation &  parameter_1,
                                GALGAS_applicationDefinition &  parameter_2,
                                GALGAS_string &  parameter_3,
                                const GALGAS_bool  parameter_4
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_goil_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_goil_file_level_include, gProductionNames_goil_file_level_include, gProductionIndexes_goil_file_level_include,
                                                    gFirstProductionIndexes_goil_file_level_include, gDecision_goil_file_level_include, gDecisionIndexes_goil_file_level_include, 448) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_goil_5F_file_5F_level_5F_include grammar ;
      grammar.nt_file_ (parameter_1, parameter_2, parameter_3, parameter_4, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'sign' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_sign_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_sign_i2_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_sign_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_sign_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'description' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_description_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_description_i3_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_description_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_description_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'OIL_version' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_OIL_5F_version_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_OIL_5F_version_i4_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_OIL_5F_version_ (GALGAS_lstring & parameter_1,
                                GALGAS_lstring & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_OIL_5F_version_i4_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'application_definition' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_application_5F_definition_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_application_5F_definition_i5_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_application_5F_definition_ (const GALGAS_implementation parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_application_5F_definition_i5_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'object_definition_list' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_object_5F_definition_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_object_5F_definition_5F_list_i6_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_object_5F_definition_5F_list_ (const GALGAS_implementation parameter_1,
                                GALGAS_objectsMap & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_object_5F_definition_5F_list_i6_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'boolean' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_boolean_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_boolean_i7_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_boolean_ (GALGAS_lbool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_boolean_i7_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'oil_declaration_list' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_oil_5F_declaration_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_5F_list_i8_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_oil_5F_declaration_5F_list_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_5F_list_i8_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'oil_declaration' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_oil_5F_declaration_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_i9_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_oil_5F_declaration_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_i9_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_file_level' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_file_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_file_5F_level_i10_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_file_5F_level_ (GALGAS_implementation & parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_file_5F_level_i10_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_cpu_level' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_cpu_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_cpu_5F_level_i11_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_cpu_5F_level_ (const GALGAS_implementation parameter_1,
                                GALGAS_objectsMap & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_cpu_5F_level_i11_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'include_object_level' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_object_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_object_5F_level_i12_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_object_5F_level_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_object_5F_level_i12_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'implementation_object_list' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_object_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_object_5F_list_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'include_implementation_level' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_implementation_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_implementation_5F_level_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_type_level' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_type_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_type_5F_level_i3_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_include_5F_type_5F_level_ (GALGAS_implementationObjectMap & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_type_5F_level_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'implementation_objects' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_objects_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_objects_i4_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_objects_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_objects_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'implementation_list' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_list_i5_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_list_ (GALGAS_implementationObjectMap & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_list_i5_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'implementation_type' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_type_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_type_i6_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_implementation_5F_type_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_type_i6_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'struct_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_struct_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_struct_5F_options_i7_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_struct_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_struct_5F_options_i7_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'objref_option' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_objref_5F_option_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_objref_5F_option_i8_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_objref_5F_option_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                GALGAS_lstring parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_objref_5F_option_i8_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'string_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_string_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_string_5F_options_i9_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_string_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_string_5F_options_i9_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'boolean_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_boolean_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_boolean_5F_options_i10_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_boolean_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_boolean_5F_options_i10_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'enum_item' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_enum_5F_item_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_item_i11_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_enum_5F_item_ (GALGAS_enumValues & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_item_i11_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'enum_options' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_enum_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_options_i12_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_enum_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_options_i12_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'number_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_number_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_number_5F_options_i13_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_number_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                const GALGAS_dataType parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_number_5F_options_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'type_options' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_type_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_type_5F_options_i14_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_type_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                const GALGAS_dataType parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_type_5F_options_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'with_auto' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_with_5F_auto_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_with_5F_auto_i15_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_with_5F_auto_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_with_5F_auto_i15_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'int_or_float' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_int_5F_or_5F_float_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_int_5F_or_5F_float_i16_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_int_5F_or_5F_float_ (GALGAS_object_5F_t & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_int_5F_or_5F_float_i16_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'set_followup' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_set_5F_followup_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_set_5F_followup_i17_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_set_5F_followup_ (GALGAS_numberList & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_set_5F_followup_i17_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'range_content' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_range_5F_content_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_5F_content_i18_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_range_5F_content_ (GALGAS_attributeRange & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_5F_content_i18_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'range' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_range_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_i19_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_range_ (GALGAS_attributeRange & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_i19_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'multiple' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_multiple_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_multiple_i20_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_multiple_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_multiple_i20_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'identifier_or_attribute' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_identifier_5F_or_5F_attribute_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_identifier_5F_or_5F_attribute_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'identifier_or_enum_value' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_file_5F_level_5F_include::nt_identifier_5F_or_5F_enum_5F_value_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_parse(inLexique) ;
}

void cGrammar_goil_5F_file_5F_level_5F_include::nt_identifier_5F_or_5F_enum_5F_value_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_0' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_0 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_1' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_1 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_2' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_2 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_3' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_3 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_4' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_4 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_5' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_5 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_6' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_6 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_7' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_7 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_8' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_8 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_9' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_9 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_10' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_10 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_11' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_11 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_12' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_12 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_13' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_13 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_14' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_14 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_15' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_15 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_16' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_16 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_17' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_goil_5F_syntax_17 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_0' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_0 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_1' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_1 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_2' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_2 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_3' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_3 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_4' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_4 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_5' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_5 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_6' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_6 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_7' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_7 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_8' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_8 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_9' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_9 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_10' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_10 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_11' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_11 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_12' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_12 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_13' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_13 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_14' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_14 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_15' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_15 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_16' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_16 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_17' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_17 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_18' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_18 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_19' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_19 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_20' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_20 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_21' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_21 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_22' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_22 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_23' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_23 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_24' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_24 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_25' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_25 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_26' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_26 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_27' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_27 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_28' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_28 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_29' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_29 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_30' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_file_5F_level_5F_include::select_implementation_5F_parser_30 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_goil_implementation_level_include [] = {
// At index 0 : <implementation_definition>, in file 'implementation_parser.ggs', line 55
  TERMINAL (C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION) // $IMPLEMENTATION$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (14) // <implementation_object_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 7 : <start>, in file 'goil_syntax.ggs', line 38
, NONTERMINAL (5) // <OIL_version>
, NONTERMINAL (2) // <file>
, END_PRODUCTION
// At index 10 : <file>, in file 'goil_syntax.ggs', line 110
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 12 : <sign>, in file 'goil_syntax.ggs', line 126
, NONTERMINAL (37) // <select_goil_5F_syntax_1>
, END_PRODUCTION
// At index 14 : <description>, in file 'goil_syntax.ggs', line 139
, NONTERMINAL (38) // <select_goil_5F_syntax_2>
, END_PRODUCTION
// At index 16 : <OIL_version>, in file 'goil_syntax.ggs', line 163
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_OIL_5F_VERSION) // $OIL_VERSION$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 22 : <application_definition>, in file 'goil_syntax.ggs', line 170
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_CPU) // $CPU$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (7) // <object_definition_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 30 : <object_definition_list>, in file 'goil_syntax.ggs', line 184
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 32 : <boolean>, in file 'goil_syntax.ggs', line 230
, NONTERMINAL (41) // <select_goil_5F_syntax_5>
, END_PRODUCTION
// At index 34 : <oil_declaration_list>, in file 'goil_syntax.ggs', line 240
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 36 : <oil_declaration>, in file 'goil_syntax.ggs', line 252
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (43) // <select_goil_5F_syntax_7>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 40 : <include_file_level>, in file 'goil_syntax.ggs', line 425
, NONTERMINAL (48) // <select_goil_5F_syntax_12>
, NONTERMINAL (49) // <select_goil_5F_syntax_13>
, END_PRODUCTION
// At index 43 : <include_cpu_level>, in file 'goil_syntax.ggs', line 449
, NONTERMINAL (50) // <select_goil_5F_syntax_14>
, NONTERMINAL (51) // <select_goil_5F_syntax_15>
, END_PRODUCTION
// At index 46 : <include_object_level>, in file 'goil_syntax.ggs', line 473
, NONTERMINAL (52) // <select_goil_5F_syntax_16>
, NONTERMINAL (53) // <select_goil_5F_syntax_17>
, END_PRODUCTION
// At index 49 : <implementation_object_list>, in file 'implementation_parser.ggs', line 62
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 51 : <include_implementation_level>, in file 'implementation_parser.ggs', line 71
, NONTERMINAL (55) // <select_implementation_5F_parser_1>
, NONTERMINAL (56) // <select_implementation_5F_parser_2>
, END_PRODUCTION
// At index 54 : <include_type_level>, in file 'implementation_parser.ggs', line 92
, NONTERMINAL (57) // <select_implementation_5F_parser_3>
, NONTERMINAL (58) // <select_implementation_5F_parser_4>
, END_PRODUCTION
// At index 57 : <implementation_objects>, in file 'implementation_parser.ggs', line 135
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (59) // <select_implementation_5F_parser_5>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 63 : <implementation_list>, in file 'implementation_parser.ggs', line 183
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 65 : <implementation_type>, in file 'implementation_parser.ggs', line 212
, NONTERMINAL (61) // <select_implementation_5F_parser_7>
, END_PRODUCTION
// At index 67 : <struct_options>, in file 'implementation_parser.ggs', line 240
, NONTERMINAL (62) // <select_implementation_5F_parser_8>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 72 : <objref_option>, in file 'implementation_parser.ggs', line 257
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 76 : <string_options>, in file 'implementation_parser.ggs', line 275
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (63) // <select_implementation_5F_parser_9>
, END_PRODUCTION
// At index 81 : <boolean_options>, in file 'implementation_parser.ggs', line 307
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (65) // <select_implementation_5F_parser_11>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (68) // <select_implementation_5F_parser_14>
, END_PRODUCTION
// At index 87 : <enum_item>, in file 'implementation_parser.ggs', line 352
, NONTERMINAL (35) // <identifier_or_enum_value>
, NONTERMINAL (69) // <select_implementation_5F_parser_15>
, END_PRODUCTION
// At index 90 : <enum_options>, in file 'implementation_parser.ggs', line 365
, NONTERMINAL (28) // <with_auto>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, NONTERMINAL (24) // <enum_item>
, NONTERMINAL (70) // <select_implementation_5F_parser_16>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (71) // <select_implementation_5F_parser_17>
, END_PRODUCTION
// At index 99 : <number_options>, in file 'implementation_parser.ggs', line 407
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (32) // <range>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (73) // <select_implementation_5F_parser_19>
, END_PRODUCTION
// At index 105 : <type_options>, in file 'implementation_parser.ggs', line 441
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (75) // <select_implementation_5F_parser_21>
, END_PRODUCTION
// At index 110 : <with_auto>, in file 'implementation_parser.ggs', line 475
, NONTERMINAL (77) // <select_implementation_5F_parser_23>
, END_PRODUCTION
// At index 112 : <int_or_float>, in file 'implementation_parser.ggs', line 484
, NONTERMINAL (3) // <sign>
, NONTERMINAL (78) // <select_implementation_5F_parser_24>
, END_PRODUCTION
// At index 115 : <set_followup>, in file 'implementation_parser.ggs', line 502
, NONTERMINAL (79) // <select_implementation_5F_parser_25>
, END_PRODUCTION
// At index 117 : <range_content>, in file 'implementation_parser.ggs', line 514
, NONTERMINAL (3) // <sign>
, NONTERMINAL (80) // <select_implementation_5F_parser_26>
, END_PRODUCTION
// At index 120 : <range>, in file 'implementation_parser.ggs', line 554
, NONTERMINAL (83) // <select_implementation_5F_parser_29>
, END_PRODUCTION
// At index 122 : <multiple>, in file 'implementation_parser.ggs', line 564
, NONTERMINAL (84) // <select_implementation_5F_parser_30>
, END_PRODUCTION
// At index 124 : <identifier_or_attribute>, in file 'implementation_parser.ggs', line 574
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, END_PRODUCTION
// At index 126 : <identifier_or_enum_value>, in file 'implementation_parser.ggs', line 579
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 128 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, END_PRODUCTION
// At index 129 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (11) // <include_file_level>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 132 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (0) // <implementation_definition>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 135 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (6) // <application_definition>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 138 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2D_) // $-$
, END_PRODUCTION
// At index 140 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2B_) // $+$
, END_PRODUCTION
// At index 142 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, END_PRODUCTION
// At index 143 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
, END_PRODUCTION
// At index 144 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3A_) // $:$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (39) // <select_goil_5F_syntax_3>
, END_PRODUCTION
// At index 148 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
, END_PRODUCTION
// At index 149 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (39) // <select_goil_5F_syntax_3>
, END_PRODUCTION
// At index 152 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, END_PRODUCTION
// At index 153 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 162 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, NONTERMINAL (12) // <include_cpu_level>
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 165 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) // $TRUE$
, END_PRODUCTION
// At index 167 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) // $FALSE$
, END_PRODUCTION
// At index 169 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, END_PRODUCTION
// At index 170 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, NONTERMINAL (10) // <oil_declaration>
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 173 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, NONTERMINAL (13) // <include_object_level>
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 176 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (44) // <select_goil_5F_syntax_8>
, END_PRODUCTION
// At index 179 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 185 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (45) // <select_goil_5F_syntax_9>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 189 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, NONTERMINAL (3) // <sign>
, NONTERMINAL (46) // <select_goil_5F_syntax_10>
, END_PRODUCTION
// At index 192 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, NONTERMINAL (8) // <boolean>
, NONTERMINAL (47) // <select_goil_5F_syntax_11>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 196 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 199 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 202 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 206 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
, END_PRODUCTION
// At index 207 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 210 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 213 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 217 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
, END_PRODUCTION
// At index 218 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 220 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 222 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 224 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 226 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 228 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 230 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 232 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 234 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 236 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 238 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 240 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 242 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, END_PRODUCTION
// At index 243 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, NONTERMINAL (17) // <implementation_objects>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 247 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, NONTERMINAL (15) // <include_implementation_level>
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 250 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 252 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 254 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 256 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 258 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 260 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 262 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 264 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 266 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 269 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
, END_PRODUCTION
// At index 270 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, END_PRODUCTION
// At index 271 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, NONTERMINAL (19) // <implementation_type>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 275 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, NONTERMINAL (16) // <include_type_level>
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 278 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_33__32_) // $UINT32$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 281 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_33__32_) // $INT32$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 284 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_36__34_) // $UINT64$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 287 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_36__34_) // $INT64$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 290 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FLOAT) // $FLOAT$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 293 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_ENUM) // $ENUM$
, NONTERMINAL (25) // <enum_options>
, END_PRODUCTION
// At index 296 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_BOOLEAN) // $BOOLEAN$
, NONTERMINAL (23) // <boolean_options>
, END_PRODUCTION
// At index 299 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRING) // $STRING$
, NONTERMINAL (22) // <string_options>
, END_PRODUCTION
// At index 302 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_IDENTIFIER) // $IDENTIFIER$
, NONTERMINAL (27) // <type_options>
, END_PRODUCTION
// At index 305 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRUCT) // $STRUCT$
, NONTERMINAL (20) // <struct_options>
, END_PRODUCTION
// At index 308 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (21) // <objref_option>
, END_PRODUCTION
// At index 311 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 315 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
, END_PRODUCTION
// At index 316 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (64) // <select_implementation_5F_parser_10>
, END_PRODUCTION
// At index 319 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 321 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 324 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 327 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 330 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) // $TRUE$
, NONTERMINAL (66) // <select_implementation_5F_parser_12>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) // $FALSE$
, NONTERMINAL (67) // <select_implementation_5F_parser_13>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 338 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
, END_PRODUCTION
// At index 339 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 343 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
, END_PRODUCTION
// At index 344 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 348 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
, END_PRODUCTION
// At index 349 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (8) // <boolean>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 353 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 355 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 359 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
, END_PRODUCTION
// At index 360 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
, END_PRODUCTION
// At index 361 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (24) // <enum_item>
, NONTERMINAL (70) // <select_implementation_5F_parser_16>
, END_PRODUCTION
// At index 365 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (72) // <select_implementation_5F_parser_18>
, END_PRODUCTION
// At index 368 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 370 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 373 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 376 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 379 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (74) // <select_implementation_5F_parser_20>
, END_PRODUCTION
// At index 382 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 384 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 386 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 389 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 392 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (76) // <select_implementation_5F_parser_22>
, END_PRODUCTION
// At index 395 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 397 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 400 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 403 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 406 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO) // $WITH_AUTO$
, END_PRODUCTION
// At index 408 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
, END_PRODUCTION
// At index 409 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 412 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 415 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
, END_PRODUCTION
// At index 416 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (29) // <int_or_float>
, NONTERMINAL (79) // <select_implementation_5F_parser_25>
, END_PRODUCTION
// At index 420 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number) // $set_start_uint_number$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 423 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (81) // <select_implementation_5F_parser_27>
, END_PRODUCTION
// At index 426 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (82) // <select_implementation_5F_parser_28>
, END_PRODUCTION
// At index 429 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) // $..$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 432 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
, NONTERMINAL (30) // <set_followup>
, END_PRODUCTION
// At index 434 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) // $..$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 437 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
, NONTERMINAL (30) // <set_followup>
, END_PRODUCTION
// At index 439 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, NONTERMINAL (31) // <range_content>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 443 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
, END_PRODUCTION
// At index 444 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 447 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
, END_PRODUCTION
// At index 448 : <>, in file '.ggs', line 0
, NONTERMINAL (14) // <implementation_object_list>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_goil_implementation_level_include [159] = {
 {"<implementation_definition>", "implementation_parser", 0}, // at index 0
 {"<start>", "goil_syntax", 7}, // at index 1
 {"<file>", "goil_syntax", 10}, // at index 2
 {"<sign>", "goil_syntax", 12}, // at index 3
 {"<description>", "goil_syntax", 14}, // at index 4
 {"<OIL_version>", "goil_syntax", 16}, // at index 5
 {"<application_definition>", "goil_syntax", 22}, // at index 6
 {"<object_definition_list>", "goil_syntax", 30}, // at index 7
 {"<boolean>", "goil_syntax", 32}, // at index 8
 {"<oil_declaration_list>", "goil_syntax", 34}, // at index 9
 {"<oil_declaration>", "goil_syntax", 36}, // at index 10
 {"<include_file_level>", "goil_syntax", 40}, // at index 11
 {"<include_cpu_level>", "goil_syntax", 43}, // at index 12
 {"<include_object_level>", "goil_syntax", 46}, // at index 13
 {"<implementation_object_list>", "implementation_parser", 49}, // at index 14
 {"<include_implementation_level>", "implementation_parser", 51}, // at index 15
 {"<include_type_level>", "implementation_parser", 54}, // at index 16
 {"<implementation_objects>", "implementation_parser", 57}, // at index 17
 {"<implementation_list>", "implementation_parser", 63}, // at index 18
 {"<implementation_type>", "implementation_parser", 65}, // at index 19
 {"<struct_options>", "implementation_parser", 67}, // at index 20
 {"<objref_option>", "implementation_parser", 72}, // at index 21
 {"<string_options>", "implementation_parser", 76}, // at index 22
 {"<boolean_options>", "implementation_parser", 81}, // at index 23
 {"<enum_item>", "implementation_parser", 87}, // at index 24
 {"<enum_options>", "implementation_parser", 90}, // at index 25
 {"<number_options>", "implementation_parser", 99}, // at index 26
 {"<type_options>", "implementation_parser", 105}, // at index 27
 {"<with_auto>", "implementation_parser", 110}, // at index 28
 {"<int_or_float>", "implementation_parser", 112}, // at index 29
 {"<set_followup>", "implementation_parser", 115}, // at index 30
 {"<range_content>", "implementation_parser", 117}, // at index 31
 {"<range>", "implementation_parser", 120}, // at index 32
 {"<multiple>", "implementation_parser", 122}, // at index 33
 {"<identifier_or_attribute>", "implementation_parser", 124}, // at index 34
 {"<identifier_or_enum_value>", "implementation_parser", 126}, // at index 35
 {"<select_goil_5F_syntax_0>", "goil_syntax", 128}, // at index 36
 {"<select_goil_5F_syntax_0>", "goil_syntax", 129}, // at index 37
 {"<select_goil_5F_syntax_0>", "goil_syntax", 132}, // at index 38
 {"<select_goil_5F_syntax_0>", "goil_syntax", 135}, // at index 39
 {"<select_goil_5F_syntax_1>", "goil_syntax", 138}, // at index 40
 {"<select_goil_5F_syntax_1>", "goil_syntax", 140}, // at index 41
 {"<select_goil_5F_syntax_1>", "goil_syntax", 142}, // at index 42
 {"<select_goil_5F_syntax_2>", "goil_syntax", 143}, // at index 43
 {"<select_goil_5F_syntax_2>", "goil_syntax", 144}, // at index 44
 {"<select_goil_5F_syntax_3>", "goil_syntax", 148}, // at index 45
 {"<select_goil_5F_syntax_3>", "goil_syntax", 149}, // at index 46
 {"<select_goil_5F_syntax_4>", "goil_syntax", 152}, // at index 47
 {"<select_goil_5F_syntax_4>", "goil_syntax", 153}, // at index 48
 {"<select_goil_5F_syntax_4>", "goil_syntax", 162}, // at index 49
 {"<select_goil_5F_syntax_5>", "goil_syntax", 165}, // at index 50
 {"<select_goil_5F_syntax_5>", "goil_syntax", 167}, // at index 51
 {"<select_goil_5F_syntax_6>", "goil_syntax", 169}, // at index 52
 {"<select_goil_5F_syntax_6>", "goil_syntax", 170}, // at index 53
 {"<select_goil_5F_syntax_6>", "goil_syntax", 173}, // at index 54
 {"<select_goil_5F_syntax_7>", "goil_syntax", 176}, // at index 55
 {"<select_goil_5F_syntax_7>", "goil_syntax", 179}, // at index 56
 {"<select_goil_5F_syntax_8>", "goil_syntax", 185}, // at index 57
 {"<select_goil_5F_syntax_8>", "goil_syntax", 189}, // at index 58
 {"<select_goil_5F_syntax_8>", "goil_syntax", 192}, // at index 59
 {"<select_goil_5F_syntax_8>", "goil_syntax", 196}, // at index 60
 {"<select_goil_5F_syntax_8>", "goil_syntax", 199}, // at index 61
 {"<select_goil_5F_syntax_9>", "goil_syntax", 202}, // at index 62
 {"<select_goil_5F_syntax_9>", "goil_syntax", 206}, // at index 63
 {"<select_goil_5F_syntax_10>", "goil_syntax", 207}, // at index 64
 {"<select_goil_5F_syntax_10>", "goil_syntax", 210}, // at index 65
 {"<select_goil_5F_syntax_11>", "goil_syntax", 213}, // at index 66
 {"<select_goil_5F_syntax_11>", "goil_syntax", 217}, // at index 67
 {"<select_goil_5F_syntax_12>", "goil_syntax", 218}, // at index 68
 {"<select_goil_5F_syntax_12>", "goil_syntax", 220}, // at index 69
 {"<select_goil_5F_syntax_13>", "goil_syntax", 222}, // at index 70
 {"<select_goil_5F_syntax_13>", "goil_syntax", 224}, // at index 71
 {"<select_goil_5F_syntax_14>", "goil_syntax", 226}, // at index 72
 {"<select_goil_5F_syntax_14>", "goil_syntax", 228}, // at index 73
 {"<select_goil_5F_syntax_15>", "goil_syntax", 230}, // at index 74
 {"<select_goil_5F_syntax_15>", "goil_syntax", 232}, // at index 75
 {"<select_goil_5F_syntax_16>", "goil_syntax", 234}, // at index 76
 {"<select_goil_5F_syntax_16>", "goil_syntax", 236}, // at index 77
 {"<select_goil_5F_syntax_17>", "goil_syntax", 238}, // at index 78
 {"<select_goil_5F_syntax_17>", "goil_syntax", 240}, // at index 79
 {"<select_implementation_5F_parser_0>", "implementation_parser", 242}, // at index 80
 {"<select_implementation_5F_parser_0>", "implementation_parser", 243}, // at index 81
 {"<select_implementation_5F_parser_0>", "implementation_parser", 247}, // at index 82
 {"<select_implementation_5F_parser_1>", "implementation_parser", 250}, // at index 83
 {"<select_implementation_5F_parser_1>", "implementation_parser", 252}, // at index 84
 {"<select_implementation_5F_parser_2>", "implementation_parser", 254}, // at index 85
 {"<select_implementation_5F_parser_2>", "implementation_parser", 256}, // at index 86
 {"<select_implementation_5F_parser_3>", "implementation_parser", 258}, // at index 87
 {"<select_implementation_5F_parser_3>", "implementation_parser", 260}, // at index 88
 {"<select_implementation_5F_parser_4>", "implementation_parser", 262}, // at index 89
 {"<select_implementation_5F_parser_4>", "implementation_parser", 264}, // at index 90
 {"<select_implementation_5F_parser_5>", "implementation_parser", 266}, // at index 91
 {"<select_implementation_5F_parser_5>", "implementation_parser", 269}, // at index 92
 {"<select_implementation_5F_parser_6>", "implementation_parser", 270}, // at index 93
 {"<select_implementation_5F_parser_6>", "implementation_parser", 271}, // at index 94
 {"<select_implementation_5F_parser_6>", "implementation_parser", 275}, // at index 95
 {"<select_implementation_5F_parser_7>", "implementation_parser", 278}, // at index 96
 {"<select_implementation_5F_parser_7>", "implementation_parser", 281}, // at index 97
 {"<select_implementation_5F_parser_7>", "implementation_parser", 284}, // at index 98
 {"<select_implementation_5F_parser_7>", "implementation_parser", 287}, // at index 99
 {"<select_implementation_5F_parser_7>", "implementation_parser", 290}, // at index 100
 {"<select_implementation_5F_parser_7>", "implementation_parser", 293}, // at index 101
 {"<select_implementation_5F_parser_7>", "implementation_parser", 296}, // at index 102
 {"<select_implementation_5F_parser_7>", "implementation_parser", 299}, // at index 103
 {"<select_implementation_5F_parser_7>", "implementation_parser", 302}, // at index 104
 {"<select_implementation_5F_parser_7>", "implementation_parser", 305}, // at index 105
 {"<select_implementation_5F_parser_7>", "implementation_parser", 308}, // at index 106
 {"<select_implementation_5F_parser_8>", "implementation_parser", 311}, // at index 107
 {"<select_implementation_5F_parser_8>", "implementation_parser", 315}, // at index 108
 {"<select_implementation_5F_parser_9>", "implementation_parser", 316}, // at index 109
 {"<select_implementation_5F_parser_9>", "implementation_parser", 319}, // at index 110
 {"<select_implementation_5F_parser_10>", "implementation_parser", 321}, // at index 111
 {"<select_implementation_5F_parser_10>", "implementation_parser", 324}, // at index 112
 {"<select_implementation_5F_parser_10>", "implementation_parser", 327}, // at index 113
 {"<select_implementation_5F_parser_11>", "implementation_parser", 330}, // at index 114
 {"<select_implementation_5F_parser_11>", "implementation_parser", 338}, // at index 115
 {"<select_implementation_5F_parser_12>", "implementation_parser", 339}, // at index 116
 {"<select_implementation_5F_parser_12>", "implementation_parser", 343}, // at index 117
 {"<select_implementation_5F_parser_13>", "implementation_parser", 344}, // at index 118
 {"<select_implementation_5F_parser_13>", "implementation_parser", 348}, // at index 119
 {"<select_implementation_5F_parser_14>", "implementation_parser", 349}, // at index 120
 {"<select_implementation_5F_parser_14>", "implementation_parser", 353}, // at index 121
 {"<select_implementation_5F_parser_15>", "implementation_parser", 355}, // at index 122
 {"<select_implementation_5F_parser_15>", "implementation_parser", 359}, // at index 123
 {"<select_implementation_5F_parser_16>", "implementation_parser", 360}, // at index 124
 {"<select_implementation_5F_parser_16>", "implementation_parser", 361}, // at index 125
 {"<select_implementation_5F_parser_17>", "implementation_parser", 365}, // at index 126
 {"<select_implementation_5F_parser_17>", "implementation_parser", 368}, // at index 127
 {"<select_implementation_5F_parser_18>", "implementation_parser", 370}, // at index 128
 {"<select_implementation_5F_parser_18>", "implementation_parser", 373}, // at index 129
 {"<select_implementation_5F_parser_18>", "implementation_parser", 376}, // at index 130
 {"<select_implementation_5F_parser_19>", "implementation_parser", 379}, // at index 131
 {"<select_implementation_5F_parser_19>", "implementation_parser", 382}, // at index 132
 {"<select_implementation_5F_parser_20>", "implementation_parser", 384}, // at index 133
 {"<select_implementation_5F_parser_20>", "implementation_parser", 386}, // at index 134
 {"<select_implementation_5F_parser_20>", "implementation_parser", 389}, // at index 135
 {"<select_implementation_5F_parser_21>", "implementation_parser", 392}, // at index 136
 {"<select_implementation_5F_parser_21>", "implementation_parser", 395}, // at index 137
 {"<select_implementation_5F_parser_22>", "implementation_parser", 397}, // at index 138
 {"<select_implementation_5F_parser_22>", "implementation_parser", 400}, // at index 139
 {"<select_implementation_5F_parser_22>", "implementation_parser", 403}, // at index 140
 {"<select_implementation_5F_parser_23>", "implementation_parser", 406}, // at index 141
 {"<select_implementation_5F_parser_23>", "implementation_parser", 408}, // at index 142
 {"<select_implementation_5F_parser_24>", "implementation_parser", 409}, // at index 143
 {"<select_implementation_5F_parser_24>", "implementation_parser", 412}, // at index 144
 {"<select_implementation_5F_parser_25>", "implementation_parser", 415}, // at index 145
 {"<select_implementation_5F_parser_25>", "implementation_parser", 416}, // at index 146
 {"<select_implementation_5F_parser_26>", "implementation_parser", 420}, // at index 147
 {"<select_implementation_5F_parser_26>", "implementation_parser", 423}, // at index 148
 {"<select_implementation_5F_parser_26>", "implementation_parser", 426}, // at index 149
 {"<select_implementation_5F_parser_27>", "implementation_parser", 429}, // at index 150
 {"<select_implementation_5F_parser_27>", "implementation_parser", 432}, // at index 151
 {"<select_implementation_5F_parser_28>", "implementation_parser", 434}, // at index 152
 {"<select_implementation_5F_parser_28>", "implementation_parser", 437}, // at index 153
 {"<select_implementation_5F_parser_29>", "implementation_parser", 439}, // at index 154
 {"<select_implementation_5F_parser_29>", "implementation_parser", 443}, // at index 155
 {"<select_implementation_5F_parser_30>", "implementation_parser", 444}, // at index 156
 {"<select_implementation_5F_parser_30>", "implementation_parser", 447}, // at index 157
 {"<>", "", 448} // at index 158
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_goil_implementation_level_include [159] = {
0, // index 0 : <implementation_definition>, in file 'implementation_parser.ggs', line 55
7, // index 1 : <start>, in file 'goil_syntax.ggs', line 38
10, // index 2 : <file>, in file 'goil_syntax.ggs', line 110
12, // index 3 : <sign>, in file 'goil_syntax.ggs', line 126
14, // index 4 : <description>, in file 'goil_syntax.ggs', line 139
16, // index 5 : <OIL_version>, in file 'goil_syntax.ggs', line 163
22, // index 6 : <application_definition>, in file 'goil_syntax.ggs', line 170
30, // index 7 : <object_definition_list>, in file 'goil_syntax.ggs', line 184
32, // index 8 : <boolean>, in file 'goil_syntax.ggs', line 230
34, // index 9 : <oil_declaration_list>, in file 'goil_syntax.ggs', line 240
36, // index 10 : <oil_declaration>, in file 'goil_syntax.ggs', line 252
40, // index 11 : <include_file_level>, in file 'goil_syntax.ggs', line 425
43, // index 12 : <include_cpu_level>, in file 'goil_syntax.ggs', line 449
46, // index 13 : <include_object_level>, in file 'goil_syntax.ggs', line 473
49, // index 14 : <implementation_object_list>, in file 'implementation_parser.ggs', line 62
51, // index 15 : <include_implementation_level>, in file 'implementation_parser.ggs', line 71
54, // index 16 : <include_type_level>, in file 'implementation_parser.ggs', line 92
57, // index 17 : <implementation_objects>, in file 'implementation_parser.ggs', line 135
63, // index 18 : <implementation_list>, in file 'implementation_parser.ggs', line 183
65, // index 19 : <implementation_type>, in file 'implementation_parser.ggs', line 212
67, // index 20 : <struct_options>, in file 'implementation_parser.ggs', line 240
72, // index 21 : <objref_option>, in file 'implementation_parser.ggs', line 257
76, // index 22 : <string_options>, in file 'implementation_parser.ggs', line 275
81, // index 23 : <boolean_options>, in file 'implementation_parser.ggs', line 307
87, // index 24 : <enum_item>, in file 'implementation_parser.ggs', line 352
90, // index 25 : <enum_options>, in file 'implementation_parser.ggs', line 365
99, // index 26 : <number_options>, in file 'implementation_parser.ggs', line 407
105, // index 27 : <type_options>, in file 'implementation_parser.ggs', line 441
110, // index 28 : <with_auto>, in file 'implementation_parser.ggs', line 475
112, // index 29 : <int_or_float>, in file 'implementation_parser.ggs', line 484
115, // index 30 : <set_followup>, in file 'implementation_parser.ggs', line 502
117, // index 31 : <range_content>, in file 'implementation_parser.ggs', line 514
120, // index 32 : <range>, in file 'implementation_parser.ggs', line 554
122, // index 33 : <multiple>, in file 'implementation_parser.ggs', line 564
124, // index 34 : <identifier_or_attribute>, in file 'implementation_parser.ggs', line 574
126, // index 35 : <identifier_or_enum_value>, in file 'implementation_parser.ggs', line 579
128, // index 36 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
129, // index 37 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
132, // index 38 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
135, // index 39 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
138, // index 40 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
140, // index 41 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
142, // index 42 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
143, // index 43 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
144, // index 44 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
148, // index 45 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
149, // index 46 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
152, // index 47 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
153, // index 48 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
162, // index 49 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
165, // index 50 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
167, // index 51 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
169, // index 52 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
170, // index 53 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
173, // index 54 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
176, // index 55 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
179, // index 56 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
185, // index 57 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
189, // index 58 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
192, // index 59 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
196, // index 60 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
199, // index 61 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
202, // index 62 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
206, // index 63 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
207, // index 64 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
210, // index 65 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
213, // index 66 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
217, // index 67 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
218, // index 68 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
220, // index 69 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
222, // index 70 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
224, // index 71 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
226, // index 72 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
228, // index 73 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
230, // index 74 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
232, // index 75 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
234, // index 76 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
236, // index 77 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
238, // index 78 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
240, // index 79 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
242, // index 80 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
243, // index 81 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
247, // index 82 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
250, // index 83 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
252, // index 84 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
254, // index 85 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
256, // index 86 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
258, // index 87 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
260, // index 88 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
262, // index 89 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
264, // index 90 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
266, // index 91 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
269, // index 92 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
270, // index 93 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
271, // index 94 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
275, // index 95 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
278, // index 96 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
281, // index 97 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
284, // index 98 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
287, // index 99 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
290, // index 100 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
293, // index 101 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
296, // index 102 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
299, // index 103 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
302, // index 104 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
305, // index 105 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
308, // index 106 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
311, // index 107 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
315, // index 108 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
316, // index 109 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
319, // index 110 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
321, // index 111 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
324, // index 112 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
327, // index 113 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
330, // index 114 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
338, // index 115 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
339, // index 116 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
343, // index 117 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
344, // index 118 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
348, // index 119 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
349, // index 120 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
353, // index 121 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
355, // index 122 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
359, // index 123 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
360, // index 124 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
361, // index 125 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
365, // index 126 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
368, // index 127 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
370, // index 128 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
373, // index 129 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
376, // index 130 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
379, // index 131 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
382, // index 132 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
384, // index 133 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
386, // index 134 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
389, // index 135 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
392, // index 136 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
395, // index 137 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
397, // index 138 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
400, // index 139 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
403, // index 140 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
406, // index 141 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
408, // index 142 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
409, // index 143 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
412, // index 144 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
415, // index 145 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
416, // index 146 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
420, // index 147 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
423, // index 148 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
426, // index 149 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
429, // index 150 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
432, // index 151 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
434, // index 152 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
437, // index 153 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
439, // index 154 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
443, // index 155 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
444, // index 156 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
447, // index 157 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
448 // index 158 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_goil_implementation_level_include [87] = {
0, // at 0 : <implementation_definition>
1, // at 1 : <start>
2, // at 2 : <file>
3, // at 3 : <sign>
4, // at 4 : <description>
5, // at 5 : <OIL_version>
6, // at 6 : <application_definition>
7, // at 7 : <object_definition_list>
8, // at 8 : <boolean>
9, // at 9 : <oil_declaration_list>
10, // at 10 : <oil_declaration>
11, // at 11 : <include_file_level>
12, // at 12 : <include_cpu_level>
13, // at 13 : <include_object_level>
14, // at 14 : <implementation_object_list>
15, // at 15 : <include_implementation_level>
16, // at 16 : <include_type_level>
17, // at 17 : <implementation_objects>
18, // at 18 : <implementation_list>
19, // at 19 : <implementation_type>
20, // at 20 : <struct_options>
21, // at 21 : <objref_option>
22, // at 22 : <string_options>
23, // at 23 : <boolean_options>
24, // at 24 : <enum_item>
25, // at 25 : <enum_options>
26, // at 26 : <number_options>
27, // at 27 : <type_options>
28, // at 28 : <with_auto>
29, // at 29 : <int_or_float>
30, // at 30 : <set_followup>
31, // at 31 : <range_content>
32, // at 32 : <range>
33, // at 33 : <multiple>
34, // at 34 : <identifier_or_attribute>
35, // at 35 : <identifier_or_enum_value>
36, // at 36 : <select_goil_5F_syntax_0>
40, // at 37 : <select_goil_5F_syntax_1>
43, // at 38 : <select_goil_5F_syntax_2>
45, // at 39 : <select_goil_5F_syntax_3>
47, // at 40 : <select_goil_5F_syntax_4>
50, // at 41 : <select_goil_5F_syntax_5>
52, // at 42 : <select_goil_5F_syntax_6>
55, // at 43 : <select_goil_5F_syntax_7>
57, // at 44 : <select_goil_5F_syntax_8>
62, // at 45 : <select_goil_5F_syntax_9>
64, // at 46 : <select_goil_5F_syntax_10>
66, // at 47 : <select_goil_5F_syntax_11>
68, // at 48 : <select_goil_5F_syntax_12>
70, // at 49 : <select_goil_5F_syntax_13>
72, // at 50 : <select_goil_5F_syntax_14>
74, // at 51 : <select_goil_5F_syntax_15>
76, // at 52 : <select_goil_5F_syntax_16>
78, // at 53 : <select_goil_5F_syntax_17>
80, // at 54 : <select_implementation_5F_parser_0>
83, // at 55 : <select_implementation_5F_parser_1>
85, // at 56 : <select_implementation_5F_parser_2>
87, // at 57 : <select_implementation_5F_parser_3>
89, // at 58 : <select_implementation_5F_parser_4>
91, // at 59 : <select_implementation_5F_parser_5>
93, // at 60 : <select_implementation_5F_parser_6>
96, // at 61 : <select_implementation_5F_parser_7>
107, // at 62 : <select_implementation_5F_parser_8>
109, // at 63 : <select_implementation_5F_parser_9>
111, // at 64 : <select_implementation_5F_parser_10>
114, // at 65 : <select_implementation_5F_parser_11>
116, // at 66 : <select_implementation_5F_parser_12>
118, // at 67 : <select_implementation_5F_parser_13>
120, // at 68 : <select_implementation_5F_parser_14>
122, // at 69 : <select_implementation_5F_parser_15>
124, // at 70 : <select_implementation_5F_parser_16>
126, // at 71 : <select_implementation_5F_parser_17>
128, // at 72 : <select_implementation_5F_parser_18>
131, // at 73 : <select_implementation_5F_parser_19>
133, // at 74 : <select_implementation_5F_parser_20>
136, // at 75 : <select_implementation_5F_parser_21>
138, // at 76 : <select_implementation_5F_parser_22>
141, // at 77 : <select_implementation_5F_parser_23>
143, // at 78 : <select_implementation_5F_parser_24>
145, // at 79 : <select_implementation_5F_parser_25>
147, // at 80 : <select_implementation_5F_parser_26>
150, // at 81 : <select_implementation_5F_parser_27>
152, // at 82 : <select_implementation_5F_parser_28>
154, // at 83 : <select_implementation_5F_parser_29>
156, // at 84 : <select_implementation_5F_parser_30>
158, // at 85 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_goil_implementation_level_include [] = {
// At index 0 : <implementation_definition> only one production, no choice
  -1,
// At index 1 : <start> only one production, no choice
  -1,
// At index 2 : <file> only one production, no choice
  -1,
// At index 3 : <sign> only one production, no choice
  -1,
// At index 4 : <description> only one production, no choice
  -1,
// At index 5 : <OIL_version> only one production, no choice
  -1,
// At index 6 : <application_definition> only one production, no choice
  -1,
// At index 7 : <object_definition_list> only one production, no choice
  -1,
// At index 8 : <boolean> only one production, no choice
  -1,
// At index 9 : <oil_declaration_list> only one production, no choice
  -1,
// At index 10 : <oil_declaration> only one production, no choice
  -1,
// At index 11 : <include_file_level> only one production, no choice
  -1,
// At index 12 : <include_cpu_level> only one production, no choice
  -1,
// At index 13 : <include_object_level> only one production, no choice
  -1,
// At index 14 : <implementation_object_list> only one production, no choice
  -1,
// At index 15 : <include_implementation_level> only one production, no choice
  -1,
// At index 16 : <include_type_level> only one production, no choice
  -1,
// At index 17 : <implementation_objects> only one production, no choice
  -1,
// At index 18 : <implementation_list> only one production, no choice
  -1,
// At index 19 : <implementation_type> only one production, no choice
  -1,
// At index 20 : <struct_options> only one production, no choice
  -1,
// At index 21 : <objref_option> only one production, no choice
  -1,
// At index 22 : <string_options> only one production, no choice
  -1,
// At index 23 : <boolean_options> only one production, no choice
  -1,
// At index 24 : <enum_item> only one production, no choice
  -1,
// At index 25 : <enum_options> only one production, no choice
  -1,
// At index 26 : <number_options> only one production, no choice
  -1,
// At index 27 : <type_options> only one production, no choice
  -1,
// At index 28 : <with_auto> only one production, no choice
  -1,
// At index 29 : <int_or_float> only one production, no choice
  -1,
// At index 30 : <set_followup> only one production, no choice
  -1,
// At index 31 : <range_content> only one production, no choice
  -1,
// At index 32 : <range> only one production, no choice
  -1,
// At index 33 : <multiple> only one production, no choice
  -1,
// At index 34 : <identifier_or_attribute> only one production, no choice
  -1,
// At index 35 : <identifier_or_enum_value> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 36 : <select_goil_5F_syntax_0>
-1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_CPU, -1, // Choice 4
  -1,
// At index 45 : <select_goil_5F_syntax_1>
C_Lexique_goil_5F_lexique::kToken__2D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2B_, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 3
  -1,
// At index 54 : <select_goil_5F_syntax_2>
C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, -1, // Choice 2
  -1,
// At index 61 : <select_goil_5F_syntax_3>
C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 68 : <select_goil_5F_syntax_4>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 76 : <select_goil_5F_syntax_5>
C_Lexique_goil_5F_lexique::kToken_TRUE, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_FALSE, -1, // Choice 2
  -1,
// At index 81 : <select_goil_5F_syntax_6>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 89 : <select_goil_5F_syntax_7>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 94 : <select_goil_5F_syntax_8>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2D_, C_Lexique_goil_5F_lexique::kToken__2B_, C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_TRUE, C_Lexique_goil_5F_lexique::kToken_FALSE, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 4
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 5
  -1,
// At index 110 : <select_goil_5F_syntax_9>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 116 : <select_goil_5F_syntax_10>
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 2
  -1,
// At index 121 : <select_goil_5F_syntax_11>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 127 : <select_goil_5F_syntax_12>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 132 : <select_goil_5F_syntax_13>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 137 : <select_goil_5F_syntax_14>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 142 : <select_goil_5F_syntax_15>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 147 : <select_goil_5F_syntax_16>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 152 : <select_goil_5F_syntax_17>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 157 : <select_implementation_5F_parser_0>
C_Lexique_goil_5F_lexique::kToken__7D_, C_Lexique_goil_5F_lexique::kToken_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 166 : <select_implementation_5F_parser_1>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 171 : <select_implementation_5F_parser_2>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 176 : <select_implementation_5F_parser_3>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 181 : <select_implementation_5F_parser_4>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 186 : <select_implementation_5F_parser_5>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 2
  -1,
// At index 191 : <select_implementation_5F_parser_6>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, C_Lexique_goil_5F_lexique::kToken_UINT_33__32_, C_Lexique_goil_5F_lexique::kToken_INT_33__32_, C_Lexique_goil_5F_lexique::kToken_UINT_36__34_, C_Lexique_goil_5F_lexique::kToken_INT_36__34_, C_Lexique_goil_5F_lexique::kToken_FLOAT, C_Lexique_goil_5F_lexique::kToken_ENUM, C_Lexique_goil_5F_lexique::kToken_BOOLEAN, C_Lexique_goil_5F_lexique::kToken_STRING, C_Lexique_goil_5F_lexique::kToken_IDENTIFIER, C_Lexique_goil_5F_lexique::kToken_STRUCT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 209 : <select_implementation_5F_parser_7>
C_Lexique_goil_5F_lexique::kToken_UINT_33__32_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_INT_33__32_, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_UINT_36__34_, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_INT_36__34_, -1, // Choice 4
C_Lexique_goil_5F_lexique::kToken_FLOAT, -1, // Choice 5
C_Lexique_goil_5F_lexique::kToken_ENUM, -1, // Choice 6
C_Lexique_goil_5F_lexique::kToken_BOOLEAN, -1, // Choice 7
C_Lexique_goil_5F_lexique::kToken_STRING, -1, // Choice 8
C_Lexique_goil_5F_lexique::kToken_IDENTIFIER, -1, // Choice 9
C_Lexique_goil_5F_lexique::kToken_STRUCT, -1, // Choice 10
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 11
  -1,
// At index 232 : <select_implementation_5F_parser_8>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 237 : <select_implementation_5F_parser_9>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 245 : <select_implementation_5F_parser_10>
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 3
  -1,
// At index 252 : <select_implementation_5F_parser_11>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 257 : <select_implementation_5F_parser_12>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 262 : <select_implementation_5F_parser_13>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 2
  -1,
// At index 267 : <select_implementation_5F_parser_14>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 275 : <select_implementation_5F_parser_15>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 281 : <select_implementation_5F_parser_16>
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 286 : <select_implementation_5F_parser_17>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 294 : <select_implementation_5F_parser_18>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 3
  -1,
// At index 301 : <select_implementation_5F_parser_19>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 309 : <select_implementation_5F_parser_20>
C_Lexique_goil_5F_lexique::kToken__2D_, C_Lexique_goil_5F_lexique::kToken__2B_, C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 3
  -1,
// At index 319 : <select_implementation_5F_parser_21>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 327 : <select_implementation_5F_parser_22>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 3
  -1,
// At index 334 : <select_implementation_5F_parser_23>
C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 2
  -1,
// At index 340 : <select_implementation_5F_parser_24>
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 2
  -1,
// At index 345 : <select_implementation_5F_parser_25>
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 350 : <select_implementation_5F_parser_26>
C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 3
  -1,
// At index 357 : <select_implementation_5F_parser_27>
C_Lexique_goil_5F_lexique::kToken__2E__2E_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 363 : <select_implementation_5F_parser_28>
C_Lexique_goil_5F_lexique::kToken__2E__2E_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 369 : <select_implementation_5F_parser_29>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 374 : <select_implementation_5F_parser_30>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3D_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 381 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_goil_implementation_level_include [87] = {
0, // at 0 : <implementation_definition>
1, // at 1 : <start>
2, // at 2 : <file>
3, // at 3 : <sign>
4, // at 4 : <description>
5, // at 5 : <OIL_version>
6, // at 6 : <application_definition>
7, // at 7 : <object_definition_list>
8, // at 8 : <boolean>
9, // at 9 : <oil_declaration_list>
10, // at 10 : <oil_declaration>
11, // at 11 : <include_file_level>
12, // at 12 : <include_cpu_level>
13, // at 13 : <include_object_level>
14, // at 14 : <implementation_object_list>
15, // at 15 : <include_implementation_level>
16, // at 16 : <include_type_level>
17, // at 17 : <implementation_objects>
18, // at 18 : <implementation_list>
19, // at 19 : <implementation_type>
20, // at 20 : <struct_options>
21, // at 21 : <objref_option>
22, // at 22 : <string_options>
23, // at 23 : <boolean_options>
24, // at 24 : <enum_item>
25, // at 25 : <enum_options>
26, // at 26 : <number_options>
27, // at 27 : <type_options>
28, // at 28 : <with_auto>
29, // at 29 : <int_or_float>
30, // at 30 : <set_followup>
31, // at 31 : <range_content>
32, // at 32 : <range>
33, // at 33 : <multiple>
34, // at 34 : <identifier_or_attribute>
35, // at 35 : <identifier_or_enum_value>
36, // at 36 : <select_goil_5F_syntax_0>
45, // at 37 : <select_goil_5F_syntax_1>
54, // at 38 : <select_goil_5F_syntax_2>
61, // at 39 : <select_goil_5F_syntax_3>
68, // at 40 : <select_goil_5F_syntax_4>
76, // at 41 : <select_goil_5F_syntax_5>
81, // at 42 : <select_goil_5F_syntax_6>
89, // at 43 : <select_goil_5F_syntax_7>
94, // at 44 : <select_goil_5F_syntax_8>
110, // at 45 : <select_goil_5F_syntax_9>
116, // at 46 : <select_goil_5F_syntax_10>
121, // at 47 : <select_goil_5F_syntax_11>
127, // at 48 : <select_goil_5F_syntax_12>
132, // at 49 : <select_goil_5F_syntax_13>
137, // at 50 : <select_goil_5F_syntax_14>
142, // at 51 : <select_goil_5F_syntax_15>
147, // at 52 : <select_goil_5F_syntax_16>
152, // at 53 : <select_goil_5F_syntax_17>
157, // at 54 : <select_implementation_5F_parser_0>
166, // at 55 : <select_implementation_5F_parser_1>
171, // at 56 : <select_implementation_5F_parser_2>
176, // at 57 : <select_implementation_5F_parser_3>
181, // at 58 : <select_implementation_5F_parser_4>
186, // at 59 : <select_implementation_5F_parser_5>
191, // at 60 : <select_implementation_5F_parser_6>
209, // at 61 : <select_implementation_5F_parser_7>
232, // at 62 : <select_implementation_5F_parser_8>
237, // at 63 : <select_implementation_5F_parser_9>
245, // at 64 : <select_implementation_5F_parser_10>
252, // at 65 : <select_implementation_5F_parser_11>
257, // at 66 : <select_implementation_5F_parser_12>
262, // at 67 : <select_implementation_5F_parser_13>
267, // at 68 : <select_implementation_5F_parser_14>
275, // at 69 : <select_implementation_5F_parser_15>
281, // at 70 : <select_implementation_5F_parser_16>
286, // at 71 : <select_implementation_5F_parser_17>
294, // at 72 : <select_implementation_5F_parser_18>
301, // at 73 : <select_implementation_5F_parser_19>
309, // at 74 : <select_implementation_5F_parser_20>
319, // at 75 : <select_implementation_5F_parser_21>
327, // at 76 : <select_implementation_5F_parser_22>
334, // at 77 : <select_implementation_5F_parser_23>
340, // at 78 : <select_implementation_5F_parser_24>
345, // at 79 : <select_implementation_5F_parser_25>
350, // at 80 : <select_implementation_5F_parser_26>
357, // at 81 : <select_implementation_5F_parser_27>
363, // at 82 : <select_implementation_5F_parser_28>
369, // at 83 : <select_implementation_5F_parser_29>
374, // at 84 : <select_implementation_5F_parser_30>
381, // at 85 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'implementation_definition' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_definition_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_definition_i0_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_definition_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_definition_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'start' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_start_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_start_i0_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_start_ (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_start_i0_(inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'file' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_file_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_file_i1_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_file_ (GALGAS_implementation & parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_file_i1_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'sign' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_sign_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_sign_i2_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_sign_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_sign_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'description' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_description_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_description_i3_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_description_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_description_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'OIL_version' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_OIL_5F_version_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_OIL_5F_version_i4_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_OIL_5F_version_ (GALGAS_lstring & parameter_1,
                                GALGAS_lstring & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_OIL_5F_version_i4_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'application_definition' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_application_5F_definition_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_application_5F_definition_i5_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_application_5F_definition_ (const GALGAS_implementation parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_application_5F_definition_i5_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'object_definition_list' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_object_5F_definition_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_object_5F_definition_5F_list_i6_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_object_5F_definition_5F_list_ (const GALGAS_implementation parameter_1,
                                GALGAS_objectsMap & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_object_5F_definition_5F_list_i6_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'boolean' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_boolean_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_boolean_i7_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_boolean_ (GALGAS_lbool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_boolean_i7_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'oil_declaration_list' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_oil_5F_declaration_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_5F_list_i8_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_oil_5F_declaration_5F_list_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_5F_list_i8_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'oil_declaration' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_oil_5F_declaration_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_i9_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_oil_5F_declaration_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_i9_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_file_level' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_file_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_file_5F_level_i10_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_file_5F_level_ (GALGAS_implementation & parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_file_5F_level_i10_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_cpu_level' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_cpu_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_cpu_5F_level_i11_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_cpu_5F_level_ (const GALGAS_implementation parameter_1,
                                GALGAS_objectsMap & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_cpu_5F_level_i11_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'include_object_level' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_object_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_object_5F_level_i12_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_object_5F_level_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_object_5F_level_i12_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'implementation_object_list' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_object_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_object_5F_list_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_(parameter_1, inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_goil_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_goil_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_goil_implementation_level_include, gProductionNames_goil_implementation_level_include, gProductionIndexes_goil_implementation_level_include,
                                    gFirstProductionIndexes_goil_implementation_level_include, gDecision_goil_implementation_level_include, gDecisionIndexes_goil_implementation_level_include, 448) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_implementation &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_goil_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_goil_implementation_level_include, gProductionNames_goil_implementation_level_include, gProductionIndexes_goil_implementation_level_include,
                                                      gFirstProductionIndexes_goil_implementation_level_include, gDecision_goil_implementation_level_include, gDecisionIndexes_goil_implementation_level_include, 448) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_goil_5F_implementation_5F_level_5F_include grammar ;
        grammar.nt_implementation_5F_object_5F_list_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_implementation &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_goil_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_goil_implementation_level_include, gProductionNames_goil_implementation_level_include, gProductionIndexes_goil_implementation_level_include,
                                                    gFirstProductionIndexes_goil_implementation_level_include, gDecision_goil_implementation_level_include, gDecisionIndexes_goil_implementation_level_include, 448) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_goil_5F_implementation_5F_level_5F_include grammar ;
      grammar.nt_implementation_5F_object_5F_list_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'include_implementation_level' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_implementation_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_implementation_5F_level_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_type_level' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_type_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_type_5F_level_i3_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_include_5F_type_5F_level_ (GALGAS_implementationObjectMap & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_type_5F_level_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'implementation_objects' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_objects_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_objects_i4_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_objects_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_objects_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'implementation_list' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_list_i5_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_list_ (GALGAS_implementationObjectMap & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_list_i5_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'implementation_type' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_type_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_type_i6_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_implementation_5F_type_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_type_i6_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'struct_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_struct_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_struct_5F_options_i7_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_struct_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_struct_5F_options_i7_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'objref_option' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_objref_5F_option_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_objref_5F_option_i8_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_objref_5F_option_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                GALGAS_lstring parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_objref_5F_option_i8_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'string_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_string_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_string_5F_options_i9_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_string_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_string_5F_options_i9_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'boolean_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_boolean_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_boolean_5F_options_i10_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_boolean_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_boolean_5F_options_i10_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'enum_item' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_enum_5F_item_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_item_i11_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_enum_5F_item_ (GALGAS_enumValues & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_item_i11_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'enum_options' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_enum_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_options_i12_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_enum_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_options_i12_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'number_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_number_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_number_5F_options_i13_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_number_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                const GALGAS_dataType parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_number_5F_options_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'type_options' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_type_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_type_5F_options_i14_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_type_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                const GALGAS_dataType parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_type_5F_options_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'with_auto' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_with_5F_auto_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_with_5F_auto_i15_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_with_5F_auto_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_with_5F_auto_i15_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'int_or_float' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_int_5F_or_5F_float_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_int_5F_or_5F_float_i16_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_int_5F_or_5F_float_ (GALGAS_object_5F_t & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_int_5F_or_5F_float_i16_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'set_followup' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_set_5F_followup_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_set_5F_followup_i17_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_set_5F_followup_ (GALGAS_numberList & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_set_5F_followup_i17_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'range_content' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_range_5F_content_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_5F_content_i18_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_range_5F_content_ (GALGAS_attributeRange & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_5F_content_i18_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'range' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_range_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_i19_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_range_ (GALGAS_attributeRange & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_i19_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'multiple' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_multiple_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_multiple_i20_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_multiple_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_multiple_i20_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'identifier_or_attribute' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_identifier_5F_or_5F_attribute_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_identifier_5F_or_5F_attribute_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'identifier_or_enum_value' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_identifier_5F_or_5F_enum_5F_value_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_parse(inLexique) ;
}

void cGrammar_goil_5F_implementation_5F_level_5F_include::nt_identifier_5F_or_5F_enum_5F_value_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_0' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_0 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_1' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_1 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_2' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_2 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_3' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_3 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_4' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_4 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_5' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_5 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_6' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_6 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_7' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_7 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_8' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_8 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_9' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_9 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_10' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_10 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_11' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_11 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_12' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_12 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_13' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_13 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_14' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_14 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_15' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_15 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_16' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_16 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_17' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_goil_5F_syntax_17 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_0' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_0 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_1' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_1 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_2' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_2 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_3' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_3 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_4' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_4 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_5' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_5 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_6' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_6 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_7' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_7 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_8' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_8 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_9' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_9 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_10' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_10 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_11' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_11 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_12' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_12 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_13' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_13 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_14' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_14 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_15' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_15 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_16' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_16 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_17' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_17 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_18' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_18 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_19' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_19 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_20' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_20 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_21' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_21 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_22' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_22 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_23' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_23 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_24' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_24 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_25' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_25 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_26' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_26 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_27' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_27 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_28' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_28 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_29' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_29 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_30' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_implementation_5F_level_5F_include::select_implementation_5F_parser_30 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_goil_type_level_include [] = {
// At index 0 : <implementation_definition>, in file 'implementation_parser.ggs', line 55
  TERMINAL (C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION) // $IMPLEMENTATION$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (14) // <implementation_object_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 7 : <start>, in file 'goil_syntax.ggs', line 38
, NONTERMINAL (5) // <OIL_version>
, NONTERMINAL (2) // <file>
, END_PRODUCTION
// At index 10 : <file>, in file 'goil_syntax.ggs', line 110
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 12 : <sign>, in file 'goil_syntax.ggs', line 126
, NONTERMINAL (37) // <select_goil_5F_syntax_1>
, END_PRODUCTION
// At index 14 : <description>, in file 'goil_syntax.ggs', line 139
, NONTERMINAL (38) // <select_goil_5F_syntax_2>
, END_PRODUCTION
// At index 16 : <OIL_version>, in file 'goil_syntax.ggs', line 163
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_OIL_5F_VERSION) // $OIL_VERSION$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 22 : <application_definition>, in file 'goil_syntax.ggs', line 170
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_CPU) // $CPU$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (7) // <object_definition_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 30 : <object_definition_list>, in file 'goil_syntax.ggs', line 184
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 32 : <boolean>, in file 'goil_syntax.ggs', line 230
, NONTERMINAL (41) // <select_goil_5F_syntax_5>
, END_PRODUCTION
// At index 34 : <oil_declaration_list>, in file 'goil_syntax.ggs', line 240
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 36 : <oil_declaration>, in file 'goil_syntax.ggs', line 252
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (43) // <select_goil_5F_syntax_7>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 40 : <include_file_level>, in file 'goil_syntax.ggs', line 425
, NONTERMINAL (48) // <select_goil_5F_syntax_12>
, NONTERMINAL (49) // <select_goil_5F_syntax_13>
, END_PRODUCTION
// At index 43 : <include_cpu_level>, in file 'goil_syntax.ggs', line 449
, NONTERMINAL (50) // <select_goil_5F_syntax_14>
, NONTERMINAL (51) // <select_goil_5F_syntax_15>
, END_PRODUCTION
// At index 46 : <include_object_level>, in file 'goil_syntax.ggs', line 473
, NONTERMINAL (52) // <select_goil_5F_syntax_16>
, NONTERMINAL (53) // <select_goil_5F_syntax_17>
, END_PRODUCTION
// At index 49 : <implementation_object_list>, in file 'implementation_parser.ggs', line 62
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 51 : <include_implementation_level>, in file 'implementation_parser.ggs', line 71
, NONTERMINAL (55) // <select_implementation_5F_parser_1>
, NONTERMINAL (56) // <select_implementation_5F_parser_2>
, END_PRODUCTION
// At index 54 : <include_type_level>, in file 'implementation_parser.ggs', line 92
, NONTERMINAL (57) // <select_implementation_5F_parser_3>
, NONTERMINAL (58) // <select_implementation_5F_parser_4>
, END_PRODUCTION
// At index 57 : <implementation_objects>, in file 'implementation_parser.ggs', line 135
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (59) // <select_implementation_5F_parser_5>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 63 : <implementation_list>, in file 'implementation_parser.ggs', line 183
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 65 : <implementation_type>, in file 'implementation_parser.ggs', line 212
, NONTERMINAL (61) // <select_implementation_5F_parser_7>
, END_PRODUCTION
// At index 67 : <struct_options>, in file 'implementation_parser.ggs', line 240
, NONTERMINAL (62) // <select_implementation_5F_parser_8>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 72 : <objref_option>, in file 'implementation_parser.ggs', line 257
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 76 : <string_options>, in file 'implementation_parser.ggs', line 275
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (63) // <select_implementation_5F_parser_9>
, END_PRODUCTION
// At index 81 : <boolean_options>, in file 'implementation_parser.ggs', line 307
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (65) // <select_implementation_5F_parser_11>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (68) // <select_implementation_5F_parser_14>
, END_PRODUCTION
// At index 87 : <enum_item>, in file 'implementation_parser.ggs', line 352
, NONTERMINAL (35) // <identifier_or_enum_value>
, NONTERMINAL (69) // <select_implementation_5F_parser_15>
, END_PRODUCTION
// At index 90 : <enum_options>, in file 'implementation_parser.ggs', line 365
, NONTERMINAL (28) // <with_auto>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, NONTERMINAL (24) // <enum_item>
, NONTERMINAL (70) // <select_implementation_5F_parser_16>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (71) // <select_implementation_5F_parser_17>
, END_PRODUCTION
// At index 99 : <number_options>, in file 'implementation_parser.ggs', line 407
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (32) // <range>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (73) // <select_implementation_5F_parser_19>
, END_PRODUCTION
// At index 105 : <type_options>, in file 'implementation_parser.ggs', line 441
, NONTERMINAL (28) // <with_auto>
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (33) // <multiple>
, NONTERMINAL (75) // <select_implementation_5F_parser_21>
, END_PRODUCTION
// At index 110 : <with_auto>, in file 'implementation_parser.ggs', line 475
, NONTERMINAL (77) // <select_implementation_5F_parser_23>
, END_PRODUCTION
// At index 112 : <int_or_float>, in file 'implementation_parser.ggs', line 484
, NONTERMINAL (3) // <sign>
, NONTERMINAL (78) // <select_implementation_5F_parser_24>
, END_PRODUCTION
// At index 115 : <set_followup>, in file 'implementation_parser.ggs', line 502
, NONTERMINAL (79) // <select_implementation_5F_parser_25>
, END_PRODUCTION
// At index 117 : <range_content>, in file 'implementation_parser.ggs', line 514
, NONTERMINAL (3) // <sign>
, NONTERMINAL (80) // <select_implementation_5F_parser_26>
, END_PRODUCTION
// At index 120 : <range>, in file 'implementation_parser.ggs', line 554
, NONTERMINAL (83) // <select_implementation_5F_parser_29>
, END_PRODUCTION
// At index 122 : <multiple>, in file 'implementation_parser.ggs', line 564
, NONTERMINAL (84) // <select_implementation_5F_parser_30>
, END_PRODUCTION
// At index 124 : <identifier_or_attribute>, in file 'implementation_parser.ggs', line 574
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, END_PRODUCTION
// At index 126 : <identifier_or_enum_value>, in file 'implementation_parser.ggs', line 579
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 128 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, END_PRODUCTION
// At index 129 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (11) // <include_file_level>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 132 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (0) // <implementation_definition>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 135 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
, NONTERMINAL (6) // <application_definition>
, NONTERMINAL (36) // <select_goil_5F_syntax_0>
, END_PRODUCTION
// At index 138 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2D_) // $-$
, END_PRODUCTION
// At index 140 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2B_) // $+$
, END_PRODUCTION
// At index 142 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
, END_PRODUCTION
// At index 143 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
, END_PRODUCTION
// At index 144 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3A_) // $:$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (39) // <select_goil_5F_syntax_3>
, END_PRODUCTION
// At index 148 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
, END_PRODUCTION
// At index 149 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (39) // <select_goil_5F_syntax_3>
, END_PRODUCTION
// At index 152 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, END_PRODUCTION
// At index 153 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 162 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
, NONTERMINAL (12) // <include_cpu_level>
, NONTERMINAL (40) // <select_goil_5F_syntax_4>
, END_PRODUCTION
// At index 165 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) // $TRUE$
, END_PRODUCTION
// At index 167 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) // $FALSE$
, END_PRODUCTION
// At index 169 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, END_PRODUCTION
// At index 170 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, NONTERMINAL (10) // <oil_declaration>
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 173 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
, NONTERMINAL (13) // <include_object_level>
, NONTERMINAL (42) // <select_goil_5F_syntax_6>
, END_PRODUCTION
// At index 176 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (44) // <select_goil_5F_syntax_8>
, END_PRODUCTION
// At index 179 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 185 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (45) // <select_goil_5F_syntax_9>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 189 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, NONTERMINAL (3) // <sign>
, NONTERMINAL (46) // <select_goil_5F_syntax_10>
, END_PRODUCTION
// At index 192 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, NONTERMINAL (8) // <boolean>
, NONTERMINAL (47) // <select_goil_5F_syntax_11>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 196 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 199 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 202 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 206 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
, END_PRODUCTION
// At index 207 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 210 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 213 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (9) // <oil_declaration_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 217 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
, END_PRODUCTION
// At index 218 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 220 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 222 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 224 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 226 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 228 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 230 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 232 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 234 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 236 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 238 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 240 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 242 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, END_PRODUCTION
// At index 243 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, NONTERMINAL (17) // <implementation_objects>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 247 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
, NONTERMINAL (15) // <include_implementation_level>
, NONTERMINAL (54) // <select_implementation_5F_parser_0>
, END_PRODUCTION
// At index 250 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 252 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 254 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 256 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 258 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) // $include$
, END_PRODUCTION
// At index 260 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_includeifexists) // $includeifexists$
, END_PRODUCTION
// At index 262 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) // $g_string$
, END_PRODUCTION
// At index 264 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, END_PRODUCTION
// At index 266 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 269 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
, END_PRODUCTION
// At index 270 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, END_PRODUCTION
// At index 271 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, NONTERMINAL (19) // <implementation_type>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 275 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
, NONTERMINAL (16) // <include_type_level>
, NONTERMINAL (60) // <select_implementation_5F_parser_6>
, END_PRODUCTION
// At index 278 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_33__32_) // $UINT32$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 281 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_33__32_) // $INT32$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 284 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_UINT_36__34_) // $UINT64$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 287 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_INT_36__34_) // $INT64$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 290 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FLOAT) // $FLOAT$
, NONTERMINAL (26) // <number_options>
, END_PRODUCTION
// At index 293 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_ENUM) // $ENUM$
, NONTERMINAL (25) // <enum_options>
, END_PRODUCTION
// At index 296 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_BOOLEAN) // $BOOLEAN$
, NONTERMINAL (23) // <boolean_options>
, END_PRODUCTION
// At index 299 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRING) // $STRING$
, NONTERMINAL (22) // <string_options>
, END_PRODUCTION
// At index 302 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_IDENTIFIER) // $IDENTIFIER$
, NONTERMINAL (27) // <type_options>
, END_PRODUCTION
// At index 305 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_STRUCT) // $STRUCT$
, NONTERMINAL (20) // <struct_options>
, END_PRODUCTION
// At index 308 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (21) // <objref_option>
, END_PRODUCTION
// At index 311 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 315 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
, END_PRODUCTION
// At index 316 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (64) // <select_implementation_5F_parser_10>
, END_PRODUCTION
// At index 319 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 321 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) // $string$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 324 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 327 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 330 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) // $TRUE$
, NONTERMINAL (66) // <select_implementation_5F_parser_12>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) // $FALSE$
, NONTERMINAL (67) // <select_implementation_5F_parser_13>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 338 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
, END_PRODUCTION
// At index 339 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 343 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
, END_PRODUCTION
// At index 344 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 348 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
, END_PRODUCTION
// At index 349 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (8) // <boolean>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 353 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 355 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (18) // <implementation_list>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
// At index 359 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
, END_PRODUCTION
// At index 360 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
, END_PRODUCTION
// At index 361 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (24) // <enum_item>
, NONTERMINAL (70) // <select_implementation_5F_parser_16>
, END_PRODUCTION
// At index 365 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (72) // <select_implementation_5F_parser_18>
, END_PRODUCTION
// At index 368 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 370 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) // $idf$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 373 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 376 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 379 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (74) // <select_implementation_5F_parser_20>
, END_PRODUCTION
// At index 382 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 384 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 386 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 389 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 392 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) // $=$
, NONTERMINAL (76) // <select_implementation_5F_parser_22>
, END_PRODUCTION
// At index 395 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 397 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, NONTERMINAL (34) // <identifier_or_attribute>
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 400 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT) // $NO_DEFAULT$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 403 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_AUTO) // $AUTO$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 406 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO) // $WITH_AUTO$
, END_PRODUCTION
// At index 408 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
, END_PRODUCTION
// At index 409 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 412 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (4) // <description>
, END_PRODUCTION
// At index 415 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
, END_PRODUCTION
// At index 416 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (29) // <int_or_float>
, NONTERMINAL (79) // <select_implementation_5F_parser_25>
, END_PRODUCTION
// At index 420 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number) // $set_start_uint_number$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 423 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) // $uint_number$
, NONTERMINAL (81) // <select_implementation_5F_parser_27>
, END_PRODUCTION
// At index 426 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
, TERMINAL (C_Lexique_goil_5F_lexique::kToken_float_5F_number) // $float_number$
, NONTERMINAL (82) // <select_implementation_5F_parser_28>
, END_PRODUCTION
// At index 429 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) // $..$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 432 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
, NONTERMINAL (30) // <set_followup>
, END_PRODUCTION
// At index 434 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__2E__2E_) // $..$
, NONTERMINAL (29) // <int_or_float>
, END_PRODUCTION
// At index 437 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
, NONTERMINAL (30) // <set_followup>
, END_PRODUCTION
// At index 439 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, NONTERMINAL (31) // <range_content>
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 443 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
, END_PRODUCTION
// At index 444 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_goil_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 447 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
, END_PRODUCTION
// At index 448 : <>, in file '.ggs', line 0
, NONTERMINAL (18) // <implementation_list>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_goil_type_level_include [159] = {
 {"<implementation_definition>", "implementation_parser", 0}, // at index 0
 {"<start>", "goil_syntax", 7}, // at index 1
 {"<file>", "goil_syntax", 10}, // at index 2
 {"<sign>", "goil_syntax", 12}, // at index 3
 {"<description>", "goil_syntax", 14}, // at index 4
 {"<OIL_version>", "goil_syntax", 16}, // at index 5
 {"<application_definition>", "goil_syntax", 22}, // at index 6
 {"<object_definition_list>", "goil_syntax", 30}, // at index 7
 {"<boolean>", "goil_syntax", 32}, // at index 8
 {"<oil_declaration_list>", "goil_syntax", 34}, // at index 9
 {"<oil_declaration>", "goil_syntax", 36}, // at index 10
 {"<include_file_level>", "goil_syntax", 40}, // at index 11
 {"<include_cpu_level>", "goil_syntax", 43}, // at index 12
 {"<include_object_level>", "goil_syntax", 46}, // at index 13
 {"<implementation_object_list>", "implementation_parser", 49}, // at index 14
 {"<include_implementation_level>", "implementation_parser", 51}, // at index 15
 {"<include_type_level>", "implementation_parser", 54}, // at index 16
 {"<implementation_objects>", "implementation_parser", 57}, // at index 17
 {"<implementation_list>", "implementation_parser", 63}, // at index 18
 {"<implementation_type>", "implementation_parser", 65}, // at index 19
 {"<struct_options>", "implementation_parser", 67}, // at index 20
 {"<objref_option>", "implementation_parser", 72}, // at index 21
 {"<string_options>", "implementation_parser", 76}, // at index 22
 {"<boolean_options>", "implementation_parser", 81}, // at index 23
 {"<enum_item>", "implementation_parser", 87}, // at index 24
 {"<enum_options>", "implementation_parser", 90}, // at index 25
 {"<number_options>", "implementation_parser", 99}, // at index 26
 {"<type_options>", "implementation_parser", 105}, // at index 27
 {"<with_auto>", "implementation_parser", 110}, // at index 28
 {"<int_or_float>", "implementation_parser", 112}, // at index 29
 {"<set_followup>", "implementation_parser", 115}, // at index 30
 {"<range_content>", "implementation_parser", 117}, // at index 31
 {"<range>", "implementation_parser", 120}, // at index 32
 {"<multiple>", "implementation_parser", 122}, // at index 33
 {"<identifier_or_attribute>", "implementation_parser", 124}, // at index 34
 {"<identifier_or_enum_value>", "implementation_parser", 126}, // at index 35
 {"<select_goil_5F_syntax_0>", "goil_syntax", 128}, // at index 36
 {"<select_goil_5F_syntax_0>", "goil_syntax", 129}, // at index 37
 {"<select_goil_5F_syntax_0>", "goil_syntax", 132}, // at index 38
 {"<select_goil_5F_syntax_0>", "goil_syntax", 135}, // at index 39
 {"<select_goil_5F_syntax_1>", "goil_syntax", 138}, // at index 40
 {"<select_goil_5F_syntax_1>", "goil_syntax", 140}, // at index 41
 {"<select_goil_5F_syntax_1>", "goil_syntax", 142}, // at index 42
 {"<select_goil_5F_syntax_2>", "goil_syntax", 143}, // at index 43
 {"<select_goil_5F_syntax_2>", "goil_syntax", 144}, // at index 44
 {"<select_goil_5F_syntax_3>", "goil_syntax", 148}, // at index 45
 {"<select_goil_5F_syntax_3>", "goil_syntax", 149}, // at index 46
 {"<select_goil_5F_syntax_4>", "goil_syntax", 152}, // at index 47
 {"<select_goil_5F_syntax_4>", "goil_syntax", 153}, // at index 48
 {"<select_goil_5F_syntax_4>", "goil_syntax", 162}, // at index 49
 {"<select_goil_5F_syntax_5>", "goil_syntax", 165}, // at index 50
 {"<select_goil_5F_syntax_5>", "goil_syntax", 167}, // at index 51
 {"<select_goil_5F_syntax_6>", "goil_syntax", 169}, // at index 52
 {"<select_goil_5F_syntax_6>", "goil_syntax", 170}, // at index 53
 {"<select_goil_5F_syntax_6>", "goil_syntax", 173}, // at index 54
 {"<select_goil_5F_syntax_7>", "goil_syntax", 176}, // at index 55
 {"<select_goil_5F_syntax_7>", "goil_syntax", 179}, // at index 56
 {"<select_goil_5F_syntax_8>", "goil_syntax", 185}, // at index 57
 {"<select_goil_5F_syntax_8>", "goil_syntax", 189}, // at index 58
 {"<select_goil_5F_syntax_8>", "goil_syntax", 192}, // at index 59
 {"<select_goil_5F_syntax_8>", "goil_syntax", 196}, // at index 60
 {"<select_goil_5F_syntax_8>", "goil_syntax", 199}, // at index 61
 {"<select_goil_5F_syntax_9>", "goil_syntax", 202}, // at index 62
 {"<select_goil_5F_syntax_9>", "goil_syntax", 206}, // at index 63
 {"<select_goil_5F_syntax_10>", "goil_syntax", 207}, // at index 64
 {"<select_goil_5F_syntax_10>", "goil_syntax", 210}, // at index 65
 {"<select_goil_5F_syntax_11>", "goil_syntax", 213}, // at index 66
 {"<select_goil_5F_syntax_11>", "goil_syntax", 217}, // at index 67
 {"<select_goil_5F_syntax_12>", "goil_syntax", 218}, // at index 68
 {"<select_goil_5F_syntax_12>", "goil_syntax", 220}, // at index 69
 {"<select_goil_5F_syntax_13>", "goil_syntax", 222}, // at index 70
 {"<select_goil_5F_syntax_13>", "goil_syntax", 224}, // at index 71
 {"<select_goil_5F_syntax_14>", "goil_syntax", 226}, // at index 72
 {"<select_goil_5F_syntax_14>", "goil_syntax", 228}, // at index 73
 {"<select_goil_5F_syntax_15>", "goil_syntax", 230}, // at index 74
 {"<select_goil_5F_syntax_15>", "goil_syntax", 232}, // at index 75
 {"<select_goil_5F_syntax_16>", "goil_syntax", 234}, // at index 76
 {"<select_goil_5F_syntax_16>", "goil_syntax", 236}, // at index 77
 {"<select_goil_5F_syntax_17>", "goil_syntax", 238}, // at index 78
 {"<select_goil_5F_syntax_17>", "goil_syntax", 240}, // at index 79
 {"<select_implementation_5F_parser_0>", "implementation_parser", 242}, // at index 80
 {"<select_implementation_5F_parser_0>", "implementation_parser", 243}, // at index 81
 {"<select_implementation_5F_parser_0>", "implementation_parser", 247}, // at index 82
 {"<select_implementation_5F_parser_1>", "implementation_parser", 250}, // at index 83
 {"<select_implementation_5F_parser_1>", "implementation_parser", 252}, // at index 84
 {"<select_implementation_5F_parser_2>", "implementation_parser", 254}, // at index 85
 {"<select_implementation_5F_parser_2>", "implementation_parser", 256}, // at index 86
 {"<select_implementation_5F_parser_3>", "implementation_parser", 258}, // at index 87
 {"<select_implementation_5F_parser_3>", "implementation_parser", 260}, // at index 88
 {"<select_implementation_5F_parser_4>", "implementation_parser", 262}, // at index 89
 {"<select_implementation_5F_parser_4>", "implementation_parser", 264}, // at index 90
 {"<select_implementation_5F_parser_5>", "implementation_parser", 266}, // at index 91
 {"<select_implementation_5F_parser_5>", "implementation_parser", 269}, // at index 92
 {"<select_implementation_5F_parser_6>", "implementation_parser", 270}, // at index 93
 {"<select_implementation_5F_parser_6>", "implementation_parser", 271}, // at index 94
 {"<select_implementation_5F_parser_6>", "implementation_parser", 275}, // at index 95
 {"<select_implementation_5F_parser_7>", "implementation_parser", 278}, // at index 96
 {"<select_implementation_5F_parser_7>", "implementation_parser", 281}, // at index 97
 {"<select_implementation_5F_parser_7>", "implementation_parser", 284}, // at index 98
 {"<select_implementation_5F_parser_7>", "implementation_parser", 287}, // at index 99
 {"<select_implementation_5F_parser_7>", "implementation_parser", 290}, // at index 100
 {"<select_implementation_5F_parser_7>", "implementation_parser", 293}, // at index 101
 {"<select_implementation_5F_parser_7>", "implementation_parser", 296}, // at index 102
 {"<select_implementation_5F_parser_7>", "implementation_parser", 299}, // at index 103
 {"<select_implementation_5F_parser_7>", "implementation_parser", 302}, // at index 104
 {"<select_implementation_5F_parser_7>", "implementation_parser", 305}, // at index 105
 {"<select_implementation_5F_parser_7>", "implementation_parser", 308}, // at index 106
 {"<select_implementation_5F_parser_8>", "implementation_parser", 311}, // at index 107
 {"<select_implementation_5F_parser_8>", "implementation_parser", 315}, // at index 108
 {"<select_implementation_5F_parser_9>", "implementation_parser", 316}, // at index 109
 {"<select_implementation_5F_parser_9>", "implementation_parser", 319}, // at index 110
 {"<select_implementation_5F_parser_10>", "implementation_parser", 321}, // at index 111
 {"<select_implementation_5F_parser_10>", "implementation_parser", 324}, // at index 112
 {"<select_implementation_5F_parser_10>", "implementation_parser", 327}, // at index 113
 {"<select_implementation_5F_parser_11>", "implementation_parser", 330}, // at index 114
 {"<select_implementation_5F_parser_11>", "implementation_parser", 338}, // at index 115
 {"<select_implementation_5F_parser_12>", "implementation_parser", 339}, // at index 116
 {"<select_implementation_5F_parser_12>", "implementation_parser", 343}, // at index 117
 {"<select_implementation_5F_parser_13>", "implementation_parser", 344}, // at index 118
 {"<select_implementation_5F_parser_13>", "implementation_parser", 348}, // at index 119
 {"<select_implementation_5F_parser_14>", "implementation_parser", 349}, // at index 120
 {"<select_implementation_5F_parser_14>", "implementation_parser", 353}, // at index 121
 {"<select_implementation_5F_parser_15>", "implementation_parser", 355}, // at index 122
 {"<select_implementation_5F_parser_15>", "implementation_parser", 359}, // at index 123
 {"<select_implementation_5F_parser_16>", "implementation_parser", 360}, // at index 124
 {"<select_implementation_5F_parser_16>", "implementation_parser", 361}, // at index 125
 {"<select_implementation_5F_parser_17>", "implementation_parser", 365}, // at index 126
 {"<select_implementation_5F_parser_17>", "implementation_parser", 368}, // at index 127
 {"<select_implementation_5F_parser_18>", "implementation_parser", 370}, // at index 128
 {"<select_implementation_5F_parser_18>", "implementation_parser", 373}, // at index 129
 {"<select_implementation_5F_parser_18>", "implementation_parser", 376}, // at index 130
 {"<select_implementation_5F_parser_19>", "implementation_parser", 379}, // at index 131
 {"<select_implementation_5F_parser_19>", "implementation_parser", 382}, // at index 132
 {"<select_implementation_5F_parser_20>", "implementation_parser", 384}, // at index 133
 {"<select_implementation_5F_parser_20>", "implementation_parser", 386}, // at index 134
 {"<select_implementation_5F_parser_20>", "implementation_parser", 389}, // at index 135
 {"<select_implementation_5F_parser_21>", "implementation_parser", 392}, // at index 136
 {"<select_implementation_5F_parser_21>", "implementation_parser", 395}, // at index 137
 {"<select_implementation_5F_parser_22>", "implementation_parser", 397}, // at index 138
 {"<select_implementation_5F_parser_22>", "implementation_parser", 400}, // at index 139
 {"<select_implementation_5F_parser_22>", "implementation_parser", 403}, // at index 140
 {"<select_implementation_5F_parser_23>", "implementation_parser", 406}, // at index 141
 {"<select_implementation_5F_parser_23>", "implementation_parser", 408}, // at index 142
 {"<select_implementation_5F_parser_24>", "implementation_parser", 409}, // at index 143
 {"<select_implementation_5F_parser_24>", "implementation_parser", 412}, // at index 144
 {"<select_implementation_5F_parser_25>", "implementation_parser", 415}, // at index 145
 {"<select_implementation_5F_parser_25>", "implementation_parser", 416}, // at index 146
 {"<select_implementation_5F_parser_26>", "implementation_parser", 420}, // at index 147
 {"<select_implementation_5F_parser_26>", "implementation_parser", 423}, // at index 148
 {"<select_implementation_5F_parser_26>", "implementation_parser", 426}, // at index 149
 {"<select_implementation_5F_parser_27>", "implementation_parser", 429}, // at index 150
 {"<select_implementation_5F_parser_27>", "implementation_parser", 432}, // at index 151
 {"<select_implementation_5F_parser_28>", "implementation_parser", 434}, // at index 152
 {"<select_implementation_5F_parser_28>", "implementation_parser", 437}, // at index 153
 {"<select_implementation_5F_parser_29>", "implementation_parser", 439}, // at index 154
 {"<select_implementation_5F_parser_29>", "implementation_parser", 443}, // at index 155
 {"<select_implementation_5F_parser_30>", "implementation_parser", 444}, // at index 156
 {"<select_implementation_5F_parser_30>", "implementation_parser", 447}, // at index 157
 {"<>", "", 448} // at index 158
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_goil_type_level_include [159] = {
0, // index 0 : <implementation_definition>, in file 'implementation_parser.ggs', line 55
7, // index 1 : <start>, in file 'goil_syntax.ggs', line 38
10, // index 2 : <file>, in file 'goil_syntax.ggs', line 110
12, // index 3 : <sign>, in file 'goil_syntax.ggs', line 126
14, // index 4 : <description>, in file 'goil_syntax.ggs', line 139
16, // index 5 : <OIL_version>, in file 'goil_syntax.ggs', line 163
22, // index 6 : <application_definition>, in file 'goil_syntax.ggs', line 170
30, // index 7 : <object_definition_list>, in file 'goil_syntax.ggs', line 184
32, // index 8 : <boolean>, in file 'goil_syntax.ggs', line 230
34, // index 9 : <oil_declaration_list>, in file 'goil_syntax.ggs', line 240
36, // index 10 : <oil_declaration>, in file 'goil_syntax.ggs', line 252
40, // index 11 : <include_file_level>, in file 'goil_syntax.ggs', line 425
43, // index 12 : <include_cpu_level>, in file 'goil_syntax.ggs', line 449
46, // index 13 : <include_object_level>, in file 'goil_syntax.ggs', line 473
49, // index 14 : <implementation_object_list>, in file 'implementation_parser.ggs', line 62
51, // index 15 : <include_implementation_level>, in file 'implementation_parser.ggs', line 71
54, // index 16 : <include_type_level>, in file 'implementation_parser.ggs', line 92
57, // index 17 : <implementation_objects>, in file 'implementation_parser.ggs', line 135
63, // index 18 : <implementation_list>, in file 'implementation_parser.ggs', line 183
65, // index 19 : <implementation_type>, in file 'implementation_parser.ggs', line 212
67, // index 20 : <struct_options>, in file 'implementation_parser.ggs', line 240
72, // index 21 : <objref_option>, in file 'implementation_parser.ggs', line 257
76, // index 22 : <string_options>, in file 'implementation_parser.ggs', line 275
81, // index 23 : <boolean_options>, in file 'implementation_parser.ggs', line 307
87, // index 24 : <enum_item>, in file 'implementation_parser.ggs', line 352
90, // index 25 : <enum_options>, in file 'implementation_parser.ggs', line 365
99, // index 26 : <number_options>, in file 'implementation_parser.ggs', line 407
105, // index 27 : <type_options>, in file 'implementation_parser.ggs', line 441
110, // index 28 : <with_auto>, in file 'implementation_parser.ggs', line 475
112, // index 29 : <int_or_float>, in file 'implementation_parser.ggs', line 484
115, // index 30 : <set_followup>, in file 'implementation_parser.ggs', line 502
117, // index 31 : <range_content>, in file 'implementation_parser.ggs', line 514
120, // index 32 : <range>, in file 'implementation_parser.ggs', line 554
122, // index 33 : <multiple>, in file 'implementation_parser.ggs', line 564
124, // index 34 : <identifier_or_attribute>, in file 'implementation_parser.ggs', line 574
126, // index 35 : <identifier_or_enum_value>, in file 'implementation_parser.ggs', line 579
128, // index 36 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
129, // index 37 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
132, // index 38 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
135, // index 39 : <select_goil_5F_syntax_0>, in file 'goil_syntax.ggs', line 119
138, // index 40 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
140, // index 41 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
142, // index 42 : <select_goil_5F_syntax_1>, in file 'goil_syntax.ggs', line 127
143, // index 43 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
144, // index 44 : <select_goil_5F_syntax_2>, in file 'goil_syntax.ggs', line 140
148, // index 45 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
149, // index 46 : <select_goil_5F_syntax_3>, in file 'goil_syntax.ggs', line 147
152, // index 47 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
153, // index 48 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
162, // index 49 : <select_goil_5F_syntax_4>, in file 'goil_syntax.ggs', line 190
165, // index 50 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
167, // index 51 : <select_goil_5F_syntax_5>, in file 'goil_syntax.ggs', line 231
169, // index 52 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
170, // index 53 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
173, // index 54 : <select_goil_5F_syntax_6>, in file 'goil_syntax.ggs', line 244
176, // index 55 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
179, // index 56 : <select_goil_5F_syntax_7>, in file 'goil_syntax.ggs', line 269
185, // index 57 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
189, // index 58 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
192, // index 59 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
196, // index 60 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
199, // index 61 : <select_goil_5F_syntax_8>, in file 'goil_syntax.ggs', line 271
202, // index 62 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
206, // index 63 : <select_goil_5F_syntax_9>, in file 'goil_syntax.ggs', line 292
207, // index 64 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
210, // index 65 : <select_goil_5F_syntax_10>, in file 'goil_syntax.ggs', line 309
213, // index 66 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
217, // index 67 : <select_goil_5F_syntax_11>, in file 'goil_syntax.ggs', line 340
218, // index 68 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
220, // index 69 : <select_goil_5F_syntax_12>, in file 'goil_syntax.ggs', line 432
222, // index 70 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
224, // index 71 : <select_goil_5F_syntax_13>, in file 'goil_syntax.ggs', line 438
226, // index 72 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
228, // index 73 : <select_goil_5F_syntax_14>, in file 'goil_syntax.ggs', line 456
230, // index 74 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
232, // index 75 : <select_goil_5F_syntax_15>, in file 'goil_syntax.ggs', line 462
234, // index 76 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
236, // index 77 : <select_goil_5F_syntax_16>, in file 'goil_syntax.ggs', line 478
238, // index 78 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
240, // index 79 : <select_goil_5F_syntax_17>, in file 'goil_syntax.ggs', line 484
242, // index 80 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
243, // index 81 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
247, // index 82 : <select_implementation_5F_parser_0>, in file 'implementation_parser.ggs', line 65
250, // index 83 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
252, // index 84 : <select_implementation_5F_parser_1>, in file 'implementation_parser.ggs', line 75
254, // index 85 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
256, // index 86 : <select_implementation_5F_parser_2>, in file 'implementation_parser.ggs', line 81
258, // index 87 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
260, // index 88 : <select_implementation_5F_parser_3>, in file 'implementation_parser.ggs', line 96
262, // index 89 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
264, // index 90 : <select_implementation_5F_parser_4>, in file 'implementation_parser.ggs', line 102
266, // index 91 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
269, // index 92 : <select_implementation_5F_parser_5>, in file 'implementation_parser.ggs', line 142
270, // index 93 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
271, // index 94 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
275, // index 95 : <select_implementation_5F_parser_6>, in file 'implementation_parser.ggs', line 186
278, // index 96 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
281, // index 97 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
284, // index 98 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
287, // index 99 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
290, // index 100 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
293, // index 101 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
296, // index 102 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
299, // index 103 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
302, // index 104 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
305, // index 105 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
308, // index 106 : <select_implementation_5F_parser_7>, in file 'implementation_parser.ggs', line 215
311, // index 107 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
315, // index 108 : <select_implementation_5F_parser_8>, in file 'implementation_parser.ggs', line 244
316, // index 109 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
319, // index 110 : <select_implementation_5F_parser_9>, in file 'implementation_parser.ggs', line 285
321, // index 111 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
324, // index 112 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
327, // index 113 : <select_implementation_5F_parser_10>, in file 'implementation_parser.ggs', line 287
330, // index 114 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
338, // index 115 : <select_implementation_5F_parser_11>, in file 'implementation_parser.ggs', line 314
339, // index 116 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
343, // index 117 : <select_implementation_5F_parser_12>, in file 'implementation_parser.ggs', line 317
344, // index 118 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
348, // index 119 : <select_implementation_5F_parser_13>, in file 'implementation_parser.ggs', line 326
349, // index 120 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
353, // index 121 : <select_implementation_5F_parser_14>, in file 'implementation_parser.ggs', line 340
355, // index 122 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
359, // index 123 : <select_implementation_5F_parser_15>, in file 'implementation_parser.ggs', line 357
360, // index 124 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
361, // index 125 : <select_implementation_5F_parser_16>, in file 'implementation_parser.ggs', line 373
365, // index 126 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
368, // index 127 : <select_implementation_5F_parser_17>, in file 'implementation_parser.ggs', line 383
370, // index 128 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
373, // index 129 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
376, // index 130 : <select_implementation_5F_parser_18>, in file 'implementation_parser.ggs', line 385
379, // index 131 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
382, // index 132 : <select_implementation_5F_parser_19>, in file 'implementation_parser.ggs', line 420
384, // index 133 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
386, // index 134 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
389, // index 135 : <select_implementation_5F_parser_20>, in file 'implementation_parser.ggs', line 422
392, // index 136 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
395, // index 137 : <select_implementation_5F_parser_21>, in file 'implementation_parser.ggs', line 452
397, // index 138 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
400, // index 139 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
403, // index 140 : <select_implementation_5F_parser_22>, in file 'implementation_parser.ggs', line 454
406, // index 141 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
408, // index 142 : <select_implementation_5F_parser_23>, in file 'implementation_parser.ggs', line 477
409, // index 143 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
412, // index 144 : <select_implementation_5F_parser_24>, in file 'implementation_parser.ggs', line 489
415, // index 145 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
416, // index 146 : <select_implementation_5F_parser_25>, in file 'implementation_parser.ggs', line 505
420, // index 147 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
423, // index 148 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
426, // index 149 : <select_implementation_5F_parser_26>, in file 'implementation_parser.ggs', line 521
429, // index 150 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
432, // index 151 : <select_implementation_5F_parser_27>, in file 'implementation_parser.ggs', line 531
434, // index 152 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
437, // index 153 : <select_implementation_5F_parser_28>, in file 'implementation_parser.ggs', line 543
439, // index 154 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
443, // index 155 : <select_implementation_5F_parser_29>, in file 'implementation_parser.ggs', line 557
444, // index 156 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
447, // index 157 : <select_implementation_5F_parser_30>, in file 'implementation_parser.ggs', line 566
448 // index 158 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_goil_type_level_include [87] = {
0, // at 0 : <implementation_definition>
1, // at 1 : <start>
2, // at 2 : <file>
3, // at 3 : <sign>
4, // at 4 : <description>
5, // at 5 : <OIL_version>
6, // at 6 : <application_definition>
7, // at 7 : <object_definition_list>
8, // at 8 : <boolean>
9, // at 9 : <oil_declaration_list>
10, // at 10 : <oil_declaration>
11, // at 11 : <include_file_level>
12, // at 12 : <include_cpu_level>
13, // at 13 : <include_object_level>
14, // at 14 : <implementation_object_list>
15, // at 15 : <include_implementation_level>
16, // at 16 : <include_type_level>
17, // at 17 : <implementation_objects>
18, // at 18 : <implementation_list>
19, // at 19 : <implementation_type>
20, // at 20 : <struct_options>
21, // at 21 : <objref_option>
22, // at 22 : <string_options>
23, // at 23 : <boolean_options>
24, // at 24 : <enum_item>
25, // at 25 : <enum_options>
26, // at 26 : <number_options>
27, // at 27 : <type_options>
28, // at 28 : <with_auto>
29, // at 29 : <int_or_float>
30, // at 30 : <set_followup>
31, // at 31 : <range_content>
32, // at 32 : <range>
33, // at 33 : <multiple>
34, // at 34 : <identifier_or_attribute>
35, // at 35 : <identifier_or_enum_value>
36, // at 36 : <select_goil_5F_syntax_0>
40, // at 37 : <select_goil_5F_syntax_1>
43, // at 38 : <select_goil_5F_syntax_2>
45, // at 39 : <select_goil_5F_syntax_3>
47, // at 40 : <select_goil_5F_syntax_4>
50, // at 41 : <select_goil_5F_syntax_5>
52, // at 42 : <select_goil_5F_syntax_6>
55, // at 43 : <select_goil_5F_syntax_7>
57, // at 44 : <select_goil_5F_syntax_8>
62, // at 45 : <select_goil_5F_syntax_9>
64, // at 46 : <select_goil_5F_syntax_10>
66, // at 47 : <select_goil_5F_syntax_11>
68, // at 48 : <select_goil_5F_syntax_12>
70, // at 49 : <select_goil_5F_syntax_13>
72, // at 50 : <select_goil_5F_syntax_14>
74, // at 51 : <select_goil_5F_syntax_15>
76, // at 52 : <select_goil_5F_syntax_16>
78, // at 53 : <select_goil_5F_syntax_17>
80, // at 54 : <select_implementation_5F_parser_0>
83, // at 55 : <select_implementation_5F_parser_1>
85, // at 56 : <select_implementation_5F_parser_2>
87, // at 57 : <select_implementation_5F_parser_3>
89, // at 58 : <select_implementation_5F_parser_4>
91, // at 59 : <select_implementation_5F_parser_5>
93, // at 60 : <select_implementation_5F_parser_6>
96, // at 61 : <select_implementation_5F_parser_7>
107, // at 62 : <select_implementation_5F_parser_8>
109, // at 63 : <select_implementation_5F_parser_9>
111, // at 64 : <select_implementation_5F_parser_10>
114, // at 65 : <select_implementation_5F_parser_11>
116, // at 66 : <select_implementation_5F_parser_12>
118, // at 67 : <select_implementation_5F_parser_13>
120, // at 68 : <select_implementation_5F_parser_14>
122, // at 69 : <select_implementation_5F_parser_15>
124, // at 70 : <select_implementation_5F_parser_16>
126, // at 71 : <select_implementation_5F_parser_17>
128, // at 72 : <select_implementation_5F_parser_18>
131, // at 73 : <select_implementation_5F_parser_19>
133, // at 74 : <select_implementation_5F_parser_20>
136, // at 75 : <select_implementation_5F_parser_21>
138, // at 76 : <select_implementation_5F_parser_22>
141, // at 77 : <select_implementation_5F_parser_23>
143, // at 78 : <select_implementation_5F_parser_24>
145, // at 79 : <select_implementation_5F_parser_25>
147, // at 80 : <select_implementation_5F_parser_26>
150, // at 81 : <select_implementation_5F_parser_27>
152, // at 82 : <select_implementation_5F_parser_28>
154, // at 83 : <select_implementation_5F_parser_29>
156, // at 84 : <select_implementation_5F_parser_30>
158, // at 85 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_goil_type_level_include [] = {
// At index 0 : <implementation_definition> only one production, no choice
  -1,
// At index 1 : <start> only one production, no choice
  -1,
// At index 2 : <file> only one production, no choice
  -1,
// At index 3 : <sign> only one production, no choice
  -1,
// At index 4 : <description> only one production, no choice
  -1,
// At index 5 : <OIL_version> only one production, no choice
  -1,
// At index 6 : <application_definition> only one production, no choice
  -1,
// At index 7 : <object_definition_list> only one production, no choice
  -1,
// At index 8 : <boolean> only one production, no choice
  -1,
// At index 9 : <oil_declaration_list> only one production, no choice
  -1,
// At index 10 : <oil_declaration> only one production, no choice
  -1,
// At index 11 : <include_file_level> only one production, no choice
  -1,
// At index 12 : <include_cpu_level> only one production, no choice
  -1,
// At index 13 : <include_object_level> only one production, no choice
  -1,
// At index 14 : <implementation_object_list> only one production, no choice
  -1,
// At index 15 : <include_implementation_level> only one production, no choice
  -1,
// At index 16 : <include_type_level> only one production, no choice
  -1,
// At index 17 : <implementation_objects> only one production, no choice
  -1,
// At index 18 : <implementation_list> only one production, no choice
  -1,
// At index 19 : <implementation_type> only one production, no choice
  -1,
// At index 20 : <struct_options> only one production, no choice
  -1,
// At index 21 : <objref_option> only one production, no choice
  -1,
// At index 22 : <string_options> only one production, no choice
  -1,
// At index 23 : <boolean_options> only one production, no choice
  -1,
// At index 24 : <enum_item> only one production, no choice
  -1,
// At index 25 : <enum_options> only one production, no choice
  -1,
// At index 26 : <number_options> only one production, no choice
  -1,
// At index 27 : <type_options> only one production, no choice
  -1,
// At index 28 : <with_auto> only one production, no choice
  -1,
// At index 29 : <int_or_float> only one production, no choice
  -1,
// At index 30 : <set_followup> only one production, no choice
  -1,
// At index 31 : <range_content> only one production, no choice
  -1,
// At index 32 : <range> only one production, no choice
  -1,
// At index 33 : <multiple> only one production, no choice
  -1,
// At index 34 : <identifier_or_attribute> only one production, no choice
  -1,
// At index 35 : <identifier_or_enum_value> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 36 : <select_goil_5F_syntax_0>
-1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_CPU, -1, // Choice 4
  -1,
// At index 45 : <select_goil_5F_syntax_1>
C_Lexique_goil_5F_lexique::kToken__2D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2B_, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 3
  -1,
// At index 54 : <select_goil_5F_syntax_2>
C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, -1, // Choice 2
  -1,
// At index 61 : <select_goil_5F_syntax_3>
C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 68 : <select_goil_5F_syntax_4>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 76 : <select_goil_5F_syntax_5>
C_Lexique_goil_5F_lexique::kToken_TRUE, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_FALSE, -1, // Choice 2
  -1,
// At index 81 : <select_goil_5F_syntax_6>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 89 : <select_goil_5F_syntax_7>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 94 : <select_goil_5F_syntax_8>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2D_, C_Lexique_goil_5F_lexique::kToken__2B_, C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_TRUE, C_Lexique_goil_5F_lexique::kToken_FALSE, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 4
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 5
  -1,
// At index 110 : <select_goil_5F_syntax_9>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 116 : <select_goil_5F_syntax_10>
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 2
  -1,
// At index 121 : <select_goil_5F_syntax_11>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 127 : <select_goil_5F_syntax_12>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 132 : <select_goil_5F_syntax_13>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 137 : <select_goil_5F_syntax_14>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 142 : <select_goil_5F_syntax_15>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 147 : <select_goil_5F_syntax_16>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 152 : <select_goil_5F_syntax_17>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 157 : <select_implementation_5F_parser_0>
C_Lexique_goil_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 165 : <select_implementation_5F_parser_1>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 170 : <select_implementation_5F_parser_2>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 175 : <select_implementation_5F_parser_3>
C_Lexique_goil_5F_lexique::kToken_include, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 2
  -1,
// At index 180 : <select_implementation_5F_parser_4>
C_Lexique_goil_5F_lexique::kToken_g_5F_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 2
  -1,
// At index 185 : <select_implementation_5F_parser_5>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 2
  -1,
// At index 190 : <select_implementation_5F_parser_6>
C_Lexique_goil_5F_lexique::kToken__7D_, C_Lexique_goil_5F_lexique::kToken_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, C_Lexique_goil_5F_lexique::kToken_UINT_33__32_, C_Lexique_goil_5F_lexique::kToken_INT_33__32_, C_Lexique_goil_5F_lexique::kToken_UINT_36__34_, C_Lexique_goil_5F_lexique::kToken_INT_36__34_, C_Lexique_goil_5F_lexique::kToken_FLOAT, C_Lexique_goil_5F_lexique::kToken_ENUM, C_Lexique_goil_5F_lexique::kToken_BOOLEAN, C_Lexique_goil_5F_lexique::kToken_STRING, C_Lexique_goil_5F_lexique::kToken_IDENTIFIER, C_Lexique_goil_5F_lexique::kToken_STRUCT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_include, C_Lexique_goil_5F_lexique::kToken_includeifexists, -1, // Choice 3
  -1,
// At index 209 : <select_implementation_5F_parser_7>
C_Lexique_goil_5F_lexique::kToken_UINT_33__32_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_INT_33__32_, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_UINT_36__34_, -1, // Choice 3
C_Lexique_goil_5F_lexique::kToken_INT_36__34_, -1, // Choice 4
C_Lexique_goil_5F_lexique::kToken_FLOAT, -1, // Choice 5
C_Lexique_goil_5F_lexique::kToken_ENUM, -1, // Choice 6
C_Lexique_goil_5F_lexique::kToken_BOOLEAN, -1, // Choice 7
C_Lexique_goil_5F_lexique::kToken_STRING, -1, // Choice 8
C_Lexique_goil_5F_lexique::kToken_IDENTIFIER, -1, // Choice 9
C_Lexique_goil_5F_lexique::kToken_STRUCT, -1, // Choice 10
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 11
  -1,
// At index 232 : <select_implementation_5F_parser_8>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 237 : <select_implementation_5F_parser_9>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 245 : <select_implementation_5F_parser_10>
C_Lexique_goil_5F_lexique::kToken_string, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 3
  -1,
// At index 252 : <select_implementation_5F_parser_11>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 257 : <select_implementation_5F_parser_12>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 262 : <select_implementation_5F_parser_13>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 2
  -1,
// At index 267 : <select_implementation_5F_parser_14>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 275 : <select_implementation_5F_parser_15>
C_Lexique_goil_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 281 : <select_implementation_5F_parser_16>
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 286 : <select_implementation_5F_parser_17>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 294 : <select_implementation_5F_parser_18>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 3
  -1,
// At index 301 : <select_implementation_5F_parser_19>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 309 : <select_implementation_5F_parser_20>
C_Lexique_goil_5F_lexique::kToken__2D_, C_Lexique_goil_5F_lexique::kToken__2B_, C_Lexique_goil_5F_lexique::kToken_uint_5F_number, C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 3
  -1,
// At index 319 : <select_implementation_5F_parser_21>
C_Lexique_goil_5F_lexique::kToken__3D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3B_, C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 327 : <select_implementation_5F_parser_22>
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_AUTO, -1, // Choice 3
  -1,
// At index 334 : <select_implementation_5F_parser_23>
C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 2
  -1,
// At index 340 : <select_implementation_5F_parser_24>
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 2
  -1,
// At index 345 : <select_implementation_5F_parser_25>
C_Lexique_goil_5F_lexique::kToken__5D_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 350 : <select_implementation_5F_parser_26>
C_Lexique_goil_5F_lexique::kToken_set_5F_start_5F_uint_5F_number, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_uint_5F_number, -1, // Choice 2
C_Lexique_goil_5F_lexique::kToken_float_5F_number, -1, // Choice 3
  -1,
// At index 357 : <select_implementation_5F_parser_27>
C_Lexique_goil_5F_lexique::kToken__2E__2E_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 363 : <select_implementation_5F_parser_28>
C_Lexique_goil_5F_lexique::kToken__2E__2E_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__5D_, C_Lexique_goil_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 369 : <select_implementation_5F_parser_29>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken_idf, -1, // Choice 2
  -1,
// At index 374 : <select_implementation_5F_parser_30>
C_Lexique_goil_5F_lexique::kToken__5B_, -1, // Choice 1
C_Lexique_goil_5F_lexique::kToken__3A_, C_Lexique_goil_5F_lexique::kToken__3D_, C_Lexique_goil_5F_lexique::kToken__3B_, -1, // Choice 2
  -1,
// At index 381 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_goil_type_level_include [87] = {
0, // at 0 : <implementation_definition>
1, // at 1 : <start>
2, // at 2 : <file>
3, // at 3 : <sign>
4, // at 4 : <description>
5, // at 5 : <OIL_version>
6, // at 6 : <application_definition>
7, // at 7 : <object_definition_list>
8, // at 8 : <boolean>
9, // at 9 : <oil_declaration_list>
10, // at 10 : <oil_declaration>
11, // at 11 : <include_file_level>
12, // at 12 : <include_cpu_level>
13, // at 13 : <include_object_level>
14, // at 14 : <implementation_object_list>
15, // at 15 : <include_implementation_level>
16, // at 16 : <include_type_level>
17, // at 17 : <implementation_objects>
18, // at 18 : <implementation_list>
19, // at 19 : <implementation_type>
20, // at 20 : <struct_options>
21, // at 21 : <objref_option>
22, // at 22 : <string_options>
23, // at 23 : <boolean_options>
24, // at 24 : <enum_item>
25, // at 25 : <enum_options>
26, // at 26 : <number_options>
27, // at 27 : <type_options>
28, // at 28 : <with_auto>
29, // at 29 : <int_or_float>
30, // at 30 : <set_followup>
31, // at 31 : <range_content>
32, // at 32 : <range>
33, // at 33 : <multiple>
34, // at 34 : <identifier_or_attribute>
35, // at 35 : <identifier_or_enum_value>
36, // at 36 : <select_goil_5F_syntax_0>
45, // at 37 : <select_goil_5F_syntax_1>
54, // at 38 : <select_goil_5F_syntax_2>
61, // at 39 : <select_goil_5F_syntax_3>
68, // at 40 : <select_goil_5F_syntax_4>
76, // at 41 : <select_goil_5F_syntax_5>
81, // at 42 : <select_goil_5F_syntax_6>
89, // at 43 : <select_goil_5F_syntax_7>
94, // at 44 : <select_goil_5F_syntax_8>
110, // at 45 : <select_goil_5F_syntax_9>
116, // at 46 : <select_goil_5F_syntax_10>
121, // at 47 : <select_goil_5F_syntax_11>
127, // at 48 : <select_goil_5F_syntax_12>
132, // at 49 : <select_goil_5F_syntax_13>
137, // at 50 : <select_goil_5F_syntax_14>
142, // at 51 : <select_goil_5F_syntax_15>
147, // at 52 : <select_goil_5F_syntax_16>
152, // at 53 : <select_goil_5F_syntax_17>
157, // at 54 : <select_implementation_5F_parser_0>
165, // at 55 : <select_implementation_5F_parser_1>
170, // at 56 : <select_implementation_5F_parser_2>
175, // at 57 : <select_implementation_5F_parser_3>
180, // at 58 : <select_implementation_5F_parser_4>
185, // at 59 : <select_implementation_5F_parser_5>
190, // at 60 : <select_implementation_5F_parser_6>
209, // at 61 : <select_implementation_5F_parser_7>
232, // at 62 : <select_implementation_5F_parser_8>
237, // at 63 : <select_implementation_5F_parser_9>
245, // at 64 : <select_implementation_5F_parser_10>
252, // at 65 : <select_implementation_5F_parser_11>
257, // at 66 : <select_implementation_5F_parser_12>
262, // at 67 : <select_implementation_5F_parser_13>
267, // at 68 : <select_implementation_5F_parser_14>
275, // at 69 : <select_implementation_5F_parser_15>
281, // at 70 : <select_implementation_5F_parser_16>
286, // at 71 : <select_implementation_5F_parser_17>
294, // at 72 : <select_implementation_5F_parser_18>
301, // at 73 : <select_implementation_5F_parser_19>
309, // at 74 : <select_implementation_5F_parser_20>
319, // at 75 : <select_implementation_5F_parser_21>
327, // at 76 : <select_implementation_5F_parser_22>
334, // at 77 : <select_implementation_5F_parser_23>
340, // at 78 : <select_implementation_5F_parser_24>
345, // at 79 : <select_implementation_5F_parser_25>
350, // at 80 : <select_implementation_5F_parser_26>
357, // at 81 : <select_implementation_5F_parser_27>
363, // at 82 : <select_implementation_5F_parser_28>
369, // at 83 : <select_implementation_5F_parser_29>
374, // at 84 : <select_implementation_5F_parser_30>
381, // at 85 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'implementation_definition' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_definition_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_definition_i0_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_definition_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_definition_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'start' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_start_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_start_i0_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_start_ (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_start_i0_(inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'file' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_file_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_file_i1_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_file_ (GALGAS_implementation & parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_file_i1_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'sign' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_sign_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_sign_i2_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_sign_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_sign_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'description' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_description_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_description_i3_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_description_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_description_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'OIL_version' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_OIL_5F_version_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_OIL_5F_version_i4_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_OIL_5F_version_ (GALGAS_lstring & parameter_1,
                                GALGAS_lstring & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_OIL_5F_version_i4_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'application_definition' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_application_5F_definition_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_application_5F_definition_i5_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_application_5F_definition_ (const GALGAS_implementation parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_application_5F_definition_i5_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'object_definition_list' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_object_5F_definition_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_object_5F_definition_5F_list_i6_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_object_5F_definition_5F_list_ (const GALGAS_implementation parameter_1,
                                GALGAS_objectsMap & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_object_5F_definition_5F_list_i6_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'boolean' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_boolean_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_boolean_i7_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_boolean_ (GALGAS_lbool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_boolean_i7_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'oil_declaration_list' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_oil_5F_declaration_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_5F_list_i8_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_oil_5F_declaration_5F_list_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_5F_list_i8_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'oil_declaration' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_oil_5F_declaration_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_i9_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_oil_5F_declaration_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_oil_5F_declaration_i9_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_file_level' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_file_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_file_5F_level_i10_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_file_5F_level_ (GALGAS_implementation & parameter_1,
                                GALGAS_applicationDefinition & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_file_5F_level_i10_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_cpu_level' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_cpu_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_cpu_5F_level_i11_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_cpu_5F_level_ (const GALGAS_implementation parameter_1,
                                GALGAS_objectsMap & parameter_2,
                                GALGAS_string & parameter_3,
                                const GALGAS_bool parameter_4,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_cpu_5F_level_i11_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'include_object_level' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_object_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_object_5F_level_i12_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_object_5F_level_ (const GALGAS_implementationObjectMap parameter_1,
                                GALGAS_objectAttributes & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_goil_5F_syntax_include_5F_object_5F_level_i12_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'implementation_object_list' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_object_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_object_5F_list_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_object_5F_list_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'include_implementation_level' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_implementation_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_implementation_5F_level_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_implementation_5F_level_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'include_type_level' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_type_5F_level_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_type_5F_level_i3_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_include_5F_type_5F_level_ (GALGAS_implementationObjectMap & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_include_5F_type_5F_level_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'implementation_objects' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_objects_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_objects_i4_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_objects_ (GALGAS_implementation & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_objects_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'implementation_list' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_list_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_list_i5_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_list_ (GALGAS_implementationObjectMap & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_list_i5_(parameter_1, inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_goil_5F_type_5F_level_5F_include::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_goil_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_goil_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_goil_type_level_include, gProductionNames_goil_type_level_include, gProductionIndexes_goil_type_level_include,
                                    gFirstProductionIndexes_goil_type_level_include, gDecision_goil_type_level_include, gDecisionIndexes_goil_type_level_include, 448) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_implementationObjectMap &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_goil_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_goil_type_level_include, gProductionNames_goil_type_level_include, gProductionIndexes_goil_type_level_include,
                                                      gFirstProductionIndexes_goil_type_level_include, gDecision_goil_type_level_include, gDecisionIndexes_goil_type_level_include, 448) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_goil_5F_type_5F_level_5F_include grammar ;
        grammar.nt_implementation_5F_list_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_implementationObjectMap &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_goil_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_goil_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_goil_type_level_include, gProductionNames_goil_type_level_include, gProductionIndexes_goil_type_level_include,
                                                    gFirstProductionIndexes_goil_type_level_include, gDecision_goil_type_level_include, gDecisionIndexes_goil_type_level_include, 448) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_goil_5F_type_5F_level_5F_include grammar ;
      grammar.nt_implementation_5F_list_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'implementation_type' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_type_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_type_i6_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_implementation_5F_type_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_implementation_5F_type_i6_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'struct_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_struct_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_struct_5F_options_i7_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_struct_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_struct_5F_options_i7_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'objref_option' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_objref_5F_option_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_objref_5F_option_i8_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_objref_5F_option_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                GALGAS_lstring parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_objref_5F_option_i8_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'string_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_string_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_string_5F_options_i9_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_string_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_string_5F_options_i9_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'boolean_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_boolean_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_boolean_5F_options_i10_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_boolean_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_boolean_5F_options_i10_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'enum_item' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_enum_5F_item_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_item_i11_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_enum_5F_item_ (GALGAS_enumValues & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_item_i11_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'enum_options' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_enum_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_options_i12_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_enum_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_enum_5F_options_i12_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'number_options' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_number_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_number_5F_options_i13_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_number_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                const GALGAS_dataType parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_number_5F_options_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'type_options' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_type_5F_options_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_type_5F_options_i14_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_type_5F_options_ (GALGAS_lstring & parameter_1,
                                GALGAS_impType & parameter_2,
                                const GALGAS_dataType parameter_3,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_type_5F_options_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'with_auto' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_with_5F_auto_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_with_5F_auto_i15_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_with_5F_auto_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_with_5F_auto_i15_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'int_or_float' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_int_5F_or_5F_float_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_int_5F_or_5F_float_i16_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_int_5F_or_5F_float_ (GALGAS_object_5F_t & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_int_5F_or_5F_float_i16_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'set_followup' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_set_5F_followup_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_set_5F_followup_i17_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_set_5F_followup_ (GALGAS_numberList & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_set_5F_followup_i17_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'range_content' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_range_5F_content_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_5F_content_i18_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_range_5F_content_ (GALGAS_attributeRange & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_5F_content_i18_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'range' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_range_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_i19_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_range_ (GALGAS_attributeRange & parameter_1,
                                const GALGAS_dataType parameter_2,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_range_i19_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'multiple' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_multiple_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_multiple_i20_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_multiple_ (GALGAS_bool & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_multiple_i20_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'identifier_or_attribute' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_identifier_5F_or_5F_attribute_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_identifier_5F_or_5F_attribute_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_attribute_i21_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'identifier_or_enum_value' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_goil_5F_type_5F_level_5F_include::nt_identifier_5F_or_5F_enum_5F_value_parse (C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_parse(inLexique) ;
}

void cGrammar_goil_5F_type_5F_level_5F_include::nt_identifier_5F_or_5F_enum_5F_value_ (GALGAS_lstring & parameter_1,
                                C_Lexique_goil_5F_lexique * inLexique) {
  rule_implementation_5F_parser_identifier_5F_or_5F_enum_5F_value_i22_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_0' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_0 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_1' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_1 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_2' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_2 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_3' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_3 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_4' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_4 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_5' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_5 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_6' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_6 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_7' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_7 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_8' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_8 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_9' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_9 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_10' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_10 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_11' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_11 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_12' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_12 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_13' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_13 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_14' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_14 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_15' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_15 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_16' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_16 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_goil_5F_syntax_17' added non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_goil_5F_syntax_17 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_0' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_0 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_1' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_1 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_2' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_2 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_3' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_3 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_4' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_4 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_5' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_5 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_6' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_6 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_7' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_7 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_8' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_8 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_9' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_9 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_10' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_10 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_11' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_11 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_12' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_12 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_13' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_13 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_14' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_14 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_15' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_15 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_16' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_16 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_17' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_17 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_18' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_18 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_19' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_19 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_20' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_20 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_21' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_21 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_22' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_22 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_23' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_23 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_24' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_24 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_25' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_25 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_26' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_26 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_27' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_27 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_28' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_28 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_29' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_29 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_implementation_5F_parser_30' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_goil_5F_type_5F_level_5F_include::select_implementation_5F_parser_30 (C_Lexique_goil_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_options_grammar [] = {
// At index 0 : <option_parser_start>, in file 'options_parser.ggs', line 29
  NONTERMINAL (1) // <option_item>
, NONTERMINAL (4) // <select_options_5F_parser_0>
, END_PRODUCTION
// At index 3 : <option_item>, in file 'options_parser.ggs', line 39
, TERMINAL (C_Lexique_options_5F_scanner::kToken_idf) // $idf$
, TERMINAL (C_Lexique_options_5F_scanner::kToken__3D_) // $=$
, NONTERMINAL (5) // <select_options_5F_parser_1>
, END_PRODUCTION
// At index 7 : <option_value>, in file 'options_parser.ggs', line 53
, TERMINAL (C_Lexique_options_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 9 : <option_value>, in file 'options_parser.ggs', line 60
, TERMINAL (C_Lexique_options_5F_scanner::kToken_idf) // $idf$
, END_PRODUCTION
// At index 11 : <option_value>, in file 'options_parser.ggs', line 67
, TERMINAL (C_Lexique_options_5F_scanner::kToken_uint_5F_number) // $uint_number$
, END_PRODUCTION
// At index 13 : <option_value>, in file 'options_parser.ggs', line 74
, TERMINAL (C_Lexique_options_5F_scanner::kToken_float_5F_number) // $float_number$
, END_PRODUCTION
// At index 15 : <option_value>, in file 'options_parser.ggs', line 81
, TERMINAL (C_Lexique_options_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (6) // <select_options_5F_parser_2>
, END_PRODUCTION
// At index 18 : <list_option_value>, in file 'options_parser.ggs', line 94
, TERMINAL (C_Lexique_options_5F_scanner::kToken__28_) // $($
, NONTERMINAL (2) // <option_value>
, NONTERMINAL (7) // <select_options_5F_parser_3>
, TERMINAL (C_Lexique_options_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 23 : <select_options_5F_parser_0>, in file 'options_parser.ggs', line 33
, END_PRODUCTION
// At index 24 : <select_options_5F_parser_0>, in file 'options_parser.ggs', line 33
, TERMINAL (C_Lexique_options_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (1) // <option_item>
, NONTERMINAL (4) // <select_options_5F_parser_0>
, END_PRODUCTION
// At index 28 : <select_options_5F_parser_1>, in file 'options_parser.ggs', line 45
, NONTERMINAL (2) // <option_value>
, END_PRODUCTION
// At index 30 : <select_options_5F_parser_1>, in file 'options_parser.ggs', line 45
, NONTERMINAL (3) // <list_option_value>
, END_PRODUCTION
// At index 32 : <select_options_5F_parser_2>, in file 'options_parser.ggs', line 85
, TERMINAL (C_Lexique_options_5F_scanner::kToken_uint_5F_number) // $uint_number$
, END_PRODUCTION
// At index 34 : <select_options_5F_parser_2>, in file 'options_parser.ggs', line 85
, TERMINAL (C_Lexique_options_5F_scanner::kToken_float_5F_number) // $float_number$
, END_PRODUCTION
// At index 36 : <select_options_5F_parser_3>, in file 'options_parser.ggs', line 99
, END_PRODUCTION
// At index 37 : <select_options_5F_parser_3>, in file 'options_parser.ggs', line 99
, TERMINAL (C_Lexique_options_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (2) // <option_value>
, NONTERMINAL (7) // <select_options_5F_parser_3>
, END_PRODUCTION
// At index 41 : <>, in file '.ggs', line 0
, NONTERMINAL (0) // <option_parser_start>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_options_grammar [17] = {
 {"<option_parser_start>", "options_parser", 0}, // at index 0
 {"<option_item>", "options_parser", 3}, // at index 1
 {"<option_value>", "options_parser", 7}, // at index 2
 {"<option_value>", "options_parser", 9}, // at index 3
 {"<option_value>", "options_parser", 11}, // at index 4
 {"<option_value>", "options_parser", 13}, // at index 5
 {"<option_value>", "options_parser", 15}, // at index 6
 {"<list_option_value>", "options_parser", 18}, // at index 7
 {"<select_options_5F_parser_0>", "options_parser", 23}, // at index 8
 {"<select_options_5F_parser_0>", "options_parser", 24}, // at index 9
 {"<select_options_5F_parser_1>", "options_parser", 28}, // at index 10
 {"<select_options_5F_parser_1>", "options_parser", 30}, // at index 11
 {"<select_options_5F_parser_2>", "options_parser", 32}, // at index 12
 {"<select_options_5F_parser_2>", "options_parser", 34}, // at index 13
 {"<select_options_5F_parser_3>", "options_parser", 36}, // at index 14
 {"<select_options_5F_parser_3>", "options_parser", 37}, // at index 15
 {"<>", "", 41} // at index 16
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_options_grammar [17] = {
0, // index 0 : <option_parser_start>, in file 'options_parser.ggs', line 29
3, // index 1 : <option_item>, in file 'options_parser.ggs', line 39
7, // index 2 : <option_value>, in file 'options_parser.ggs', line 53
9, // index 3 : <option_value>, in file 'options_parser.ggs', line 60
11, // index 4 : <option_value>, in file 'options_parser.ggs', line 67
13, // index 5 : <option_value>, in file 'options_parser.ggs', line 74
15, // index 6 : <option_value>, in file 'options_parser.ggs', line 81
18, // index 7 : <list_option_value>, in file 'options_parser.ggs', line 94
23, // index 8 : <select_options_5F_parser_0>, in file 'options_parser.ggs', line 33
24, // index 9 : <select_options_5F_parser_0>, in file 'options_parser.ggs', line 33
28, // index 10 : <select_options_5F_parser_1>, in file 'options_parser.ggs', line 45
30, // index 11 : <select_options_5F_parser_1>, in file 'options_parser.ggs', line 45
32, // index 12 : <select_options_5F_parser_2>, in file 'options_parser.ggs', line 85
34, // index 13 : <select_options_5F_parser_2>, in file 'options_parser.ggs', line 85
36, // index 14 : <select_options_5F_parser_3>, in file 'options_parser.ggs', line 99
37, // index 15 : <select_options_5F_parser_3>, in file 'options_parser.ggs', line 99
41 // index 16 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_options_grammar [10] = {
0, // at 0 : <option_parser_start>
1, // at 1 : <option_item>
2, // at 2 : <option_value>
7, // at 3 : <list_option_value>
8, // at 4 : <select_options_5F_parser_0>
10, // at 5 : <select_options_5F_parser_1>
12, // at 6 : <select_options_5F_parser_2>
14, // at 7 : <select_options_5F_parser_3>
16, // at 8 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_options_grammar [] = {
// At index 0 : <option_parser_start> only one production, no choice
  -1,
// At index 1 : <option_item> only one production, no choice
  -1,
// At index 2 : <option_value>
C_Lexique_options_5F_scanner::kToken_string, -1, // Choice 1
C_Lexique_options_5F_scanner::kToken_idf, -1, // Choice 2
C_Lexique_options_5F_scanner::kToken_uint_5F_number, -1, // Choice 3
C_Lexique_options_5F_scanner::kToken_float_5F_number, -1, // Choice 4
C_Lexique_options_5F_scanner::kToken__2D_, -1, // Choice 5
  -1,
// At index 13 : <list_option_value> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 14 : <select_options_5F_parser_0>
C_Lexique_options_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_options_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 19 : <select_options_5F_parser_1>
C_Lexique_options_5F_scanner::kToken_idf, C_Lexique_options_5F_scanner::kToken_string, C_Lexique_options_5F_scanner::kToken_uint_5F_number, C_Lexique_options_5F_scanner::kToken_float_5F_number, C_Lexique_options_5F_scanner::kToken__2D_, -1, // Choice 1
C_Lexique_options_5F_scanner::kToken__28_, -1, // Choice 2
  -1,
// At index 28 : <select_options_5F_parser_2>
C_Lexique_options_5F_scanner::kToken_uint_5F_number, -1, // Choice 1
C_Lexique_options_5F_scanner::kToken_float_5F_number, -1, // Choice 2
  -1,
// At index 33 : <select_options_5F_parser_3>
C_Lexique_options_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_options_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 38 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_options_grammar [10] = {
0, // at 0 : <option_parser_start>
1, // at 1 : <option_item>
2, // at 2 : <option_value>
13, // at 3 : <list_option_value>
14, // at 4 : <select_options_5F_parser_0>
19, // at 5 : <select_options_5F_parser_1>
28, // at 6 : <select_options_5F_parser_2>
33, // at 7 : <select_options_5F_parser_3>
38, // at 8 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'option_parser_start' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_options_5F_grammar::nt_option_5F_parser_5F_start_parse (C_Lexique_options_5F_scanner * inLexique) {
  rule_options_5F_parser_option_5F_parser_5F_start_i0_parse(inLexique) ;
}

void cGrammar_options_5F_grammar::nt_option_5F_parser_5F_start_ (GALGAS_gtlData & parameter_1,
                                C_Lexique_options_5F_scanner * inLexique) {
  rule_options_5F_parser_option_5F_parser_5F_start_i0_(parameter_1, inLexique) ;
}

void cGrammar_options_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_options_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_options_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_options_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_options_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_options_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_options_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_options_grammar, gProductionNames_options_grammar, gProductionIndexes_options_grammar,
                                    gFirstProductionIndexes_options_grammar, gDecision_options_grammar, gDecisionIndexes_options_grammar, 41) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_options_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_gtlData &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_options_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_options_5F_scanner (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_options_grammar, gProductionNames_options_grammar, gProductionIndexes_options_grammar,
                                                      gFirstProductionIndexes_options_grammar, gDecision_options_grammar, gDecisionIndexes_options_grammar, 41) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_options_5F_grammar grammar ;
        grammar.nt_option_5F_parser_5F_start_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_options_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_gtlData &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_options_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_options_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_options_grammar, gProductionNames_options_grammar, gProductionIndexes_options_grammar,
                                                    gFirstProductionIndexes_options_grammar, gDecision_options_grammar, gDecisionIndexes_options_grammar, 41) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_options_5F_grammar grammar ;
      grammar.nt_option_5F_parser_5F_start_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'option_item' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_options_5F_grammar::nt_option_5F_item_parse (C_Lexique_options_5F_scanner * inLexique) {
  rule_options_5F_parser_option_5F_item_i1_parse(inLexique) ;
}

void cGrammar_options_5F_grammar::nt_option_5F_item_ (GALGAS_gtlData & parameter_1,
                                C_Lexique_options_5F_scanner * inLexique) {
  rule_options_5F_parser_option_5F_item_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'option_value' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_options_5F_grammar::nt_option_5F_value_parse (C_Lexique_options_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_options_5F_parser_option_5F_value_i2_parse(inLexique) ;
    break ;
  case 2 :
    rule_options_5F_parser_option_5F_value_i3_parse(inLexique) ;
    break ;
  case 3 :
    rule_options_5F_parser_option_5F_value_i4_parse(inLexique) ;
    break ;
  case 4 :
    rule_options_5F_parser_option_5F_value_i5_parse(inLexique) ;
    break ;
  case 5 :
    rule_options_5F_parser_option_5F_value_i6_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_options_5F_grammar::nt_option_5F_value_ (GALGAS_gtlData & parameter_1,
                                C_Lexique_options_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_options_5F_parser_option_5F_value_i2_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_options_5F_parser_option_5F_value_i3_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_options_5F_parser_option_5F_value_i4_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_options_5F_parser_option_5F_value_i5_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_options_5F_parser_option_5F_value_i6_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'list_option_value' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_options_5F_grammar::nt_list_5F_option_5F_value_parse (C_Lexique_options_5F_scanner * inLexique) {
  rule_options_5F_parser_list_5F_option_5F_value_i7_parse(inLexique) ;
}

void cGrammar_options_5F_grammar::nt_list_5F_option_5F_value_ (GALGAS_gtlData & parameter_1,
                                C_Lexique_options_5F_scanner * inLexique) {
  rule_options_5F_parser_list_5F_option_5F_value_i7_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_options_5F_parser_0' added non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_options_5F_grammar::select_options_5F_parser_0 (C_Lexique_options_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_options_5F_parser_1' added non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_options_5F_grammar::select_options_5F_parser_1 (C_Lexique_options_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_options_5F_parser_2' added non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_options_5F_grammar::select_options_5F_parser_2 (C_Lexique_options_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_options_5F_parser_3' added non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_options_5F_grammar::select_options_5F_parser_3 (C_Lexique_options_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_arxml_5F_start_5F_symbol_i0_ (GALGAS_arxmlNode & outArgument_rootNode,
                                                                                 const GALGAS_bool constinArgument_includeComments,
                                                                                 const GALGAS_bool constinArgument_doNotCondenseWhiteSpaces,
                                                                                 C_Lexique_arxml_5F_scanner * inCompiler) {
  outArgument_rootNode.drop () ; // Release 'out' argument
  GALGAS_string var_s_920 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("arxml_parser.galgas", 36)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_s_920.getter_length (SOURCE_FILE ("arxml_parser.galgas", 37)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("arxml_parser.galgas", 38)), GALGAS_string ("No character is allowed before XML header"), fixItArray1  COMMA_SOURCE_FILE ("arxml_parser.galgas", 38)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3C__3F_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 41)) ;
  GALGAS_lstring var_name_1098 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 42)) ;
  GALGAS_arxmlAttributeMap var_attributes_1133 = GALGAS_arxmlAttributeMap::constructor_emptyMap (SOURCE_FILE ("arxml_parser.galgas", 44)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_arxml_5F_parser_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_1202 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 47)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3D_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 48)) ;
      GALGAS_lstring var_attributeValue_1251 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_value) COMMA_SOURCE_FILE ("arxml_parser.galgas", 49)) ;
      {
      var_attributes_1133.setter_insertKey (var_attributeName_1202, var_attributeValue_1251, inCompiler COMMA_SOURCE_FILE ("arxml_parser.galgas", 50)) ;
      }
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3F__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 52)) ;
  GALGAS_arxmlNodeList var_nodes_1365 = GALGAS_arxmlNodeList::constructor_emptyList (SOURCE_FILE ("arxml_parser.galgas", 54)) ;
  nt_element_5F_list_ (var_nodes_1365, constinArgument_includeComments, constinArgument_doNotCondenseWhiteSpaces, inCompiler) ;
  outArgument_rootNode = GALGAS_arxmlElementNode::constructor_new (var_name_1098, var_attributes_1133, var_nodes_1365  COMMA_SOURCE_FILE ("arxml_parser.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_arxml_5F_start_5F_symbol_i0_parse (C_Lexique_arxml_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3C__3F_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_arxml_5F_parser_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 47)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3D_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 48)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_value) COMMA_SOURCE_FILE ("arxml_parser.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3F__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 52)) ;
  nt_element_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_element_5F_list_i1_ (GALGAS_arxmlNodeList & ioArgument_nodes,
                                                                        const GALGAS_bool constinArgument_includeComments,
                                                                        const GALGAS_bool constinArgument_doNotCondenseWhiteSpaces,
                                                                        C_Lexique_arxml_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_arxml_5F_parser_1 (inCompiler)) {
    case 2: {
      {
      routine_addText (ioArgument_nodes, constinArgument_doNotCondenseWhiteSpaces, inCompiler  COMMA_SOURCE_FILE ("arxml_parser.galgas", 77)) ;
      }
      nt_element_ (ioArgument_nodes, constinArgument_includeComments, constinArgument_doNotCondenseWhiteSpaces, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_element_5F_list_i1_parse (C_Lexique_arxml_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_arxml_5F_parser_1 (inCompiler)) {
    case 2: {
      nt_element_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_element_i2_ (GALGAS_arxmlNodeList & ioArgument_nodes,
                                                                const GALGAS_bool constinArgument_includeComments,
                                                                const GALGAS_bool /* constinArgument_doNotCondenseWhiteSpaces */,
                                                                C_Lexique_arxml_5F_scanner * inCompiler) {
  GALGAS_lstring var_commentString_2165 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_comment) COMMA_SOURCE_FILE ("arxml_parser.galgas", 94)) ;
  const enumGalgasBool test_0 = constinArgument_includeComments.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_nodes.addAssign_operation (GALGAS_arxmlCommentNode::constructor_new (var_commentString_2165  COMMA_SOURCE_FILE ("arxml_parser.galgas", 96))  COMMA_SOURCE_FILE ("arxml_parser.galgas", 96)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_element_i2_parse (C_Lexique_arxml_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_comment) COMMA_SOURCE_FILE ("arxml_parser.galgas", 94)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_element_i3_ (GALGAS_arxmlNodeList & ioArgument_nodes,
                                                                const GALGAS_bool constinArgument_includeComments,
                                                                const GALGAS_bool constinArgument_doNotCondenseWhiteSpaces,
                                                                C_Lexique_arxml_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 107)) ;
  GALGAS_lstring var_name_2490 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 108)) ;
  GALGAS_arxmlAttributeMap var_attributeMap_2524 = GALGAS_arxmlAttributeMap::constructor_emptyMap (SOURCE_FILE ("arxml_parser.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_arxml_5F_parser_2 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2593 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 112)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3D_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 113)) ;
      GALGAS_lstring var_attributeValue_2642 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_value) COMMA_SOURCE_FILE ("arxml_parser.galgas", 114)) ;
      {
      var_attributeMap_2524.setter_insertKey (var_attributeName_2593, var_attributeValue_2642, inCompiler COMMA_SOURCE_FILE ("arxml_parser.galgas", 115)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_arxmlNodeList var_nodeList_2737 = GALGAS_arxmlNodeList::constructor_emptyList (SOURCE_FILE ("arxml_parser.galgas", 118)) ;
  switch (select_arxml_5F_parser_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__2F__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 120)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 122)) ;
    nt_element_5F_list_ (var_nodeList_2737, constinArgument_includeComments, constinArgument_doNotCondenseWhiteSpaces, inCompiler) ;
    {
    routine_addText (var_nodeList_2737, constinArgument_doNotCondenseWhiteSpaces, inCompiler  COMMA_SOURCE_FILE ("arxml_parser.galgas", 128)) ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3C__2F_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 130)) ;
    GALGAS_lstring var_closingName_2976 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 131)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_closingName_2976.getter_string (SOURCE_FILE ("arxml_parser.galgas", 132)).objectCompare (var_name_2490.getter_string (SOURCE_FILE ("arxml_parser.galgas", 132)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_closingName_2976.getter_location (SOURCE_FILE ("arxml_parser.galgas", 133)), GALGAS_string ("incorrect closing tag </").add_operation (var_closingName_2976.getter_string (SOURCE_FILE ("arxml_parser.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("arxml_parser.galgas", 133)).add_operation (GALGAS_string ("> instead of </"), inCompiler COMMA_SOURCE_FILE ("arxml_parser.galgas", 134)).add_operation (var_name_2490.getter_string (SOURCE_FILE ("arxml_parser.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("arxml_parser.galgas", 134)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("arxml_parser.galgas", 134)), fixItArray2  COMMA_SOURCE_FILE ("arxml_parser.galgas", 133)) ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_nodes.addAssign_operation (GALGAS_arxmlElementNode::constructor_new (var_name_2490, var_attributeMap_2524, var_nodeList_2737  COMMA_SOURCE_FILE ("arxml_parser.galgas", 139))  COMMA_SOURCE_FILE ("arxml_parser.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_arxml_5F_parser::rule_arxml_5F_parser_element_i3_parse (C_Lexique_arxml_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 107)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 108)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_arxml_5F_parser_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 112)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3D_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 113)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_value) COMMA_SOURCE_FILE ("arxml_parser.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_arxml_5F_parser_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__2F__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 120)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 122)) ;
    nt_element_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3C__2F_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 130)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken_name) COMMA_SOURCE_FILE ("arxml_parser.galgas", 131)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_arxml_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("arxml_parser.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_arxmlElementNode::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arxmlElementNode * p = (const cPtr_arxmlElementNode *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arxmlElementNode) ;
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_attributes.objectCompare (p->mAttribute_attributes) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_enclosedNodes.objectCompare (p->mAttribute_enclosedNodes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_arxmlElementNode::objectCompare (const GALGAS_arxmlElementNode & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlElementNode::GALGAS_arxmlElementNode (void) :
GALGAS_arxmlNode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlElementNode GALGAS_arxmlElementNode::constructor_default (LOCATION_ARGS) {
  return GALGAS_arxmlElementNode::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_arxmlAttributeMap::constructor_emptyMap (HERE),
                                                   GALGAS_arxmlNodeList::constructor_emptyList (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlElementNode::GALGAS_arxmlElementNode (const cPtr_arxmlElementNode * inSourcePtr) :
GALGAS_arxmlNode (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arxmlElementNode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlElementNode GALGAS_arxmlElementNode::constructor_new (const GALGAS_lstring & inAttribute_name,
                                                                  const GALGAS_arxmlAttributeMap & inAttribute_attributes,
                                                                  const GALGAS_arxmlNodeList & inAttribute_enclosedNodes
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arxmlElementNode result ;
  if (inAttribute_name.isValid () && inAttribute_attributes.isValid () && inAttribute_enclosedNodes.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arxmlElementNode (inAttribute_name, inAttribute_attributes, inAttribute_enclosedNodes COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arxmlElementNode::getter_name (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arxmlElementNode * p = (const cPtr_arxmlElementNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arxmlElementNode) ;
    result = p->mAttribute_name ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_arxmlElementNode::getter_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlAttributeMap GALGAS_arxmlElementNode::getter_attributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_arxmlAttributeMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_arxmlElementNode * p = (const cPtr_arxmlElementNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arxmlElementNode) ;
    result = p->mAttribute_attributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlAttributeMap cPtr_arxmlElementNode::getter_attributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_attributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlNodeList GALGAS_arxmlElementNode::getter_enclosedNodes (UNUSED_LOCATION_ARGS) const {
  GALGAS_arxmlNodeList result ;
  if (NULL != mObjectPtr) {
    const cPtr_arxmlElementNode * p = (const cPtr_arxmlElementNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arxmlElementNode) ;
    result = p->mAttribute_enclosedNodes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlNodeList cPtr_arxmlElementNode::getter_enclosedNodes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_enclosedNodes ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @arxmlElementNode class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_arxmlElementNode::cPtr_arxmlElementNode (const GALGAS_lstring & in_name,
                                              const GALGAS_arxmlAttributeMap & in_attributes,
                                              const GALGAS_arxmlNodeList & in_enclosedNodes
                                              COMMA_LOCATION_ARGS) :
cPtr_arxmlNode (THERE),
mAttribute_name (in_name),
mAttribute_attributes (in_attributes),
mAttribute_enclosedNodes (in_enclosedNodes) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_arxmlElementNode::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arxmlElementNode ;
}

void cPtr_arxmlElementNode::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@arxmlElementNode:" ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_attributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_enclosedNodes.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_arxmlElementNode::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arxmlElementNode (mAttribute_name, mAttribute_attributes, mAttribute_enclosedNodes COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @arxmlElementNode type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arxmlElementNode ("arxmlElementNode",
                                         & kTypeDescriptor_GALGAS_arxmlNode) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arxmlElementNode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arxmlElementNode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arxmlElementNode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arxmlElementNode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlElementNode GALGAS_arxmlElementNode::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_arxmlElementNode result ;
  const GALGAS_arxmlElementNode * p = (const GALGAS_arxmlElementNode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arxmlElementNode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arxmlElementNode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_arxmlCommentNode::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arxmlCommentNode * p = (const cPtr_arxmlCommentNode *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arxmlCommentNode) ;
  if (kOperandEqual == result) {
    result = mAttribute_comment.objectCompare (p->mAttribute_comment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_arxmlCommentNode::objectCompare (const GALGAS_arxmlCommentNode & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlCommentNode::GALGAS_arxmlCommentNode (void) :
GALGAS_arxmlNode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlCommentNode GALGAS_arxmlCommentNode::constructor_default (LOCATION_ARGS) {
  return GALGAS_arxmlCommentNode::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlCommentNode::GALGAS_arxmlCommentNode (const cPtr_arxmlCommentNode * inSourcePtr) :
GALGAS_arxmlNode (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arxmlCommentNode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlCommentNode GALGAS_arxmlCommentNode::constructor_new (const GALGAS_lstring & inAttribute_comment
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arxmlCommentNode result ;
  if (inAttribute_comment.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arxmlCommentNode (inAttribute_comment COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arxmlCommentNode::getter_comment (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arxmlCommentNode * p = (const cPtr_arxmlCommentNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arxmlCommentNode) ;
    result = p->mAttribute_comment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_arxmlCommentNode::getter_comment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_comment ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @arxmlCommentNode class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_arxmlCommentNode::cPtr_arxmlCommentNode (const GALGAS_lstring & in_comment
                                              COMMA_LOCATION_ARGS) :
cPtr_arxmlNode (THERE),
mAttribute_comment (in_comment) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_arxmlCommentNode::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arxmlCommentNode ;
}

void cPtr_arxmlCommentNode::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@arxmlCommentNode:" ;
  mAttribute_comment.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_arxmlCommentNode::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arxmlCommentNode (mAttribute_comment COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @arxmlCommentNode type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arxmlCommentNode ("arxmlCommentNode",
                                         & kTypeDescriptor_GALGAS_arxmlNode) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arxmlCommentNode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arxmlCommentNode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arxmlCommentNode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arxmlCommentNode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlCommentNode GALGAS_arxmlCommentNode::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_arxmlCommentNode result ;
  const GALGAS_arxmlCommentNode * p = (const GALGAS_arxmlCommentNode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arxmlCommentNode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arxmlCommentNode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_arxmlTextNode::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arxmlTextNode * p = (const cPtr_arxmlTextNode *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arxmlTextNode) ;
  if (kOperandEqual == result) {
    result = mAttribute_text.objectCompare (p->mAttribute_text) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_arxmlTextNode::objectCompare (const GALGAS_arxmlTextNode & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlTextNode::GALGAS_arxmlTextNode (void) :
GALGAS_arxmlNode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlTextNode GALGAS_arxmlTextNode::constructor_default (LOCATION_ARGS) {
  return GALGAS_arxmlTextNode::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlTextNode::GALGAS_arxmlTextNode (const cPtr_arxmlTextNode * inSourcePtr) :
GALGAS_arxmlNode (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arxmlTextNode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlTextNode GALGAS_arxmlTextNode::constructor_new (const GALGAS_lstring & inAttribute_text
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arxmlTextNode result ;
  if (inAttribute_text.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arxmlTextNode (inAttribute_text COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arxmlTextNode::getter_text (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arxmlTextNode * p = (const cPtr_arxmlTextNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arxmlTextNode) ;
    result = p->mAttribute_text ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_arxmlTextNode::getter_text (UNUSED_LOCATION_ARGS) const {
  return mAttribute_text ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @arxmlTextNode class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_arxmlTextNode::cPtr_arxmlTextNode (const GALGAS_lstring & in_text
                                        COMMA_LOCATION_ARGS) :
cPtr_arxmlNode (THERE),
mAttribute_text (in_text) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_arxmlTextNode::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arxmlTextNode ;
}

void cPtr_arxmlTextNode::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@arxmlTextNode:" ;
  mAttribute_text.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_arxmlTextNode::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arxmlTextNode (mAttribute_text COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @arxmlTextNode type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arxmlTextNode ("arxmlTextNode",
                                      & kTypeDescriptor_GALGAS_arxmlNode) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arxmlTextNode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arxmlTextNode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arxmlTextNode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arxmlTextNode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arxmlTextNode GALGAS_arxmlTextNode::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arxmlTextNode result ;
  const GALGAS_arxmlTextNode * p = (const GALGAS_arxmlTextNode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arxmlTextNode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arxmlTextNode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (void) :
mAttribute_data () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::~ GALGAS_gtlDataList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (const GALGAS_gtlData & inOperand0) :
mAttribute_data (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element GALGAS_gtlDataList_2D_element::constructor_new (const GALGAS_gtlData & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlDataList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlDataList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlDataList_2D_element::objectCompare (const GALGAS_gtlDataList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_data.objectCompare (inOperand.mAttribute_data) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlDataList_2D_element::isValid (void) const {
  return mAttribute_data.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlDataList_2D_element::drop (void) {
  mAttribute_data.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlDataList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @gtlDataList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_data.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlDataList_2D_element::getter_data (UNUSED_LOCATION_ARGS) const {
  return mAttribute_data ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlDataList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDataList_2D_element ("gtlDataList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDataList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDataList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element GALGAS_gtlDataList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlDataList_2D_element result ;
  const GALGAS_gtlDataList_2D_element * p = (const GALGAS_gtlDataList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDataList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDataList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::~ GALGAS_gtlVarMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_gtlData & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element GALGAS_gtlVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_gtlData & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlVarMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlVarMap_2D_element::objectCompare (const GALGAS_gtlVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlVarMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @gtlVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlVarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlVarMap_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlVarMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlVarMap_2D_element ("gtlVarMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlVarMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlVarMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element GALGAS_gtlVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlVarMap_2D_element result ;
  const GALGAS_gtlVarMap_2D_element * p = (const GALGAS_gtlVarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

