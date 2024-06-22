#include "phonebook.hpp"

Phonebook::Phonebook() {
	count = 0;
}

Phonebook::~Phonebook() {
	std::cout << "PhoneBook Destroyed" << std::endl;
}

void	Phonebook::Add() {
	Contact	newContact;

	system("clear");
	newContact.SetFirstName();
}