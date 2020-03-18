#include "Sheep.h"

Sheep::Sheep()
{
	std::wcout << L"Sheep is Made" << std::endl;
}

Animal* Sheep::makeCopy()
{

	std::wcout << L"Sheep is Being Made" << std::endl;
	//Sheep* sheepObject = nullptr;

	// Calls the Animal super classes clone()
		// Then casts the results to Sheep
		//sheepObject = static_cast<Sheep*>(ICloneable::clone());
	//Animal* sheepObject = new Sheep();
	Animal* sheepObject = new Sheep();


	return sheepObject;
	
	}

std::wstring Sheep::toString()
{
	return L"Dolly is my Hero, Baaaaa";
}


	
