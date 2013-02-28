//
//  BinaryAdder.cpp
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//
//  This cpp file contains the implementation for the HalfAdder class
//

#include "HalfAdder.h"
#include "XorGate.h"
#include "AndGate.h"

namespace binaryadder
{
    HalfAdder::HalfAdder() {
        sum_ = 0;
        carry_ = 0;
    }
    
    void HalfAdder::halfAdd(bool inputA, bool inputB) {
        // set the object's sum and carry values
        sum_ = gates::XorGate(inputA, inputB).getOutput();
        carry_ = gates::AndGate(inputA, inputB).getOutput();
    }
    
    bool HalfAdder::getCarry() {
        return carry_;
    }
    
    bool HalfAdder::getSum() {
        return sum_;
    }
    
}