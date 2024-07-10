#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator = (const Fixed& a){
	std::cout << "Copy assignment oprator called" << std::endl;
	if (this != &a){
		this->_value = a.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_FractBits;
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f *(1 << this->_FractBits));
}

float Fixed::toFloat(void)const{
	return (((float) this->getRawBits()) / (1 << this->_FractBits));
}

int	Fixed::toInt(void) const{
	return (this->getRawBits() >> this->_FractBits);
}

int Fixed::getRawBits()const{
	return this->_value;
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fp){
	os << fp.toFloat();
	return os;
}