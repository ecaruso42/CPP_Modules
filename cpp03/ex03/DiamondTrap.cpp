#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other){
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &other){
		this->_Name = other._Name;
		this->_AttackDamage = other._AttackDamage;
		this->_EnergyPoints = other._EnergyPoints;
		this->_HitPoints = other._HitPoints;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor for " << this->_Name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name){
	std::cout << "Non_default DiamondTrap constructor for " << name << " called" << std::endl;
	this->name = name;
	this->ClapTrap::_Name = name + "_clap_name";
	this->_HitPoints = this->FragTrap::_HitPoints;
	this->_EnergyPoints = this->ScavTrap::_EnergyPoints;
	this->_AttackDamage = this->FragTrap::_AttackDamage;
}

void	DiamondTrap::WhoAmI(void){
	std::cout << "DiamondTrap name is " << this->name << std::endl;
	std::cout << "ClapTrap name is " << this->ClapTrap::_Name << std::endl;
}