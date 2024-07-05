#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weapon;
		std::string _name;
	
	public:
		HumanA(std::string name, Weapon& newWeapon);
		~HumanA();
		void attack();
};