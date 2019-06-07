/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:56:42 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 17:51:43 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void ZombieEvent::setZombieType(Zombie *accessPoint, std::string type)
{
	accessPoint->setType(type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *namePtr = new Zombie(name);

	ZombieEvent::setZombieType(namePtr, "UGLY");

	return namePtr;
}

std::string ZombieEvent::randomChump()
{
	srand(time(NULL));
	int index = random()%6;
	std::string zombies[5] = {
			"Piet", "Thabiso", "Ragolane", "What", "Isis"
	};
	
	return zombies[index];
}
