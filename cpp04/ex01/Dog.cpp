#include "Dog.hpp"

Dog::Dog(){
	this->_type = "Dog";
	std::cout << "Default constructor for " << this->_type << " called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

Dog& Dog::operator = (const Dog& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

Dog::~Dog(){
	std::cout << "Destructor for " << this->_type << " called" << std::endl;
}

void Dog::makeSound(void) const{
	std::cout << "Bau Bau" << std::endl;
}