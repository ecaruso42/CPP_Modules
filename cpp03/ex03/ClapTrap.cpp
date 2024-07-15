#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		*this = other;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor for " << _Name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Non_default ClapTrap constructor for " << name << " called" << std::endl;
	this->_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

int	ClapTrap::GetHP(){
	return this->_HitPoints;
}

int	ClapTrap::GetEP(){
	return this->_EnergyPoints;
}

void	ClapTrap::attack(const std::string& target){
	if (_EnergyPoints <= 0){
		std::cout << "ClapTrap " << _Name << " is too tired to attack" << std::endl;
	}
	else{
		_EnergyPoints -= 1;
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	_HitPoints -= amount;
	std::cout << "ClapTrap " << _Name << " lost " << amount << " hp" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_EnergyPoints <= 0){
		std::cout << "ClapTrap " << _Name << " is too tired to repair himself" << std::endl;
	}
	else{
		_EnergyPoints -= 1;
		_HitPoints += amount;
		std::cout << "ClapTrap " << _Name << " repaired himself by " << amount << " hp" << std::endl;
	}
}