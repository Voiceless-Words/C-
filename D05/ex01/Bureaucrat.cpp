#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Try giving us a name and grade" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.gradeHigh();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.gradeLow();
	}
	catch (std::exception& e)
	{
		std::cout << "This is the std::exception." << std::endl;
	}
	
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;

	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	return (rhs);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

void Bureaucrat::incrementGrade(void)
{
	try{
		if(_grade - 1 >= 1)
			_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.gradeHigh();
	}
	catch (std::exception& e)
	{
		std::cout << "This is the std::exception." << std::endl;
	}
}

void Bureaucrat::decrementGrade(void)
{
	try{
		if(_grade + 1 <= 150)
			_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.gradeLow();
	}
	catch (std::exception& e)
	{
		std::cout << "This is the std::exception." << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::gradeHigh() const throw()
{
	return "Grade is too high wena sahni !";
}

const char* Bureaucrat::GradeTooLowException::gradeLow() const throw()
{
	return "Grade is too Low wena sahni !";
}


std::ostream& operator<<(std::ostream& output, Bureaucrat const& bur)
{
	output << bur.getName() << " bureaucrat " << bur.getGrade() << std::endl;

return (output);
}
