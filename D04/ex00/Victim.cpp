/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 16:20:49 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/09 18:19:07 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name){

	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
   _name = name;

return ;
}

Victim::Victim(void)
{
	this->_name = "Joe";
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
 
	return ;
}

Victim::Victim(const Victim& copy)
{
	*this = copy;
	std::cout << "Copy costructor called" << std::endl;

	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;

	return ;
}

Victim& Victim::operator=(const Victim& rhs)
{
	if (this != &rhs)
		_name = rhs.getVictimName();
	
	return (*this);
}

std::string Victim::getVictimName() const 
{
	return (_name);
}

std::ostream& operator<<(std::ostream& output, Victim const& vicIntro)
{
	output << "I'm " << vicIntro.getVictimName() << " and I like otters !" << std::endl;

	return (output);
}

void Victim::getPolymorphed() const
{
	std::cout << _name <<" has been turned into a cute little sheep !" << std::endl;

	return ;
}
