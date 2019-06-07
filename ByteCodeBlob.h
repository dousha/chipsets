//
// Created by dousha on 19-5-26.
//

#ifndef CHIPSETS_BYTECODEBLOB_H
#define CHIPSETS_BYTECODEBLOB_H

#include <cstdint>
#include <vector>
#include <iostream>
#include <fstream>

class ByteCodeBlob {
public:
	const ByteCodeBlob& operator<<(uint8_t byte);
	bool writeToStream(std::ostream& stream);
	bool readFromStream(std::istream& stream);
	bool writeToFile(std::ofstream& stream);
	bool readFromFile(std::ifstream& stream);
	const ByteCodeBlob& operator>>(uint8_t& byte);
private:
	std::vector<uint8_t> binary;
	size_t pos;
};


#endif //CHIPSETS_BYTECODEBLOB_H
