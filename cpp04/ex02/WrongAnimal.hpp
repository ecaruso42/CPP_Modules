#pragma once
#include <string>
#include <iostream>

class WrongAnimal{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator = (const WrongAnimal& other);
		virtual ~WrongAnimal();
		WrongAnimal(std::string type);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};