#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::strlen(std::string str) const
{
	if (str.empty() == true)
		return ("no Information given.");
	return (str);
}

int Contact::number(std::string str) const
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == false)
			return (0);
	}
	return (1);
}

void Contact::init()
{
	std::string temp;

	std::cout << "Enter first name: " << std::flush;
	std::cin >> first_name;
	first_name = strlen(first_name);

	std::cout << "Enter last name: " << std::flush;
	std::cin >> last_name;
	last_name = strlen(last_name);

	std::cout << "Enter nickname: " << std::flush;
	std::cin >> nickname;
	nickname = strlen(nickname);

	std::cout << "Enter phone number: " << std::flush;
	std::cin >> temp;
	phone_num = number(temp);

	std::cout << "Enter darkest secret: " << std::flush;
	std::cin >> darkest_secret;
	darkest_secret = strlen(darkest_secret);

	
}

std::string Contact::max_signs(std::string str)
{
	std::string temp;

	if (str.length() > 10)
	{
		temp = str.substr(0, 9);
		temp += ".";
		return (temp);
	}
	return (str);
}

void Contact::search_user(int index)
{
	std::string temp;
	std::cout << "Index: " << index << std::flush;
	std::cout << "|" << std::flush;

	temp = max_signs(first_name);
	std::cout << "First Name: " << temp << std::flush;
	std::cout << "|" << std::flush;

	temp = max_signs(last_name);
	std::cout << "Last Name: " << temp << std::flush;
	std::cout << "|" << std::flush;

	temp = max_signs(nickname);
	std::cout << "Nickname: " << temp << std::endl;
}
