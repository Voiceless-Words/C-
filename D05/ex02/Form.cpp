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

Form::Form(void) : _executeGrade(), _requiredGrade(), _formName()
{
	std::cout << "Need to have some values at least." << std::endl;

	return ;
}

Form::Form(std::string const formName, int const exGrade, int const reGrade)
	: _formName(formName), _executeGrade(exGrade), _requiredGrade(reGrade)
{
		if (reGrade < 1 || exGrade < 1)
			throw Form::GradeTooHighException();
		else if (reGrade > 150 || exGrade > 150)
			throw Form::GradeTooLowException();
		else
			_signedIn = false;
		
	return ;
}

Form::~Form(void)
{
	return ;
}

Form::Form(const Form& copy)
: _formName(copy._formName), _executeGrade(copy._executeGrade), _requiredGrade(copy._requiredGrade)
{
	_signedIn = false;
	*this = copy;
}

std::string const Form::getformName() const
{
	
	return (_formName);
}

int const Form::getExecuteGrade() const
{
	return (_executeGrade);
}

int const Form::getRequiredGrade() const
{
	return (_requiredGrade);
}

const Form& Form::operator=(const Form& rhs)
{
	return (rhs);
}
const char* Form::GradeTooLowException::what() const throw(){
	return ("Low grade for sign up");
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("High grade for sign up");
}

void Form::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() <= _requiredGrade)
	{
		_signedIn = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
	
	return ;
}

std::ostream& operator<<(std::ostream& output, Form& rhs)
{
	output << rhs.getformName() << rhs.getExecuteGrade() << rhs.getRequiredGrade() << std::endl;

	return (output);
}
