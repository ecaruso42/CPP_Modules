#include "Cat.hpp"
#include "Dog.hpp"
//da testare il copy constructor
int main(void){
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;
	delete i;

	AAnimal* pack[10];
	for(int i = 0; i < 5; i++){
		pack[i] = new Dog();
	}
	for(int i = 5; i < 10; i++){
		pack[i] = new Cat();
	}
	for(int i = 0; i < 10; i++){
		delete pack[i];
	}
	return 0;
}