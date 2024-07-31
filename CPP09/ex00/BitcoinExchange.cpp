#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& to_copy)
{
    *this = to_copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& to_copy)
{
    this->db = to_copy.db;
    return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
}

unsigned int ft_stou(const std::string& str)
{
    unsigned int num = 0;
    std::istringstream inputStream(str);

    inputStream >> num;
    return (num);
}

float ft_stof(const std::string& str)
{
    float num = 0.0f;
    std::istringstream inputStream(str);

    inputStream >> num;
    return (num);
}

float BitcoinExchange::get_rate_from_db(std::string& date)
{
    if (this->db.count(date) > 0)
        return this->db.at(date);
    return (--this->db.lower_bound(date))->second;
}

bool BitcoinExchange::check_date_format(std::string &date)
{
	if (date.empty())
		return false;

 	size_t first_hyphen = date.find('-');
    size_t second_hyphen = date.find('-', first_hyphen + 1);

	if (first_hyphen == std::string::npos || second_hyphen == std::string::npos
	||  date.find_first_not_of("0123456789.-") != std::string::npos)
	{
	    std::cerr << "oben" << "\"" << date << "\"" << '\n';
		return false;
	}
	return true;
}

bool BitcoinExchange::check_date_validity(std::string& date)
{
	std::string s;
	int year, month, day;
	std::istringstream ss(date);
	int i = 0;

	while (std::getline(ss, s, '-'))
	{
		if (i == 0)
		{
			year = ft_stou(s);
			if (year < 2009 || year > 2022)
			{
				std::cerr << "mitte" << "\"" << date << "\"" << '\n';
				return false;
			}
		}
		if (i == 1)
		{
			month = ft_stou(s);
			if (month < 1 || month > 12)
			{
				std::cerr << "unten" << "\"" << date << "\"" << '\n';
				return false;
			}
		}
		if (i == 2)
		{
			day = ft_stou(s);
			if ((day < 1 || day > 31)
			||  (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			||  (day > 28 && month == 2))
			{
				std::cerr << "ganz unten" << "\"" << date << "\"" << '\n';
				return false;
			}
		}
		i += 1;
	}
	if (i != 3)
	{
		std::cerr << "hoelle" << "\"" << date << "\"" << '\n';
		return false;
	}
	return true;
}

bool BitcoinExchange::check_rate_format(std::string& rate)
{
	if (rate.empty() || rate.find_first_not_of("0123456789.-") != std::string::npos
	||  rate.at(0) == '.' || rate.find('.', rate.length() - 1) != std::string::npos)
		std::cerr << "hoelle1" << "\"" << rate << "\"" << '\n';
	else if (rate.at(0) == '-')
		std::cerr << "hoelle2" << '\n';
	else if (rate.length() > 10 || (rate.length() == 10 && rate > "2147483647"))
		std::cerr << "hoelle3" << '\n';
	else
		return true;
	return false;
}

void BitcoinExchange::read_db(std::ifstream& internal_db)
{
    std::string line;
    size_t delim;

    // skip first line
    std::getline(internal_db, line);
    while (std::getline(internal_db, line))
    {
        delim = line.find(',');
        std::string rate = line.substr(delim + 1);
        // set a new pair on the map <date, rate>
        this->db[line.substr(0, delim)] = ft_stof(rate);
    }
    internal_db.close();
}