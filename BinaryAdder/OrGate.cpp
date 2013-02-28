//
//  OrGate.cpp
//  BinaryAdder
//
//  Created by Joel Clark on 28/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#include "OrGate.h"

namespace gates
{
    
    OrGate::OrGate() {
        //
    }
    
    OrGate::OrGate(bool inputA, bool inputB) : LogicGate(inputA, inputB) {
        
    }
    
    void OrGate::setOutput() {
        bool calculatedOutput = LogicGate::getInputA() || LogicGate::getInputB();
        LogicGate::setOutput(calculatedOutput);
    }
    
}