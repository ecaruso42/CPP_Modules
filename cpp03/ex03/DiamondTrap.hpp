#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator = (const DiamondTrap& other);
		~DiamondTrap();
		DiamondTrap(std::string name);

		void	WhoAmI();
};