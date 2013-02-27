//
//  FullAdder.h
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//
//  This header file defines the interface for the class FullAdder
//

#ifndef BinaryAdder_FullAdder_h
#define BinaryAdder_FullAdder_h

namespace binaryadder
{
    class FullAdder
    {
    public:
        FullAdder();
        void fullAdd(bool carryIn, bool inputA, bool inputB);
        bool getSum();
        bool getCarry();
    private:
        bool sum_, carry_;
        
    };
}

#endif
