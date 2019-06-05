/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:19:12 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/05 17:45:50 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

void displayCharacter(std::string str)
{
	unsigned long i = 0;
	std::string spaces;
	std::string characters;
	while (i <= 9)
	{
		if (i < str.length())
		{
			if (i == 9)
			{
				characters += ".";
			} else {
				characters += str[i];
			}
		} else {
			spaces += " ";
		}
		i++;
	}
	std::cout << spaces << characters;
}
	
void displayContact(Phonebook contacts[], int index)
{
	std::cout << contacts[index].getFirstName() << std::endl;
	std::cout << contacts[index].getLastName() << std::endl;
	std::cout << contacts[index].getNickname() << std::endl;
	std::cout << contacts[index].getLogin() << std::endl;
	std::cout << contacts[index].getPostalAddress() << std::endl;
	std::cout << contacts[index].getPhoneNumber() << std::endl;
	std::cout << contacts[index].getEmailAddress() << std::endl;
	std::cout << contacts[index].getBirthdayDate() << std::endl;
	std::cout << contacts[index].getFavouriteMeal() << std::endl;
	std::cout << contacts[index].getUnderwearColor() << std::endl;
	std::cout << contacts[index].getDarkestSecret() << std::endl;
}

void	searchContact(Phonebook contacts[], int numberOfContacts)
{
	if (numberOfContacts == 0)
	{
		std::cout << "No entries in the Phonebook." << std::endl;
	} else {	
		std::string index;
	
		std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	
		for(int i = 0; i < numberOfContacts; i++)
		{
			std::cout << "|         " << i << "|";
			displayCharacter(contacts[i].getFirstName());
			std::cout << "|";
			displayCharacter(contacts[i].getLastName());
			std::cout << "|";
		   	displayCharacter(contacts[i].getNickname());
			std::cout << "|" << std::endl;
		}


		while (1)
		{
			std::cout << "Enter the index of the desired contact you want to view." << std::endl;
			std::cin >> index;

			if (index[0] >= '0' && index[0] <= '7')
			{
				if ((index[0] - '0') < numberOfContacts)
				{
					displayContact(contacts, index[0] - '0');
					break ;
				}
				else {
					std::cout << "Entry does not exists" << std::endl;
				}
			} else 
			{
				std::cout << "You entered the wrong input " << std::endl;
			}
		}	
	}
}

