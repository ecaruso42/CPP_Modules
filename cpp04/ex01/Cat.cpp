#include "Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
	this->_brain = new Brain();
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
		delete this->_brain;
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Destructor for " << this->_type << " called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Miao Miao" << std::endl;
}