#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	std::cout << "HumanB has been created" << std::endl;
	this->_name = name;
}

HumanB::~HumanB(){
	std::cout << "HumanB has been destoyed" << std::endl;
}

void HumanB::attack(){
	std::cout << _name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon){
	this->weapon = &newWeapon;
}