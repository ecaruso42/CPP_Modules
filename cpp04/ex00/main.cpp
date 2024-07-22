#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	const WrongAnimal* WrongA = new WrongAnimal();
	const WrongCat* WrongC = new WrongCat();
	WrongC->makeSound();
	WrongA->makeSound();
	delete WrongC;
	delete WrongA;

	return 0;
}