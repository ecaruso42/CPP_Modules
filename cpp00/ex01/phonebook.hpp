#include <string>
#include <iostream>
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