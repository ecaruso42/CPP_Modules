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
	if (count < 8) {
		contact[count] = newContact;
		count++;
	}
	else {
		for (int i = 1; i < 8; i++){
			contact[i - 1] = contact[i];
		}
		contact[7] = newContact;
	}
	system("clear");
	std::cout << "Contact saved :D" << std::endl;
}

void	Phonebook::Search() {
	std::string index;
	system("clear");
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < count; i++){
		std::cout << std::setw(10) << i+1 << "|"
				<< std::setw(10) << (contact[i].GetFirstName().length() > 10 ? contact[i].GetFirstName().substr(0,8) + "." : contact[i].GetFirstName()) << "|"
				<< std::setw(10) << (contact[i].GetLastName().length() > 10 ? contact[i].GetLastName().substr(0,8) + "." : contact[i].GetLastName()) << "|"
				<< std::setw(10) << (contact[i].GetNick().length() > 10 ? contact[i].GetNick().substr(0,8) + "." : contact[i].GetNick()) << "|" << std::endl;
	}
	std::cout << "\nWrite a number to expand the contact:";
	std::getline(std::cin, index);
	if (*index.c_str() == '\0'){
		system("clear");
		std::cout << "Error: Empty input, bruh :/\n" << std::endl;
		return ;
	}
	if (index.length() > 1) {
		system("clear");
		std::cout << "Error: one number is enough, bozo >:c\n" << std::endl;
	}
	else if (isdigit(atoi(index.c_str())) == 0) {
		int i = atoi(index.c_str());
		i -= 1;
		if (contact[i].GetFirstName().empty()) {
			system("clear");
			std::cout << "Error: contact of index [" << i + 1 << "] still not created\n" << std::endl;
			return ;
		}
		if (i >= 0 && i <= 7) {
			system("clear");
			std::cout << "NAME		:" << (contact[i].GetFirstName()) << std::endl
					<< "LAST NAME	:" << (contact[i].GetLastName()) << std::endl
					<< "NICKNAME	:" << (contact[i].GetNick()) << std::endl
					<< "NUMBER		:" << (contact[i].GetPhoneNumber()) << std::endl
					<< "DARK SECRET	:" << (contact[i].GetDarkSecret()) << std::endl << std::endl;
		}
		else {
			system("clear");
			std::cout << "Error: the specified index is out of range" << std::endl;
		}
	}
}