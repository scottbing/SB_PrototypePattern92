#include "TestCloning.h"
#include "CloneFactory.h"
#include "Sheep.h"
#include "Dog.h"


//void TestCloning::main(std::vector<std::wstring>& args)
int main()
{

	// Handles routing makeCopy method calls to the
	// right subclasses of Animal

	CloneFactory* animalMaker = new CloneFactory();

	// Creates a new Sheep instance

	Sheep* sally = new Sheep();

	// Creates a clone of Sally and stores it in its own
	// memory location

	Sheep* clonedSheep = static_cast<Sheep*>(animalMaker->getClone(sally));

	// These are exact copies of each other

	std::wcout << sally << std::endl;

	std::wcout << clonedSheep << std::endl;

	std::wcout << L"Sally HashCode: " << &sally << std::endl;

	std::wcout << L"Clone HashCode: " <<  &clonedSheep << "\n" << std::endl;

	// Creates a new Dog instance

	Dog* Sophie = new Dog();

	// Creates a clone of Sally and stores it in its own
	// memory location

	Dog* clonedDog = static_cast<Dog*>(animalMaker->getClone(Sophie));

	// These are exact copies of each other

	std::wcout << Sophie << std::endl;

	std::wcout << clonedDog << std::endl;

	std::wcout << L"Miss Violet HashCode: " << &Sophie << std::endl;

	std::wcout << L"Clone HashCode: " << &clonedDog << std::endl;

	//JAVA TO C++ CONVERTER TODO TASK: A 'delete Sophie' statement was not added since Sophie was passed to a method or constructor. Handle memory management manually.
	//JAVA TO C++ CONVERTER TODO TASK: A 'delete sally' statement was not added since sally was passed to a method or constructor. Handle memory management manually.
	delete animalMaker;
}

	

