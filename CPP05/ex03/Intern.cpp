#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
    return (*this);
}

Form*   Intern::makeForm(std::string name, std::string target)
{

    std::string formNames[] =
	{
        "RobotomyRequestForm",
        "PresidentialPardonForm",
        "ShrubberyCreationForm"
    };
    Form*    forms[] =
	{
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    
    for (int i = 0; i < 3; i++)
	{
        if (name == formNames[i])
		{
            std::cout << "Intern is working on " << name << std::endl;
            return (forms[i]);
        }
    }
    std::cout << "Intern cannot work on " << name << " form" << std::endl;
    return (NULL);
}