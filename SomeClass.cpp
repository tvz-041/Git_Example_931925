#include <iostream>

#include "SomeClass.h"

SomeClass::SomeClass(const bool someBoolData)
{
	someBoolData_ = someBoolData;
}

int SomeClass::someBoolData() const
{
	return someBoolData_;
}

void SomeClass::printSomeBoolData() const
{
	std::cout << someBoolData_;
}
