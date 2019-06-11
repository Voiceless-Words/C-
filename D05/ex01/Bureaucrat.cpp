#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Try giving us a name and grade" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	
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
	if(_grade - 1 >= 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{

	if(_grade + 1 <= 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high wena sahni !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low wena sahni !";
}

void Bureaucrat::signForm(Form& form){

	try {
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getformName() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
			std::cout << _name << " cannot sign because " << e.what() << std::endl;

	}
}
std::ostream& operator<<(std::ostream& output, Bureaucrat const& bur)
{
	output << bur.getName() << " bureaucrat " << bur.getGrade() << std::endl;

return (output);
}
