#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string user_name, int user_grade) : name(user_name), grade(user_grade)
{
	if (user_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (user_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat( const Bureaucrat& copy ) : name(copy.name), grade(copy.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
        grade = copy.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::increment_grade()
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void    Bureaucrat::decrement_grade()
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void    Bureaucrat::signForm(Form& copy)
{
    try{
        copy.beSigned(*this);
        std::cout << *this << " signed " << copy.getName() << std::endl;
    } catch (Form::GradeTooLowException &e) {
        std::cout << name << " coulnd't sign " << copy.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& copy)
{
    o << copy.getName() << ", bureaucrat grade is: " << copy.getGrade();
    return (o);
}
