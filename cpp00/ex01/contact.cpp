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
	std::getline(std::cin, this->name);
	if (name.empty()){
		system("clear");
		std::cout << "Empty name" << std::endl;
	}
}

void Contact::SetLastName(){
	std::cout << "Insert last name:" << std::endl;
	std::getline(std::cin, this->l_name);
	if (l_name.empty()){
		system("clear");
		std::cout << "Empty last name" << std::endl;
	}
}

void Contact::SetNick(){
	std::cout << "Insert nick:" << std::endl;
	std::getline(std::cin, this->nick);
	if (nick.empty()){
		system("clear");
		std::cout << "Empty nick" << std::endl;
	}
}

void Contact::SetPhoneNumber(){
	std::cout << "Insert phone number:" << std::endl;
	std::getline(std::cin, this->p_nbr);
	if (p_nbr.empty()){
		system("clear");
		std::cout << "Empty phone number" << std::endl;
	}
	for (int i = 0; p_nbr[i] != '\0'; i++){
		if(!isdigit(p_nbr[i])){
			std::cout << "Error: not a digit" << std::endl;
			p_nbr.resize(0);
			break;
		}
	}
}

void Contact::SetDarkSecret(){
	std::cout << "Insert dark secret:" << std::endl;
	std::getline(std::cin, this->drk_scrt);
	if (drk_scrt.empty()){
		system("clear");
		std::cout << "Empty dark secret" << std::endl;
	}
}

std::string Contact::GetFirstName() const{
	return this->name;
}

std::string Contact::GetLastName() const{
	return this->l_name;
}

std::string Contact::GetNick() const{
	return this->nick;
}

std::string Contact::GetPhoneNumber() const{
	return this->p_nbr;
}

std::string Contact::GetDarkSecret() const{
	return this->drk_scrt;
}