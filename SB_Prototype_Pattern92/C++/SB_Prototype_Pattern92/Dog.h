#ifndef DOG
#define DOG

#include "Animal.h"
#include <string>
#include <iostream>

class Dog : public Animal
{

public:
	Dog();

	Animal* makeCopy() override;

	virtual std::wstring toString();

};


#endif	//#ifndef DOG
