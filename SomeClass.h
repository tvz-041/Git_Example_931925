#ifndef SOMECLASS_H
#define SOMECLASS_H

//Some fixed comment
class SomeClass
{
public:
    SomeClass(const bool someBoolData);
	~SomeClass() = default;

	int someBoolData() const;
	void printSomeBoolData() const;

private:
	bool someBoolData_ = false;
};

#endif // SOMECLASS_H
