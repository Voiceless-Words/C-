/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:55:53 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 17:41:05 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _zombieName(name)
{
	std::cout << "New zombie was allocated fight" << std::endl;

	return ;
}

Zombie::~Zombie()
{
	std::cout << "Victory Zombie destroyed" << std::endl;
	
	return ;
}

void	Zombie::setType(std::string type)
{
	this->_zombieType = type;
}

void Zombie::announce()
{
	std::cout << "<" << this->_zombieName << " (" <<this->_zombieType << ")" << " >";
    std::cout << " Braiiiiiiinnnssss..." << std::endl;
}
