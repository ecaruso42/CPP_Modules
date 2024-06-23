#include "phonebook.hpp"

Phonebook::Phonebook() {
	std::cout << "Phonebook Created" << std::endl;
	count = 0;
}

Phonebook::~Phonebook() {
	std::cout << "PhoneBook Destroyed" << std::endl;
}

void	Phonebook::Add() {
	Contact	newContact;

	system("clear");
	newContact.SetFirstName();
	if(newContact.GetFirstName().empty()) return;
	newContact.SetLastName();
	if(newContact.GetLastName().empty()) return;
	newContact.SetNick();
	if(newContact.GetNick().empty()) return;
	newContact.SetPhoneNumber();
	if(newContact.GetPhoneNumber().empty()) return;
	newContact.SetDarkSecret();
	if(newContact.GetDarkSecret().empty()) return;
}