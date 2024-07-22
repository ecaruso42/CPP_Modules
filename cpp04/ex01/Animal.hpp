#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator = (const Animal& other);
		virtual ~Animal();
		Animal(std::string type);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};