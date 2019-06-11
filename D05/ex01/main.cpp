#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* node = new Bureaucrat("Piet", 149);

	//node->incrementGrade();
	node->decrementGrade();

	std::cout << *node;

	delete node;
	return 0;
}
