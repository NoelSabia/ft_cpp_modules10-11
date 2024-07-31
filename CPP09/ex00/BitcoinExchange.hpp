#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

class BitcoinExchange
{
    private:
        std::map<std::string, float> db;

    public:
        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange& to_copy);
        BitcoinExchange& operator=(const BitcoinExchange& to_copy);
        ~BitcoinExchange(void);

        void read_db(std::ifstream& internal_db);
        float get_rate_from_db(std::string& date);
        bool check_rate_format(std::string& rate);
        bool check_date_format(std::string& date);
        bool check_date_validity(std::string& date);
};

unsigned int ft_stou(const std::string& str);
float ft_stof(const std::string& str);

#endif
