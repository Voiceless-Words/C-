#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(const Fixed& fixedCopy);
		~Fixed(void);

		Fixed& operator=(const Fixed&);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int _fixedPointValue = 0;
		static const int fractionaBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
#endif
