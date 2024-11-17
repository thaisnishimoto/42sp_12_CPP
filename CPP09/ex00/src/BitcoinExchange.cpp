/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <thaismnishimoto@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:28:19 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/17 15:28:22 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <fstream>

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) : _btcPriceDB(src._btcPriceDB)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    if (this != &rhs)
    {
        this->_btcPriceDB = rhs._btcPriceDB;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::loadDB()
{
    std::ifstream   dbFile("data.csv");
    if (!dbFile.is_open())
    {
        throw std::runtime_error("Error: could not open data.csv");
    }

    //Check db header
    std::string line;
    std::getline(dbFile, line);
    if (line != "date,exchange_rate")
    {
        throw std::runtime_error("Error: invalid header in data.csv");
    }

    //load data into map container
    while (std::getline(dbFile, line))
    {
        std::istringstream  streamLine(line);
        std::string date;
        float   price;

        std::getline(streamLine, date, ',');
        streamLine >> price;
        _btcPriceDB[date] = price;
    }

    std::map<std::string, float>::iterator  it = _btcPriceDB.begin();
    std::map<std::string, float>::iterator  ite = _btcPriceDB.end();
    while (it != ite)
    {
        std::cout << it->first << " --> " << it->second << std::endl;
        ++it;
    }
}
