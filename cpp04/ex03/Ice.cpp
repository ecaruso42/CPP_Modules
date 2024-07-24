#include "Ice.hpp"

Ice::Ice(){
	std::cout << "Default constructor for Ice called" << std::endl;
	this->_type = "Ice";
}

Ice::Ice(const Ice& other) : AMateria(other){
	std::cout << "Copy constructor for Ice called" << std::endl;
	this->_type = other._type;
}

Ice& Ice::operator = (const Ice& other){
	std::cout << "Copy assignment operator for Ice called" << std::endl;
	this->_type = other._type;
	return *this;
}

Ice::~Ice(){
	std::cout << "Destructor for Ice called" << std::endl;
}

AMateria* Ice::clone() const{
	AMateria* iceCopy = new Ice(*this);
	return iceCopy;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at "<< target.getName() << std::endl;
}