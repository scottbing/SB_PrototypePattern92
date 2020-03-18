#include "Dog.h"

Dog::Dog()
{
	std::wcout << L"Dog is Made" << std::endl;
}

Animal* Dog::makeCopy()
{

	std::wcout << L"Dog is Being Made" << std::endl;
	//Dog* dogObject = nullptr;

	// Calls the Animal super classes clone()
		// Then casts the results to Dog
		//dogObject = static_cast<Dog*>(__super::clone());
	Animal* dogObject = new Dog();

	return dogObject;
}

std::wstring Dog::toString()
{
	return L"Miss Violet is my Hero, Bark Growl Bark";
}

	

