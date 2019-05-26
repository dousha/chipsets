//
// Created by dousha on 19-5-26.
//

#include "InterpreterFlagRegister.h"

InterpreterFlagRegister::InterpreterFlagRegister() {
	this->flags = 0;
}

bool InterpreterFlagRegister::testForFlag(InterpreterFlag flag) {
	return this->flags & (1u << flag);
}

void InterpreterFlagRegister::setFlag(InterpreterFlag flag) {
	this->flags |= (1u << flag);
}

void InterpreterFlagRegister::clearFlag(InterpreterFlag flag) {
	this->flags &= ~(1u << flag);
}
