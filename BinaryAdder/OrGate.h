//
//  OrGate.h
//  BinaryAdder
//
//  Created by Joel Clark on 28/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#ifndef __BinaryAdder__OrGate__
#define __BinaryAdder__OrGate__

#include "LogicGate.h"

namespace gates
{
    class OrGate : public LogicGate
    {
    public:
        OrGate();
        OrGate(bool inputA, bool inputB);
    private:
        void setOutput();
    };
}

#endif /* defined(__BinaryAdder__OrGate__) */
