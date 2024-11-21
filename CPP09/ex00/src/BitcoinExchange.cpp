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

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) : _btcPriceDB(src._btcPriceDB)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    if (this != &rhs)
        this->_btcPriceDB = rhs._btcPriceDB;
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
    if (line!= "date,exchange_rate")
    {
        dbFile.close();
        throw std::runtime_error("invalid header format in data.csv");
    }

    //Check if db is empty
    if (dbFile.peek() == std::ifstream::traits_type::eof())
    {
        dbFile.close();
        throw std::runtime_error("data.csv has no data.");
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

    //Check if input file is empty
    if (inputFile.peek() == std::ifstream::traits_type::eof())
    {
        inputFile.close();
        throw std::runtime_error("input file has no data.");
    }

    //Calculate btc price for each input line
    std::string line;
    while (std::getline(inputFile, line))
        calculatePrice(line);

    inputFile.close();
}

void BitcoinExchange::calculatePrice(std::string line)
{
    if (!isValidInput(line))
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }

    std::istringstream  streamLine(line);
    std::string date;
    char    delim;
    double  value;
    streamLine >> date >> delim >> value;

    if (!isValidDate(date))
    {
        std::cout << "Error: invalid date => " << date << std::endl;
        return;
    }
    if (isValidValue(value))
    {
        float   rate = getPriceRate(date);
        std::cout << date << " => " << value << " = "<< value * rate << std::endl;
    }
    return;
}

static bool isDigit(std::string value)
{
    std::istringstream  iss(value);
    double  digits;
    if (!(iss >> digits))
        return false;
    if (!iss.eof())
        return false;
    return true;
}

bool BitcoinExchange::isValidInput(std::string line)
{
    std::size_t delimPos = line.find(" | ");
    if (delimPos == std::string::npos)
        return false;

    std::string dateStr = line.substr(0, delimPos);
    if (dateStr.empty() || dateStr.find(' ') != std::string::npos)
        return false;

    std::string valueStr = line.substr(delimPos + 3, std::string::npos);
    if (valueStr.empty() || valueStr.find(' ') != std::string::npos || !isDigit(valueStr))
        return false;

    return true;
}

static bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool BitcoinExchange::isValidDate(std::string date)
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;

    std::istringstream  dateStream(date);
    int year, month, day;
    char    dash;
    if (!(dateStream >> year >> dash >> month >> dash >> day))
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    if (month == 2)
    {
        if (isLeapYear(year) && day > 29)
            return false;
        if (!isLeapYear(year) && day > 28)
            return false;
    }
    return true;
}

bool BitcoinExchange::isValidValue(double value)
{
    if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if (value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

float BitcoinExchange::getPriceRate(const std::string date)
{
    std::map<std::string, float>::iterator  it;
    it = _btcPriceDB.lower_bound(date);
    if (it->first != date && it != _btcPriceDB.begin())
        --it;
    return it->second;
}