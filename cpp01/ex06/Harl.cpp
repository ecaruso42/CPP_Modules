#include "Harl.hpp"

Harl::Harl(){
	std::cout << "Harl has been created" << std::endl;
}

Harl::~Harl(){
	std::cout << "Harl has been destroyed, poor Harl :(" << std::endl;
}
void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level){
	HarlPointer input[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string command[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int j = 0;
	for (int i = 0; i < 4 ; i++){
		if (command[i] == level){
			j = i;
			break ;
		}
	}
	switch (j)
	{
		case 0:
			(this->*input[j++])();
		case 1:
			(this->*input[j++])();
		case 2:
			(this->*input[j++])();
		case 3:
			(this->*input[j++])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}