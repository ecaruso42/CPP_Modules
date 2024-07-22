#include "Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
	std::cout << "Default constructor for " << this->_type << " called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

Cat& Cat::operator = (const Cat& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Destructor for " << this->_type << " called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Miao Miao" << std::endl;
}