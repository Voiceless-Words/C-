#include "Fixed.class.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed::Fixed(Fixed const & fixedCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedCopy;

	return ;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
	//this->setRawBits(0);
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_fixedPointValue = rhs.getRawBits();
	}

	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}
