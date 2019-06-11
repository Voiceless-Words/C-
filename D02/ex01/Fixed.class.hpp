/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:28:09 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/07 17:28:13 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(const Fixed& fixedCopy);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);

		Fixed& operator=(const Fixed&);
		float toFloat(void) const;
		int toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int _fixedPointValue;
		static const int _fractionBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif
