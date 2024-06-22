#include "contact.hpp"
#include <iostream>

Contact::Contact(){
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(){
	std::cout << "Contact destroyed" << std::endl;
}

void Contact::SetFirstName(){
	std::cout << "Insert name:" << std::endl;
	std::getline(std::cin, name);
	if (name.empty()){
		system("clear");
		std::cout << "Empty name" << std::endl;
	}
}