/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:31:12 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/09 18:19:55 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name)
{
	_name = name;
	std::cout << "Zog zog" << std::endl;

	return ;
}

Peon::Peon(const Peon& copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;

	return ;
}

Peon::Peon(void)
{
	_name = "Piet";
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;

	return ;
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into pink pony !" << std::endl;

	return ;
}

Peon& Peon::operator=(const Peon& rhs)
{
	if (this != &rhs)
		_name = rhs._name;

	return (*this);
}

