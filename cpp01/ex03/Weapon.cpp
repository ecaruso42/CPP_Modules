#include "Weapon.hpp"

Weapon::Weapon(){
	std::cout << "Weapon has been created" << std::endl;
}

Weapon::Weapon(std::string type){
	std::cout << "Weapon string has been created" << std::endl;
	this->_type = type;
}

Weapon::~Weapon(){
	std::cout << "Weapon has been destroyed" << std::endl;
}

std:: string Weapon::getType(){
	return this->_type;
}

void Weapon::setType(std::string type){
	this->_type = type;
}