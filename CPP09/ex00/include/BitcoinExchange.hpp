/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <thaismnishimoto@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:29:13 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/17 15:29:17 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <map>
#include <iostream>
#include <string> //getline
#include <fstream> //ifstream
#include <sstream> //istringstream

class    BitcoinExchange {

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& src);
    BitcoinExchange&    operator=(const BitcoinExchange& rhs);
    ~BitcoinExchange();

    void    loadDB(void);
	void	processInputFile(std::string filepath);
    void    calculatePrice(std::string line);
    bool    isValidDate(std::string date);
    bool    isValidValue(double value);
    float   getPriceRate(const std::string date);

private:
    std::map<std::string, float>    _btcPriceDB;
};

#endif
