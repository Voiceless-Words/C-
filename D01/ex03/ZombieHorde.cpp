/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:06:58 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 18:27:07 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int name): _number(name){

	return ;
}

ZombieHorde::~ZombieHorde(){

	return ;
}

int ZombieHorde::getNumber()
{
	return this->_number;
}
