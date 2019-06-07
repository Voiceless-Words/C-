/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:55:53 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 13:25:56 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony (std::string allocated) : _where(allocated){
	std::cout << "New Pony allocated on " << this->_where << std::endl;
}

Pony::~Pony ()
{
	std::cout << "Pony on the " << this->_where << " is destroyed" << std::endl;
}

void Pony::setPonyColor(std::string color)
{
	this->_ponyColor = color;
}

void Pony::setPonyName(std::string name)
{
	this->_ponyName = name;
}

void Pony::setPonyToy(std::string toy)
{
	this->_ponyToy = toy;
}

std::string Pony::getPonyColor() const
{
	return this->_ponyColor;
}

std::string Pony::getPonyName() const
{
	return this->_ponyName;
}

std::string Pony::getPonyToy() const
{
	return this->_ponyToy;
}

Pony *ponyOnTheHeap()
{
	Pony *pony = new Pony("Heap");
	return pony;
}

Pony ponyOnTheStack()
{
	Pony pony = Pony("stack");
	return pony;
}
