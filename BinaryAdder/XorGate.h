//
//  XorGate.h
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#ifndef __BinaryAdder__XorGate__
#define __BinaryAdder__XorGate__

#include "LogicGate.h"

namespace gates
{
    class XorGate : public LogicGate
    {
    public:
        XorGate();
        XorGate(bool inputA, bool inputB);
        void setInputs(bool inputA, bool inputB);
    private:
        void setOutput();
    };
}

#endif /* defined(__BinaryAdder__XorGate__) */
