#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator = (Fixed& a){
	std::cout << "Copy assignment oprator called" << std::endl;
	if (this != &a){
		this->_value = a.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}