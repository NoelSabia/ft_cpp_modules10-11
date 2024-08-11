#include "BitcoinExchange.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (EXIT_FAILURE);
    }
    std::ifstream input_db(argv[1], std::ifstream::in);
    if (!input_db.is_open())
        return 1;

    std::ifstream internal_db("./data.csv", std::ifstream::in);
    if (!internal_db.is_open())
        return 1;

    BitcoinExchange btc;
    btc.read_db(internal_db);

    std::string line;
    std::getline(input_db, line);
    while (std::getline(input_db, line))
    {
        size_t delim = line.find('|');
        if (delim == std::string::npos || line.length() < delim + 2)
        {
            std::cout << "Error: bad input => " << "\"" << line << "\"" << std::endl;
            continue;
        }
        std::string date = line.substr(0, delim - 1);
        if (!btc.check_date_format(date) || !btc.check_date_validity(date))
            continue;
        std::string rate_as_str = line.substr(delim + 2);
        if (!btc.check_rate_format(rate_as_str))
            continue;
        float rate = ft_stof(rate_as_str);
        std::cout << date << " => " << rate << " = " << std::fixed << std::setprecision(2) << rate * btc.get_rate_from_db(date) << std::endl;
    }
    input_db.close();
    internal_db.close();
    return 0;
}
