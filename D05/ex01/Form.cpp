/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:51:20 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/11 13:14:15 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Need to have some values at least." << std::endl;

	return ;
}

Form::Form(std::string const formName, bool signedIn, int const exGrade, int const reGrade)
	: _formName(formName), _executeGrade(exGrade), _requiredGrade(reGrade)
{
	try {

		if (reGrade < 1 || exGrade < 1)
			throw Form::GradeTooHighException();
		else if (reGrade > 150 || exGrade > 150)
			throw Form::GradeTooLowException();
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.gradeHigh() << std::endl;
	}
	catch (GradeTooLowException& e)
	{
		std::cout << e.gradeLow() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Some random exception" << std::endl;
	}

	return ;
}

Form::~Form(void)
{
	std::cout << "Form Dying" << std::endl;

	return ;
}

Form::Form(const Form& copy)
{
	return (copy);
}
