/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:56:52 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 17:55:32 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent *zom = new ZombieEvent();

	for(int i = 0; i < 3; i++)
	{
		Zombie *zombie = zom->newZombie(zom->randomChump());

		zombie->announce();
		delete zombie;
	}
	delete zom;
	return 0;
}
