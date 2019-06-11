#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {

	public:
		Form(void);
		Form(std::string formName, bool signedIn);
		Form(const Form& copy);
		~Form(void);

		Form& operator=(const Form& form);
		int getExecuteGrade(void) const;
		int getRequiredGrade(void) const;
		std::string getformName(void) const;

};

#endif
