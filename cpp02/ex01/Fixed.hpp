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
};
