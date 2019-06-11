/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:26:02 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/10 15:26:06 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : SuperMutant::Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
    *this = src;
    return ;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

SuperMutant
&SuperMutant::operator= (const SuperMutant &rhs)
{
    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}

void
SuperMutant::takeDamage(int damage)
{
    damage -= 3;

    if (this->_hp - damage <= 0 && damage > 0)
    {
        this->_hp = 0;
    }
    else
    {
        this->_hp -= damage;
    }
    return ;
}
