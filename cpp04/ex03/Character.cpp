#include "Character.hpp"

Character::Character(){
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "Default constructor for Character called" << std::endl;
}

Character::Character(const Character& other){
	std::cout << "Copy constructor for Character called" << std::endl;
	*this = other;
	return ;
}

Character& Character::operator = (const Character& other){
	std::cout << "Copy assignment operator for Character called" << std::endl;
	if (this != &other){
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
			this->_slots[i] = other._slots[i]->clone();
	}
	return *this;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		delete this->_slots[i];
	std::cout << "Destructor for Character called" << std::endl;
}

Character::Character(std::string name){
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "Non-default constructor for Character called" << std::endl;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if(!this->_slots[i]){
			this->_slots[i] = m;
			std::cout << "Character " << this->_name << " equipped " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
		std::cout << "Slots full, character " << this->_name << " couldn't equip " << m->getType() << std::endl;
	}
}

void Character::unequip(int idx){
	if (this->_slots[idx]){
		std::cout << "Character " << this->_name << " unequipped " << _slots[idx]->getType() << " from slot " << idx << std::endl;
		this->_slots[idx] = NULL;
		return ;
	}
	std::cout << "Nothing to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target){
	if (this->_slots[idx]){
		_slots[idx]->use(target);
		return ;
	}
	std::cout << "Nothing to use :(" << std::endl;
}