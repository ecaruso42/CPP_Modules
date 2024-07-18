#pragma once
#include <string>
#include <iostream>

class Animal{
	protected:
		std::string _Type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator = (const Animal& other);
		~Animal();
		Animal(std::string type);

		void makeSound();
};