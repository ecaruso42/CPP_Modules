#include "Zombie.hpp"

Zombie::Zombie(){
	this->_name = "AO";
	std::cout << "Zombie has been created" << std::endl;
}

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << "Zombie named " << name << " has been created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie named " << _name << " has been destroyed" << std::endl;
}