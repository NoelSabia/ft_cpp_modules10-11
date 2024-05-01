#include "replace.hpp"

Replace::Replace(std::string filename) : filename(filename)
{
	std::cout << "Constructor called" << std::endl;
	this->resultfilename = filename + ".replace";
}

Replace::~Replace()
{
	std::cout << "Destructor called" << std::endl;
}

void Replace::replace(std::string s1, std::string s2)
{
	std::ifstream file(this->filename.c_str());
	std::ofstream resultfile(this->resultfilename.c_str());
	std::string line;

	if (!file.is_open() || !resultfile.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}

	while (std::getline(file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		resultfile << line << std::endl;
	}
	file.close();
	resultfile.close();
}
