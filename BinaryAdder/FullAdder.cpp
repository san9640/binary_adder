//
//  FullAdder.cpp
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//
//  This cpp file contains the implementaion of the FullAdder class
//

#include "FullAdder.h"
#include "HalfAdder.h"

namespace binaryadder {
    
    FullAdder::FullAdder() {
        sum_ = false;
        carry_ = false;
    }
    
    void FullAdder::fullAdd(bool carryIn, bool inputA, bool inputB) {
        // create two half adder objects
		HalfAdder halfAdders[2];
        
		// initial logic stage
		halfAdders[0].halfAdd(inputA, inputB);
		halfAdders[1].halfAdd(halfAdders[0].getSum(), carryIn);
        
		// output logic stage
		sum_ = halfAdders[1].getSum();
		carry_ = halfAdders[0].getCarry() | halfAdders[1].getCarry();

    }
    
    bool FullAdder::getCarry() {
        return carry_;
    }
    
    bool FullAdder::getSum() {
        return sum_;
    }
    
}