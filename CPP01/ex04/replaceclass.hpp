#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Replaceclass
{
	private:
		std::string filename;

	public:
		Replaceclass(std::string filename);
		~Replaceclass();
		void replace(std::string s1, std::string s2);
};

#endif