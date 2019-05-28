//
// Created by dousha on 19-5-26.
//

#ifndef CHIPSETS_BYTECODEBLOB_H
#define CHIPSETS_BYTECODEBLOB_H

#include <cstdint>
#include <vector>
#include <iostream>

class ByteCodeBlob {
	// TODO
public:
	const ByteCodeBlob& operator<<(uint8_t byte);
	bool writeToStream(const std::ostream& stream);
	bool readFromStream(const std::istream& stream);
private:
	std::vector<uint8_t> binary;
};


#endif //CHIPSETS_BYTECODEBLOB_H
