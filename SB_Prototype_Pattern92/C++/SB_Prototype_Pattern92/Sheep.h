#ifndef SHEEP
#define SHEEP

#include "Animal.h"
#include <string>
#include <iostream>


class Sheep : public Animal
{

public:
	Sheep();

	Animal* makeCopy() override;

	virtual std::wstring toString();


};

#endif	//#ifndef SHEEP
