/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:56:32 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 17:54:04 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H
#include "Zombie.hpp"
#include <string>

class ZombieEvent {

	public:
		ZombieEvent();
		~ZombieEvent();
	
		Zombie *newZombie(std::string name);
		void	setZombieType(Zombie *accessPoint, std::string);
		std::string	randomChump();
};

#endif
