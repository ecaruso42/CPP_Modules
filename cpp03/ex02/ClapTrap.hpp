#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <typeinfo>

class ClapTrap
{
	protected:
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator = (const ClapTrap& other);
		~ClapTrap();
		ClapTrap(std::string name);
		int GetHP();
		int	GetEP();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};