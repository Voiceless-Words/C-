/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:21:58 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/05 17:35:31 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>

class Phonebook {

	public:

		Phonebook(void);
		~Phonebook(void);

		void 		setFirstName(std::string);
		void		setLastName(std::string);
		void		setNickname(std::string);
		void		setLogin(std::string);
		void		setPostalAddress(std::string);
		void		setPhoneNumber(std::string);
		void		setEmailAddress(std::string);
		void		setBirthdayDate(std::string);
		void		setFavouriteMeal(std::string);
		void		setUnderwearColor(std::string);
		void		setDarkestSecret(std::string);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getLogin(void) const;
		std::string	getPostalAddress(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getEmailAddress(void) const;
		std::string	getBirthdayDate(void) const;
		std::string	getFavouriteMeal(void) const;
		std::string	getUnderwearColor(void) const;
		std::string	getDarkestSecret(void) const;

	private:
		
			std::string _firstName;
			std::string _lastName;
			std::string _nickname;
			std::string _login;
			std::string _postalAddress;
			std::string _phoneNumber;
			std::string _emailAddress;
			std::string _birthDate;
			std::string _favouriteMeal;
			std::string _underwearColor;
			std::string _darkestSecret;

};

Phonebook	addContact(void);
void		searchContact(Phonebook contacts[8], int numberOfContacts);

#endif
