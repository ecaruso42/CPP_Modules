#include "Zombie.hpp"

int main(){
	Zombie *heapZombie =  zombieHorde(5 ,"Gianluca");
	delete [] heapZombie;
	return 0;
}

void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

