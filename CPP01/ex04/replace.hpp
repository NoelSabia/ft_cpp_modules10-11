#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Replace
{
	private:
		std::string filename;
		std::string resultfilename;

	public:
		Replace(std::string filename);
		~Replace();
		void replace(std::string s1, std::string s2);
};

#endif