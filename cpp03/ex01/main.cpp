#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	ClapTrap Gennaro("Gennaro");
	ScavTrap Concetta("Concetta");
	std::cout << "ClapTrap Gennaro, ScavTrap Concetta and their nemesis, Pasquale, has been created" << std::endl;
	std::string input;
	int	PasqualeHP = 100;
	int flag = 0;
	while (true){
		while (true){
			std::cout << "ClapTrap Gennaro has " << Gennaro.GetHP() << " HP and " << Gennaro.GetEP() << " EP" << std::endl;
			std::cout << "ScavTrap Concetta has " << Concetta.GetHP() << " HP and " << Concetta.GetEP() << " EP" << std::endl;
			std::cout << "Pasquale has " << PasqualeHP << " HP" << std::endl;
			std::cout << "Gennaro is attacking: Choose your move: Attack, Repair or RunAway: " << std::endl;
			std::getline(std::cin, input);
			system("clear");
			if (input == "Attack"){
				Gennaro.attack("Pasquale");
				PasqualeHP -= 20;
				if (PasqualeHP <= 0){
					std::cout << "You defeated Pasquale, now Caserta is free from all the evil, Congratulations!" << std::endl;
					return 0;
				}
				flag = 1;
				break;
			}
			else if (input == "Repair"){
				Gennaro.beRepaired(60);
				flag = 1;
				break;
			}
			else if (input == "RunAway"){
				std::cout << "That's right run away, coward" << std::endl;
				return 0;
			}
			else{
				std::cout << "Wrong input, retry" << std::endl;
			}
		}
		while (true){
			std::cout << "ClapTrap Gennaro has " << Gennaro.GetHP() << " HP and " << Gennaro.GetEP() << " EP" << std::endl;
			std::cout << "ScavTrap Concetta has " << Concetta.GetHP() << " HP and " << Concetta.GetEP() << " EP" << std::endl;
			std::cout << "Pasquale has " << PasqualeHP << " HP" << std::endl;
			std::cout << "Concetta is attacking: Choose your move: Attack, Repair, GateKeep or RunAway: " << std::endl;
			std::getline(std::cin, input);
			system("clear");
			if (input == "Attack"){
				Concetta.attack("Pasquale");
				PasqualeHP -= 20;
				if (PasqualeHP <= 0){
					std::cout << "You defeated Pasquale, now Caserta is free from all the evil, Congratulations!" << std::endl;
					return 0;
				}
				flag = 1;
				break;
			}
			else if (input == "Repair"){
				Concetta.beRepaired(60);
				flag = 1;
				break;
			}
			else if (input == "GateKeep"){
				Concetta.guardGate();
				break;
			}
			else if (input == "RunAway"){
				std::cout << "That's right run away, coward" << std::endl;
				return 0;
			}
			else{
				std::cout << "Wrong input, retry" << std::endl;
			}
		}
		if (flag == 1){
			std::cout << "Pasquale attacks with his big ass sword" << std::endl;
			Gennaro.takeDamage(50);
			Concetta.takeDamage(50);
			if (Gennaro.GetHP() <= 0){
				std::cout << "ClapTrap Gennaro got defeated by Pasquale, Caserta is lost forever, R.I.P:" << std::endl;
				return 0;
			}
			if (Concetta.GetHP() <= 0){
				std::cout << "ScavTrap Concetta got defeated by Pasquale, Caserta is lost forever, R.I.P:" << std::endl;
				return 0;
			}
			flag = 0;
		}
	}
	return (0);
}