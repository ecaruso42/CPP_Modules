#include "Harl.hpp"

int	main(){
	Harl Harl;
    std::string level;

	while (1)
	{
		std::cout << "Enter the level of your complaint (DEBUG, INFO, WARNING, ERROR): ";
		std::getline(std::cin, level);
		if (std::cin.eof())
			break ;
		if (level == "EXIT")
			break ;
		Harl.complain(level);
	}
	return 0;
}