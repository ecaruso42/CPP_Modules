#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal& operator = (const AAnimal& other);
		virtual ~AAnimal();
		AAnimal(std::string type);

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};