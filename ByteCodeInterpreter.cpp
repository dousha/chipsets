//
// Created by dousha on 19-5-26.
//

#include "ByteCodeInterpreter.h"

ByteCodeInterpreter::ByteCodeInterpreter(ByteCodeBlob& blob) {
	this->stack = std::stack<uint8_t>();
	this->instructionOffset = 0;
	this->flags = InterpreterFlagRegister();
	this->program = blob;
}

bool ByteCodeInterpreter::nextInstruction() {
	// TODO
}

InterpreterFlagRegister &ByteCodeInterpreter::getFlags() {
	return this->flags;
}
