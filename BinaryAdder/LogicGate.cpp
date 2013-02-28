//
//  LogicGate.cpp
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#include "LogicGate.h"

namespace gates
{
    
    
    
    LogicGate::LogicGate() {
        inputA_ = 0;
        inputB_ = 0;
    }
    
    
    
    LogicGate::LogicGate(bool inputA, bool inputB) {
        inputA_ = inputA;
        inputB_ = inputB;
    }
    
    
    
    bool LogicGate::getOutput() {
        return output_;
    }
    
    
    
    void LogicGate::setOutput(bool outputValue) {
        output_ = outputValue;
    }
    
    
    
    void LogicGate::setInputs(bool inputA, bool inputB) {
        inputA_ = inputA;
        inputB_ = inputB;
        LogicGate::setOutput();
    }
    
    
    
    void LogicGate::setInputA(bool inputA) {
        inputA_ = inputA;
    }
    
    
    
    void LogicGate::setInputB(bool inputB){
        inputB_ = inputB;
    }
    
    
    
    bool LogicGate::getInputA() {
        return inputA_;
    }
    
    
    
    bool LogicGate::getInputB() {
        return inputB_;
    }
    
    
    void LogicGate::setOutput() {
        // this function should be overridden in child classes
    }
}