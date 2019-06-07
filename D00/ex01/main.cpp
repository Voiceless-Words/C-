/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:08:18 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/05 17:33:45 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main(void)
{
	Phonebook contact;
	Phonebook contacts[8];
	std::string command;
	int numberOfContacts = 0;

	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|                 Old School Phonebook                  |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	
	std::cout << "Available Commands Are : " << std::endl << std::endl;;
	std::cout << "ADD Command - adds contact." << std::endl;
	std::cout << "SEARCH Command - search contact." << std::endl;
	std::cout << "EXIT Command - exits phonebook." << std::endl << std::endl;
	std::cout << "Please enter a command." << std::endl;

	while (command != "EXIT")
	{
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			if (numberOfContacts > 8)
			{
				std::cout << "The phonebook is full cannot take more entries" << std::endl;
			} else {
				contacts[numberOfContacts] = addContact();
				numberOfContacts++;
				std::cout << "Entry added" << std::endl;
			}
		}
		else if (command == "SEARCH")
		{
			searchContact(contacts, numberOfContacts);
		}
	}

	return 0;
}
