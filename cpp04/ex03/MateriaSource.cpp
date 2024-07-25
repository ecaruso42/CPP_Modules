#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << "Default constructor for MateriaSource called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) : MateriaSource(other){
	std::cout << "Copy constructor for MateriaSource called" << std::endl;
	*this = other;
	return ;
}

MateriaSource& MateriaSource::operator = (const MateriaSource& other){
	std::cout << "Copy assignment operator for MateriaSource called" << std::endl;
	if (this != &other){
		for (int i = 0; i < 4; i++)
			this->_materia[i] = other._materia[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		delete this->_materia[i];
	std::cout << "Destructor for MateriaSource called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->_materia[i] == NULL){
			std::cout << "Materia of type " << m->getType() << " learnt" << std::endl;
			_materia[i] = m;
			return ;
		}
		std::cout << "Slots full, couldn't learn materia" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (this->_materia[i] != NULL){
			if (this->_materia[i]->getType() == type){
				return _materia[i]->clone();
			}
		}
	}
	return NULL;
}