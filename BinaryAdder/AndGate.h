//
//  AndGate.h
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#ifndef __BinaryAdder__AndGate__
#define __BinaryAdder__AndGate__

#include "LogicGate.h"

namespace gates
{
    class AndGate : public LogicGate
    {
    public:
        AndGate();
        AndGate(bool inputA, bool inputB);
        void setInputs(bool inputA, bool inputB);
    private:
        void setOutput();
    };
}

#endif /* defined(__BinaryAdder__AndGate__) */
