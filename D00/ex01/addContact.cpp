/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:04:47 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/05 18:06:41 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

std::string validate(std::string str)
{
	int i;

	i = 0;
	while ( str == "")
	{
		if (i != 0)
		{
			std::cout << "Field cannot be empty" << std::endl;
		}
		getline(std::cin, str);
		i++;
	}

	return str;
}
	
Phonebook addContact(void)
{
	Phonebook contact;
	std::string buff = "";

	std::cout << "Enter First Name :" << std::endl;

	contact.setFirstName(validate(buff));

	std::cout << "Enter Last Name :" << std::endl;

	contact.setLastName(validate(buff));

	std::cout << "Enter Nickname :" << std::endl;

	contact.setNickname(validate(buff));

	std::cout << "Enter Login :" << std::endl;

	contact.setLogin(validate(buff));

	std::cout << "Enter Postal Address :" << std::endl;

	contact.setPostalAddress(validate(buff));

	std::cout << "Enter Phone Number :" << std::endl;

	contact.setPhoneNumber(validate(buff));

	std::cout << "Enter Email Address :" << std::endl;

	contact.setEmailAddress(validate(buff));
	
	std::cout << "Enter Birthday Date :" << std::endl;

	contact.setBirthdayDate(validate(buff));
	
	std::cout << "Enter Favourite Meal :" << std::endl;

	contact.setFavouriteMeal(validate(buff));

	std::cout << "Enter Underwear Color :" << std::endl;

	contact.setUnderwearColor(validate(buff));
	
	std::cout << "Enter Darkest Secret :" << std::endl;

	contact.setDarkestSecret(validate(buff));

	return contact;
}
