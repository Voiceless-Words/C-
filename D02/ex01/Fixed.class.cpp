/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:45:15 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/07 17:28:24 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
   std::cout << "Default constructor called" << std::endl;
   return;
}

Fixed::~Fixed(void)
{
   std::cout << "Destructor called" << std::endl;
   return;
}

Fixed::Fixed(const Fixed &other)
{
   *this = other;
   std::cout << "Copy constructor called" << std::endl;
   return;
}

Fixed::Fixed(const int value)
{
   this->_fixedPointValue = value * (1 << _fractionBits);
   std::cout << "Int constructor called" << std::endl;
   return;
}

Fixed::Fixed(const float value)
{
   this->_fixedPointValue = roundf(value * (1 << _fractionBits));
   std::cout << "Float constructor called" << std::endl;
   return ;
}

int Fixed::getRawBits() const
{
	return this->_fixedPointValue;
}

int Fixed::toInt() const
{
	return (int)((this->_fixedPointValue)/(1 << this->_fractionBits));
}

float Fixed::toFloat() const
{
	return (((float)this->_fixedPointValue)/(1 << this->_fractionBits));
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
   if (this != &rhs)
   {
       this->_fixedPointValue = rhs.getRawBits();
   }
   std::cout << "Assignation operator called" << std::endl;
   return (*this);
} 

std::ostream & operator<<(std::ostream & o, Fixed const & f)
{
	o << f.toFloat();

	return o;
}

const int Fixed::_fractionBits = 8;
