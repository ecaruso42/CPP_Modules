#include "phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	std::string inpt;
	while (true) {
		std::cout << "type ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, inpt)){
			std::cout << "^D" << std::endl;
			break;
		}
		if (inpt == "ADD"){
			phonebook.Add();
		}
		else if (inpt == "SEARCH"){
			phonebook.Search();
		}
		else if (inpt == "EXIT"){
			break;
		}
		else{
			std::cout << "Error: invalid input" << std::endl;
		}
	}
	return(0);
}