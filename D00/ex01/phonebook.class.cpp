/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:03:30 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/05 14:03:48 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

std::string Phonebook::getFirstName(void) const
{
	return this->_firstName;
}

void	Phonebook::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

std::string Phonebook::getLastName(void) const
{
	return this->_lastName;
}

void	Phonebook::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string Phonebook::getNickname(void) const
{
	return this->_nickname;
}

void	Phonebook::setLogin(std::string login)
{
	this->_login = login;
}

std::string Phonebook::getLogin(void) const
{
	return this->_login;
}

void	Phonebook::setPostalAddress(std::string address)
{
	this->_postalAddress = address;
}

std::string Phonebook::getPostalAddress(void) const
{
	return this->_postalAddress;
}

void	Phonebook::setPhoneNumber(std::string number)
{
	this->_phoneNumber = number;
}

std::string Phonebook::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

void	Phonebook::setEmailAddress(std::string email)
{
	this->_emailAddress = email;
}

std::string Phonebook::getEmailAddress(void) const
{
	return this->_emailAddress;
}

void	Phonebook::setBirthdayDate(std::string date)
{
	this->_birthDate = date;
}

std::string Phonebook::getBirthdayDate(void) const
{
	return this->_birthDate;
}

void	Phonebook::setFavouriteMeal(std::string meal)
{
	this->_favouriteMeal = meal;
}

std::string Phonebook::getFavouriteMeal(void) const
{
	return this->_favouriteMeal;
}

void	Phonebook::setUnderwearColor(std::string color)
{
	this->_underwearColor = color;
}

std::string Phonebook::getUnderwearColor(void) const
{
	return this->_underwearColor;
}

void	Phonebook::setDarkestSecret(std::string secret)
{
	this->_darkestSecret = secret;
}

std::string Phonebook::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}
