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
		Form(std::string formName, int const exGrade, int const reGrade);
		Form(const Form& copy);
		~Form(void);

		const Form& operator=(const Form& form);
		int const getExecuteGrade(void) const;
		int const getRequiredGrade(void) const;
		std::string const getformName(void) const;
		void beSigned(Bureaucrat& bur);
		bool getSignedIn(void) const;

		class GradeTooHighException : public std::exception {

			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what() const throw();
		};

	private:
		int const _executeGrade;
		int const _requiredGrade;
		bool _signedIn;
		std::string const _formName;

};

std::ostream& operator<<(std::ostream& output, Form& rhs);
#endif
