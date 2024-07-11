#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		const std::string   target;

	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm&  operator=(ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

		void        execute(const Bureaucrat& executor) const;
};


#endif