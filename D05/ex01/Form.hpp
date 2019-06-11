/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:51:31 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/11 13:14:24 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {

	public:
		Form(void);
		Form(std::string formName, bool signedIn, int const exGrade, int const reGrade);
		Form(const Form& copy);
		~Form(void);

		Form& operator=(const Form& form);
		int getExecuteGrade(void) const;
		int getRequiredGrade(void) const;
		std::string getformName(void) const;

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* gradeHigh() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char *gradeLow() const throw();
		};

	private:
		int const _executeGrade;
		int const _requiredGrade;
		bool _signedIn;
		std::string const _formName;

};

#endif
