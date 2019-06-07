/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:12:40 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 18:40:30 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
	ZombieHorde zombie = ZombieHorde(5);

	int number = zombie.getNumber();

	std::string zombies[10] = {
	"Piet",
	"Thabiso",
	"Ragolane",
	"Molatelo",
	"Tip",
	"Isis",
	"Lost",
	"One",
	"Post"
	};

	Zombie zom[number];

	int index;

	for(int i = 0; i < number; i++)
	{
		srandom(time(NULL));
		index = random()%9;
		zom[i] = new Zombie(zombies[index]);
	}
	
	for(int j = 0; j < number; j++)
	{
		zom[j].announce();
	}

	delete zom;
	return 0;
}
