//
//  AndGate.cpp
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#include "AndGate.h"

namespace gates
{
    
    AndGate::AndGate() {
        //
    }
    
    AndGate::AndGate(bool inputA, bool inputB) : LogicGate(inputA, inputB) {
        AndGate::setOutput();
    }
    
    void AndGate::setOutput() {
        bool calculatedOutput = LogicGate::getInputA() & LogicGate::getInputB();
        LogicGate::setOutput(calculatedOutput);
    }
    
}
