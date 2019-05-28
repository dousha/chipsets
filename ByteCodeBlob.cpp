//
// Created by dousha on 19-5-26.
//

#include "ByteCodeBlob.h"

const ByteCodeBlob &ByteCodeBlob::operator<<(uint8_t byte) {
	this->binary.push_back(byte);
	return *this;
}
