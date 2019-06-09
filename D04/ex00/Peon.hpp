/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:31:33 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/09 18:20:03 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"

class Peon : public Victim{

	public:
		Peon(std::string name);
		Peon(const Peon& copy);
		Peon(void);
		~Peon(void);

		Peon& operator=(const Peon& p);
		void getPolymorphed() const;
	
	private:
		std::string _name;
};

#endif
