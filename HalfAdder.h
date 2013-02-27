//
//  BinaryAdder.h
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//
//  This header file defines the interface for the HalfAdder class
//

#ifndef BinaryAdder_BinaryAdder_h
#define BinaryAdder_BinaryAdder_h

namespace binaryadder
{
    
    class HalfAdder
    {
    public:
        HalfAdder();
        void halfAdd(bool inputA, bool inputB);
        bool getSum();
        bool getCarry();
    private:
        bool sum_, carry_;
    };
    
}

#endif
