#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_FractBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &a);
		Fixed& operator = (const Fixed& a);
		~Fixed();
		Fixed(const int n);
		Fixed(const float f);

		float	toFloat(void)const;
		int		toInt(void) const;
		int		getRawBits()const;
		void	setRawBits(int const raw);
		friend	std::ostream& operator<<(std::ostream& os, const Fixed& fp);

		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;

		float	operator+(const Fixed& other);
		float	operator-(const Fixed& other);
		float	operator*(const Fixed& other);
		float	operator/(const Fixed& other);

		Fixed	operator++(int);
		Fixed&	operator++(void);
		Fixed	operator--(int);
		Fixed&	operator--(void);

		static			Fixed& min(Fixed &a, Fixed &b);
		static const	Fixed& min(const Fixed &a, const Fixed &b);
		static			Fixed& max(Fixed &a, Fixed &b);
		static const	Fixed& max(const Fixed &a, const Fixed &b);
};
