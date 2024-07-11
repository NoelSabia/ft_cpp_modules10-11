#include "Form.hpp"

Form::Form(const std::string name, int sign_grade) : name(name), sign_grade(sign_grade), execute_grade(0)
{
    if (sign_grade < 1)
        throw Form::GradeTooHighException();
    if (sign_grade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const std::string name, const int sign_grade, const int execute_grade) : name(name), sign_grade(sign_grade), execute_grade(execute_grade)
{
    if (sign_grade < 1)
        throw Form::GradeTooHighException();
    if (sign_grade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const std::string name, bool signed_in, const int sign_grade, const int execute_grade) : name(name), signed_in(signed_in), sign_grade(sign_grade), execute_grade(execute_grade)
{
    if (sign_grade < 1)
        throw Form::GradeTooHighException();
    if (sign_grade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) : name(copy.getName()), signed_in(copy.getGradeToSign()), execute_grade(copy.getGradeToExecute())
{
}

Form::~Form()
{
}

Form&   Form::operator=(const Form& copy)
{
    if (this != &copy)
        signed_in = copy.getSigned();
    return (*this);
}

std::string Form::getName() const
{
    return (name);
}

bool   Form::getSigned() const
{
    return (signed_in);
}

int   Form::getGradeToSign() const
{
	return (sign_grade);
}

int   Form::getGradeToExecute() const
{
	return (execute_grade);
}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > sign_grade)
        throw Form::GradeTooLowException();
    signed_in = true;
}

std::ostream&   operator<<(std::ostream& o, const Form& copy)
{
    o << "Form name: " << copy.getName() << std::endl
      << "Grade to sign: " << copy.getGradeToSign() << std::endl
      << "Grade to execute: " << copy.getGradeToExecute();
    return o;
}
