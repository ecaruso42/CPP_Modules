#include "Cure.hpp"

Cure::Cure(){
	std::cout << "Default constructor for Cure called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other){
	std::cout << "Copy constructor for Cure called" << std::endl;
	this->_type = other._type;
}

Cure& Cure::operator = (const Cure& other){
	std::cout << "Copy assignment operator for Cure called" << std::endl;
	this->_type = other._type;
	return *this;
}

Cure::~Cure(){
	std::cout << "Destructor for Cure called" << std::endl;
}

AMateria* Cure::clone() const{
	AMateria* cureCopy = new Cure(*this);
	return cureCopy;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}