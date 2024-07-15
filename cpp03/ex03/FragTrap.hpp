#pragma once
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	public:
		FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap& operator = (const FragTrap& other);
		~FragTrap();
		FragTrap(std::string name);

		void	highFivesGuys(void);
};