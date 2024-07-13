#include "ClapTrap.hpp"

int	main(void){
	ClapTrap Gennaro("Gennaro");
	std::cout << "ClapTrap Gennaro and his nemesis, Pasquale, has been created" << std::endl;
	std::string input;
	int flag = 0;

	while (true){
		std::cout << "ClapTrap Gennaro has " << Gennaro.GetHP() << " HP and " << Gennaro.GetEP() << " EP" << std::endl;
		std::cout << "Choose your move: Attack, Repair or RunAway: " << std::endl;
		std::getline(std::cin, input);
		system("clear");
		if (input == "Attack"){
			Gennaro.attack("Pasquale");
			flag = 1;
		}
		else if (input == "Repair"){
			Gennaro.beRepaired(2);
			flag = 1;
		}
		else if (input == "RunAway"){
			std::cout << "That's right run away, coward" << std::endl;
			break ;
		}
		else{
			std::cout << "Wrong input, retry" << std::endl;
		}
		if (flag == 1){
			std::cout << "Pasquale attacks with his big ass sword" << std::endl;
			Gennaro.takeDamage(1);
			if (Gennaro.GetHP() <= 0){
				std::cout << "ClapTrap Gennaro got defeated by Pasquale, R.I.P:" << std::endl;
				break;
			}
			flag = 0;
		}
	}
	return (0);
}