/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:47:17 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/09 18:28:28 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {

	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& copyConstructor);
		~Sorcerer(void);

		Sorcerer& operator=(const Sorcerer& some);
		std::string getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const& vic) const;
	private:
		std::string _name;
		std::string _title;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & i);
#endif
