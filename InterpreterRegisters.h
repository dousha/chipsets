//
// Created by dousha on 19-6-6.
//

#ifndef CHIPSETS_INTERPRETERREGISTERS_H
#define CHIPSETS_INTERPRETERREGISTERS_H

#include <cstdint>
#include <iostream>
#include <string>
#include <array>

enum InterpreterRegisterType {
	INTERNAL_BIT,
	INTERNAL_BYTE,
	GPIO_BIT,
	XBUS_BYTE,
};

class InterpreterRegister {
public:
	InterpreterRegister(enum InterpreterRegisterType type);
	void write(uint8_t data);
	uint8_t read(uint8_t data);
private:
	uint8_t value;
};

class InterpreterRegisters {
public:
	InterpreterRegisters(const std::istream& configuration);
	uint8_t readRegister(const uint8_t index);
	void writeRegister(const uint8_t index, const uint8_t value);
private:
	std::array<InterpreterRegister&, 16> registers;
};

#endif //CHIPSETS_INTERPRETERREGISTERS_H
