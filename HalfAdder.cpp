//
//  BinaryAdder.cpp
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#include "HalfAdder.h"

namespace binaryadder
{
    HalfAdder::HalfAdder() {
        sum_ = 0;
        carry_ = 0;
    }
    
    void HalfAdder::halfAdd(bool inputA, bool inputB) {
        // set the object's sum and carry values
		sum_ = inputA ^ inputB;
		carry_ = inputA & inputB;
    }
    
    bool HalfAdder::getCarry() {
        return carry_;
    }
    
    bool HalfAdder::getSum() {
        return sum_;
    }
    
}