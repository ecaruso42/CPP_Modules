#pragma once

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_FractBits = 8;
	public:
		Fixed();
		Fixed(Fixed &a);
		Fixed& operator = (Fixed& a);
		~Fixed();

		int getRawBits()const;
		void setRawBits(int const raw);
};