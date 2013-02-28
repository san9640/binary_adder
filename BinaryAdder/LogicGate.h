//
//  LogicGate.h
//  BinaryAdder
//
//  Created by Joel Clark on 27/02/2013.
//  Copyright (c) 2013 Joel Clark. All rights reserved.
//

#ifndef __BinaryAdder__LogicGate__
#define __BinaryAdder__LogicGate__

namespace gates {
    class LogicGate
    {
    public:
        LogicGate();
        LogicGate(bool inputA, bool inputB);
        bool getOutput();
        void setOutput(bool outputValue);
        void setInput(bool inputA, bool inputB);
        void setInputA(bool inputA);
        void setInputB(bool inputB);
        bool getInputA();
        bool getInputB();
    private:
        bool inputA_, inputB_, output_;
        void setOutput();
    };
}

#endif /* defined(__BinaryAdder__LogicGate__) */
