#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Default construcotr called" << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

Animal& Animal::operator = (const Animal& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_Type = other._Type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout << "Destructor for " << _Type << " called" << std::endl;
}

Animal::Animal(std::string type){
	
}