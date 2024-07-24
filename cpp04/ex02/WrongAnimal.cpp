#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->_type = "WrongAnimal";
	std::cout << "Default constructor for " << this->_type << " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	this->_type = type;
	std::cout << "Non-default constructor for " << this->_type << " called" << std::endl;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal makesound called" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return this->_type;
}