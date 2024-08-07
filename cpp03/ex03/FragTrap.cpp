#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

FragTrap& FragTrap::operator = (const FragTrap& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_Name = other._Name;
		this->_AttackDamage = other._AttackDamage;
		this->_EnergyPoints = other._EnergyPoints;
		this->_HitPoints = other._HitPoints;
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor for " << this->_Name << " called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "Non_default FragTrap constructor for " << name << " called" << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "Ciro, Gennaro, Concetta and Carmine high-five each other, this fills their heart with determination" << std::endl;
}