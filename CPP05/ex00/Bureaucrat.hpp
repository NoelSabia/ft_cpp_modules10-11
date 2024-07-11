#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	
	public:
		Bureaucrat(const std::string name_input, int grade_input);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;

		void		increment_grade();
		void		decrement_grade();

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
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat &copy);

#endif
