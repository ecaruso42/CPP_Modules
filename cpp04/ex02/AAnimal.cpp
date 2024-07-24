#include "AAnimal.hpp"

AAnimal::AAnimal(){
	this->_type = "AAnimal";
	std::cout << "Default constructor for " << this->_type << " called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

AAnimal& AAnimal::operator = (const AAnimal& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "Destructor for AAnimal called" << std::endl;
}

AAnimal::AAnimal(std::string type){
	this->_type = type;
	std::cout << "Non-default constructor for " << this->_type << " called" << std::endl;
}

void AAnimal::makeSound(void) const{
	std::cout << "AAnimal makesound called" << std::endl;
}

std::string AAnimal::getType(void) const{
	return this->_type;
}