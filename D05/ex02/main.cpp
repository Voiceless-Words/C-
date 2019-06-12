#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
			Bureaucrat* node = new Bureaucrat("Piet", 149);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Some random exception" << std::endl;
	}

	try {
		Bureaucrat* node1 = new Bureaucrat("Piet", 149);
			Form* node = new Form("Piet", 149, 5);
			node->beSigned(*node1);
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Some random exception" << std::endl;
	}

	return 0;
}
