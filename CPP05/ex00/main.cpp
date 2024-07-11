#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat bureaucrat("Kevin", 150);
		bureaucrat.decrement_grade();
	} catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bureaucrat("Reiner", 1);
		bureaucrat.increment_grade();
	} catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}