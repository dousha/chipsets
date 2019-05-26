//
// Created by dousha on 19-5-26.
//

#ifndef CHIPSETS_BYTECODEINTERPRETER_H
#define CHIPSETS_BYTECODEINTERPRETER_H

#include <stack>
#include <cstdint>

#include "InterpreterFlagRegister.h"
#include "ByteCodeBlob.h"

class ByteCodeInterpreter {
public:
	ByteCodeInterpreter(ByteCodeBlob& blob);
	bool nextInstruction();
	InterpreterFlagRegister& getFlags();
private:
	uint32_t instructionOffset;
	ByteCodeBlob program;
	InterpreterFlagRegister flags;
	std::stack<uint8_t> stack;
};


#endif //CHIPSETS_BYTECODEINTERPRETER_H
