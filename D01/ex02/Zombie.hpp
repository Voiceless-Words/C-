/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:56:05 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 18:41:49 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
class Zombie {

	public:
		Zombie();
		~Zombie(void);

		void setType(std::string);
		void announce(void);
	private:
		std::string _zombieName;
		std::string _zombieType;
};

#endif
