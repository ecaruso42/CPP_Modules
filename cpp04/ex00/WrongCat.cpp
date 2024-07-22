#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->_type = "WrongCat";
	std::cout << "Default constructor for " << this->_type << " called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

WrongCat& WrongCat::operator = (const WrongCat& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "Destructor for " << this->_type << " called" << std::endl;
}

void WrongCat::makeSound(void) const{
	std::cout << "Wrong Miao Miao" << std::endl;
}