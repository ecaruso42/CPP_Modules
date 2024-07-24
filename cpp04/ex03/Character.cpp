#include "Character.hpp"

Character::Character(){
	std::cout << "Default constructor for Character called" << std::endl;
}

Character::Character(const Character& other) : Character(other){
	std::cout << "Copy constructor for Character called" << std::endl;
	*this = other;
	return ;
}

Character& Character::operator = (const Character& other){
	std::cout << "Copy assignment operator for Character called" << std::endl;
	if (this != &other){
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
			this->_slots[i] = other._slots[i]->clone();
	}
	return *this;
}

Character::~Character(){
	std::cout << "Destructor for Character called" << std::endl;
}