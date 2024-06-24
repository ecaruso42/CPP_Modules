#pragma once

#include <string>
#include <stdlib.h>

class Contact
{
	private:
		std::string name;
		std::string l_name;
		std::string nick;
		std::string p_nbr;
		std::string drk_scrt;

	public:
		Contact();
		~Contact();
		void SetFirstName();
		void SetLastName();
		void SetNick();
		void SetPhoneNumber();
		void SetDarkSecret();

		std::string GetFirstName() const;
		std::string GetLastName() const;
		std::string GetNick() const;
		std::string GetPhoneNumber() const;
		std::string GetDarkSecret() const;
};