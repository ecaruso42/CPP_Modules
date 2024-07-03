#include "Zombie.hpp"

int main(){
	Zombie *heapZombie = newZombie("Gianluca");
	heapZombie->announce();
	randomChump("Gianmarco");
	delete heapZombie;
	return 0;
}

void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

