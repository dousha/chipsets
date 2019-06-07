//
// Created by dousha on 19-5-26.
//

#include "ByteCodeBlob.h"

const ByteCodeBlob &ByteCodeBlob::operator<<(uint8_t byte) {
	this->binary.push_back(byte);
	return *this;
}

bool ByteCodeBlob::writeToStream(std::ostream &stream) {
	if (stream.bad()) {
		return false;
	}
	for (auto iter = this->binary.begin(); iter < this->binary.end(); iter++) {
		stream << *iter;
	}
	return true;
}

bool ByteCodeBlob::readFromStream(std::istream &stream) {
	this->binary.clear();
	if (stream.bad()) {
		return false;
	}
	uint8_t byte = 0;
	while (!stream.eof()) {
		stream >> byte;
		this->binary.push_back(byte);
	}
	return true;
}

bool ByteCodeBlob::writeToFile(std::ofstream &stream) {
	return writeToStream(stream);
}

bool ByteCodeBlob::readFromFile(std::ifstream &stream) {
	if (stream.bad())
		return false;
	return readFromStream(stream);
}

const ByteCodeBlob &ByteCodeBlob::operator>>(uint8_t &byte) {
	byte = this->binary[this->pos];
	++this->pos;
	return *this;
}
