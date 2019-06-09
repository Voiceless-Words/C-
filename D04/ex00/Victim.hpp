/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 16:19:53 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/09 18:26:15 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

#include <string>
#include "Victim.hpp"

class Victim {

	public:
		Victim(std::string name);
		Victim(void);
		Victim(const Victim& copy);
		~Victim(void);

		Victim& operator=(const Victim& vic);
		std::string getVictimName(void) const;
		virtual void getPolymorphed() const;
	private:
		std::string _name;
};

std::ostream& operator<<(std::ostream& o, Victim const& vic);

#endif
