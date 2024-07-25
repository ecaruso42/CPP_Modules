#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "Default constructor for AMateria called" << std::endl;
}

AMateria::AMateria(const AMateria& other){
	std::cout << "Copy constructor for AMateria called" << std::endl;
	*this = other;
	return ;
}

AMateria& AMateria::operator = (const AMateria& other){
	std::cout << "Copy assignment operator for AMateria called" << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

AMateria::~AMateria(){
	std::cout << "Destructor for AMateria called" << std::endl;
}

AMateria::AMateria(std::string const & type){
	this->_type = type;
}

std::string const & AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter& target){
	std::cout << "Nothing to use, just raw materia, " << target.getName() << " is laughing at you" << std::endl;
}