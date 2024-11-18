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
#include <version>

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
        throw std::runtime_error("could not open data.csv");

    //Check db header
    std::string line;
    std::getline(dbFile, line);
    if (line != "date,exchange_rate")
    {
        dbFile.close();
        throw std::runtime_error("invalid header format in data.csv");
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
    dbFile.close();
}

void BitcoinExchange::processInputFile(std::string filepath)
{
    std::ifstream   inputFile(filepath.c_str());
    if (!inputFile.is_open())
        throw std::runtime_error("could not open input file");

    //Check input file header
    std::string firstLine;
    std::getline(inputFile, firstLine);
    if (firstLine != "date | value")
    {
        inputFile.close();
        throw std::runtime_error("invalid header format in input file");
    }

    std::string line;
    while (std::getline(inputFile, line))
        calculatePrice(line);

    inputFile.close();
}

void BitcoinExchange::calculatePrice(std::string line)
{
    std::istringstream  streamLine(line);
    std::string date;
    char    delim;
    double  value;
    if (!(streamLine >> date >> delim >> value) || delim != '|')
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }
    // if (isValidDate(date) && isValidValue(value))
    // {
    //     float   rate =
    //     std::cout << date << " => " << value * rate << std::endl;
    // }
    return;
}