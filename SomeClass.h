#ifndef SOMECLASS_H
#define SOMECLASS_H

//Some fixed comment
class SomeClass
{
public:
    SomeClass(const int someIntData);
	~SomeClass() = default;

    int someIntData() const;
    void printSomeIntData() const;

private:
    int someIntData_ = 0;
};

#endif // SOMECLASS_H
