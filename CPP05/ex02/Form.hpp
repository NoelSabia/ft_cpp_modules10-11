#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				signed_in;
		int			sign_grade;
		int			execute_grade;

	public:
		Form(const std::string name, int sign_grade);
		Form(const std::string name, int sign_grade, int execute_grade);
		Form(const std::string name, bool signed_in, const int sign_grade, const int execute_grade);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		virtual ~Form();

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		beSigned(const Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw(){return ("Grade too high!");}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw(){return ("Grade too low!");}
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw(){return ("Form not signed!");}
		};

		virtual void	execute(const Bureaucrat& copy) const = 0;
};

std::ostream& operator<<(std::ostream& o, const Form& copy);

#endif 