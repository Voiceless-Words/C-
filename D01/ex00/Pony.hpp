/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:56:06 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 13:20:50 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony {

	public:
		Pony(std::string);
		~Pony();

		void	setPonyColor(std::string);
		void	setPonyName(std::string);
		void	setPonyToy(std::string);

		std::string getPonyColor(void) const;
		std::string getPonyName(void) const;
		std::string getPonyToy(void) const;

	private:
		std::string _where;
		std::string _ponyColor;
		std::string _ponyName;
		std::string _ponyToy;
};

Pony	*ponyOnTheHeap(void);
Pony	ponyOnTheStack(void);

#endif
