#pragma once

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string getType();
		void setType(std::string type);
};