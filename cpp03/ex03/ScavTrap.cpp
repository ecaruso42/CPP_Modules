#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		*this = other;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor for " << this->_Name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Non_default Scavtrap constructor for " << name << " called" << std::endl;
}

void ScavTrap::guardGate(){
	static int flag = 0;

	if (flag == 0){
		std::cout << "Scavtrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
		flag = 1;
	}
	else{
		std::cout << "Scavtrap " << this->_Name << " is no more in Gate keeper mode" << std::endl;
		flag = 0;
	}
}