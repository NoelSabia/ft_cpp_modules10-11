#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm: public Form
{
	private:
		const std::string target;

	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm&  operator=(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();

		void        execute(const Bureaucrat& executor) const;
};


#endif