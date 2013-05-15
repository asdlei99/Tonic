//
//  ControlParameter.cpp
//  Tonic
//
//  Created by Nick Donaldson on 5/14/13.
//  Copyright (c) 2013 Nick Donaldson. All rights reserved.
//

#include "ControlParameter.h"

namespace Tonic { namespace Tonic_{
  
  ControlParameter_::ControlParameter_() :
    name_(""),
    displayName_(""),
    min_(0),
    max_(1),
    type_(ControlParameterTypeContinuous),
    logBase_(2.f),
    isLogarithmic_(false)
  {
    
  }
  
  void ControlParameter_::setNormalizedValue(TonicFloat normVal){
    if (isLogarithmic_){
      
    }
    else{
      setValue(map(normVal, 0.f, 1.f, min_, max_, true));
    }
  }
  
  TonicFloat ControlParameter_::getNormalizedValue(){
    if (isLogarithmic_){
      // TODO:
    }
    else{
      return map(value_, min_, max_, 0.f, 1.f, true);
    }
    return 0;
  }
  
  
} // Namespace Tonic_
  
  ControlParameter::ControlParameter(string name){
    gen()->setName(name);
  }

  string ControlParameter::getName(){
    return gen()->getName();
  }
  
  ControlParameter &  ControlParameter::name(string name){
    gen()->setName(name);
    return *this;
  }
  
  string ControlParameter::getDisplayName(){
    return gen()->getDisplayName();
  }
  
  ControlParameter &  ControlParameter::displayName(string displayName){
    gen()->setDisplayName(displayName);
    return *this;
  }
  
  TonicFloat ControlParameter::getValue(){
    return gen()->getValue();
  }
  
  ControlParameter &  ControlParameter::value(TonicFloat value){
    gen()->setValue(value);
    return *this;
  }
  
  TonicFloat ControlParameter::getMin(){
    return gen()->getMin();
  }

  ControlParameter &  ControlParameter::min(TonicFloat min){
    gen()->setMin(min);
    return *this;
  }
  
  ControlParameter &  ControlParameter::max(TonicFloat max){
    gen()->setMax(max);
    return *this;
  }
  
  TonicFloat ControlParameter::getMax(){
    return gen()->getMax();
  }
  
  ControlParameter &  ControlParameter::parameterType(ControlParameterType type){
    gen()->setType(type);
    return *this;
  }
  
  ControlParameterType  ControlParameter::getParameterType(){
    return gen()->getType();
  }
  
  ControlParameter &  ControlParameter::logarithmic(bool isLogarithmic){
    gen()->setIsLogarithmic(isLogarithmic);
    return *this;
  }
  
  bool ControlParameter::getIsLogarithmic(){
    return gen()->getIsLogarithmic();
  }
  
  ControlParameter &  ControlParameter::logBase(TonicFloat logBase){
    gen()->setLogBase(logBase);
    return *this;
  }
  
  TonicFloat ControlParameter::getLogBase(){
    return gen()->getLogBase();
  }
  
} // Namespace Tonic
