#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator = (const Fixed& a){
	std::cout << "Copy assignment operator called" << std::endl;
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

bool	Fixed::operator>(const Fixed& other) const{
	if (this->toFloat() > other.toFloat()){
		return (true);
	}
	return (false);
}

bool	Fixed::operator<(const Fixed& other) const{
	if (this->toFloat() < other.toFloat()){
		return (true);
	}
	return (false);
}

bool	Fixed::operator>=(const Fixed& other) const{
	if (this->toFloat() >= other.toFloat()){
		return (true);
	}
	return (false);
}

bool	Fixed::operator<=(const Fixed& other) const{
	if (this->toFloat() <= other.toFloat()){
		return (true);
	}
	return (false);
}

bool	Fixed::operator==(const Fixed& other) const{
	if (this->toFloat() == other.toFloat()){
		return (true);
	}
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) const{
	if (this->toFloat() != other.toFloat()){
		return (true);
	}
	return (false);
}

float	Fixed::operator+(const Fixed& other){
	return (this->toFloat() + other.toFloat());
}

float	Fixed::operator-(const Fixed& other){
	return (this->toFloat() - other.toFloat());
}

float	Fixed::operator*(const Fixed& other){
	return (this->toFloat() * other.toFloat());
}

float	Fixed::operator/(const Fixed& other){
	return (this->toFloat() / other.toFloat());
}

//post-incremento
Fixed	Fixed::operator++(int){
	Fixed temp = *this;
	this->_value += 1;
	return temp;
}

//pre-incremento
Fixed&	Fixed::operator++(void){
	this->_value += 1;
	return *this;
}

//post-decremento
Fixed	Fixed::operator--(int){
	Fixed temp = *this;
	this->_value -= 1;
	return temp;
}

//pre-decremento
Fixed&	Fixed::operator--(void){
	this->_value -= 1;
	return *this;
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	if (a > b){
		return (b);
	}
	else{
		return (a);
	}
}

const	Fixed& Fixed::min(const Fixed &a,const Fixed &b){
	if (a > b){
		return (b);
	}
	else{
		return (a);
	}
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	if (a > b){
		return (a);
	}
	else{
		return (b);
	}
}

const	Fixed& Fixed::max(Fixed const &a, Fixed const &b){
	if (a > b){
		return (a);
	}
	else{
		return (b);
	}
}