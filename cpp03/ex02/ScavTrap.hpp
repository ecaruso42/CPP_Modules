#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator = (const ScavTrap& other);
		~ScavTrap();
		ScavTrap(std::string name);

		void	guardGate();
};