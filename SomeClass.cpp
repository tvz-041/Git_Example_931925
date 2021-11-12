#include <iostream>

#include "SomeClass.h"

SomeClass::SomeClass(const int someIntData)
{
    someIntData_ = someIntData;
}

int SomeClass::someIntData() const
{
	return someIntData_;
}

void SomeClass::printSomeIntData() const
{
	std::cout << someIntData_;
}
