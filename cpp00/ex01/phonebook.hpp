#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "contact.hpp"

class Phonebook
{
	private:
		Contact contact[8];
		int	count;

	public:
		Phonebook();
		~Phonebook();
		void Add();
		void Search();
};