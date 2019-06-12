#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Form;

class Bureaucrat {

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		~Bureaucrat(void);

		const Bureaucrat& operator=(const Bureaucrat& rhs);
		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form& form);

		class GradeTooHighException : public std::exception {
		
			public:
			/*	GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException& copy);
				~GradeTooHighException(void);

				GradeTooHighException& operator=(const GradeTooHighException& rhs);*/

				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		
			public:
				/*GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException& copy);
				~GradeTooLowException(void);

				GradeTooLowException& operator=(const GradeTooLowException& rhs);*/

				virtual const char* what() const throw();
		};

	
	private:
		const std::string _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const& bur);
#endif
