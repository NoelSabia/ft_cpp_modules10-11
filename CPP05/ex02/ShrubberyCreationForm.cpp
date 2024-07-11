#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy), target( copy.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& copy)
{
    (void)copy;
    return (*this);
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (this->getSigned() == false)
        throw(Form::NotSignedException());
    else if (executor.getGrade() > this->getGradeToExecute())
        throw(Form::GradeTooLowException());

    const std::string lines[] = {
        "       _-_",
        "    /~~   ~~\\",
        " /~~         ~~\\",
        "{               }",
        " \\  _-     -_  /",
        "   ~  \\\\ //  ~",
        "_- -   | | _- _",
        "  _ -  | |   -_",
        "      // \\\\"
    };

    for (int i = 0; i < 8; i++)
        std::cout << lines[i] << std::endl;
}

