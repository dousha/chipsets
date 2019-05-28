//
// Created by dousha on 19-5-27.
//

#ifndef CHIPSETS_BYTECODECOMPILER_H
#define CHIPSETS_BYTECODECOMPILER_H

#include <iostream>

#include "ByteCodeBlob.h"

class ByteCodeCompiler {
public:
	ByteCodeBlob compile(const std::istream& stream);
};


#endif //CHIPSETS_BYTECODECOMPILER_H
