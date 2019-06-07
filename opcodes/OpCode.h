//
// Created by dousha on 19-6-6.
//

#ifndef CHIPSETS_OPCODE_H
#define CHIPSETS_OPCODE_H

#include "../ByteCodeInterpreter.h"

class OpCode {
public:
	virtual void operate(ByteCodeInterpreter& interpreter) = 0;
};

#endif //CHIPSETS_OPCODE_H
