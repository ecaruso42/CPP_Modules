#include "Harl.hpp"

int main(int argc, char **argv){
	Harl 		harl;
	std::string level;

	if (argc == 2)
		harl.complain(argv[1]);
	else
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	return (0);
}