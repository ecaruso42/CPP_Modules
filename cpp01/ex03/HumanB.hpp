#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string _name;
	
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(class Weapon &newWeapon);
};