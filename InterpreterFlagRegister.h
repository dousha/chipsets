//
// Created by dousha on 19-5-26.
//

#ifndef CHIPSETS_INTERPRETERFLAGREGISTER_H
#define CHIPSETS_INTERPRETERFLAGREGISTER_H

#include <cstdint>

enum InterpreterFlag {
	CARRY = 0,
	SIGN = 1,
	ZERO = 2,
	FAULT = 3,
	FATAL = 4,
	INTERRUPT = 5,
	STACK = 6,
	USER = 7,
};

class InterpreterFlagRegister {
public:
	InterpreterFlagRegister();
	bool testForFlag(InterpreterFlag flag);
	void setFlag(InterpreterFlag flag);
	void clearFlag(InterpreterFlag flag);
private:
	uint8_t flags;
};


#endif //CHIPSETS_INTERPRETERFLAGREGISTER_H
