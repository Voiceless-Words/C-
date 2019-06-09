/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:47:33 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/09 18:28:16 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
	_name = name;
	_title = title;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copyConstructor)
{
	*this = copyConstructor;
	std::cout << "Copy constructor called" << std::endl;

	return ;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return (*this);
}

std::string Sorcerer::getName() const
{
	return (_name);
}

std::string Sorcerer::getTitle() const
{
	return (_title);
}

std::ostream& operator<<(std::ostream& output, Sorcerer const& intro)
{
	output << "I am " << intro.getName() << " ," << intro.getTitle() << " and I like ponies !" << std::endl;

	return (output);
}

void Sorcerer::polymorph(Victim const& vic) const
{
	std::cout << "polymorphed was called" << std::endl;

	return ;
}
