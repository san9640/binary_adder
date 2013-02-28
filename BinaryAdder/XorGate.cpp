//
//  XorGate.cpp
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#include "XorGate.h"

namespace gates
{
    
    
    
    XorGate::XorGate() {
        
    }
    
    
    
    XorGate::XorGate(bool inputA, bool inputB) : LogicGate(inputA, inputB) {
        
    }
    
    
    
    void XorGate::setOutput() {
        bool calculatedOutput = LogicGate::getInputA() ^ LogicGate::getInputB();
        LogicGate::setOutput(calculatedOutput);
    }
    
    
    
}
