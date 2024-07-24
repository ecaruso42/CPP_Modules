#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default constructor for Brain called" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

Brain& Brain::operator = (const Brain& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Destructor for Brain called" << std::endl;
}
