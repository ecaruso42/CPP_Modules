#include "Animal.hpp"

Animal::Animal(){
	this->_type = "Animal";
	std::cout << "Default constructor for " << this->_type << " called" << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

Animal& Animal::operator = (const Animal& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout << "Destructor for Animal called" << std::endl;
}

Animal::Animal(std::string type){
	this->_type = type;
	std::cout << "Non-default constructor for " << this->_type << " called" << std::endl;
}

void Animal::makeSound(void) const{
	std::cout << "Animal makesound called" << std::endl;
}

std::string Animal::getType(void) const{
	return this->_type;
}