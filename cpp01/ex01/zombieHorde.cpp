#include "Zombie.hpp"

void Zombie::setName(std::string name){
	this->_name = name;
}

Zombie* zombieHorde(int N, std::string name){
	if(N <= 0){
		std::cout << "Il numero " << N << " non è valido" << std::endl;
		return (0);
	}
	Zombie *Horde = new Zombie[N];
	for(int i = 0; i < N; i++){
		Horde[i].setName(name);
		Horde[i].announce();
	}
	return Horde;
}