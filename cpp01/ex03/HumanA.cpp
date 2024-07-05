#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& newWeapon) : weapon(newWeapon) {
	std::cout << "HumanA has been created" << std::endl;
	this->_name = name;
	//this->weapon = newWeapon;
}

HumanA::~HumanA(){
	std::cout << "HumanA has been destroyed" << std::endl;
}

void HumanA::attack(){
	std::cout << _name << " attacks with their " << this->weapon.getType() << std::endl;
}