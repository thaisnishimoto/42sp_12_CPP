/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <thaismnishimoto@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:39:18 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/21 12:39:21 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <list>
#include <iostream>
#include <sstream> //istringstream
#include <stdexcept> //invalid_argument, runtime_error, domain_error

class    RPN
{
public:
    RPN();
    RPN(const RPN& src);
    RPN& operator=(const RPN& rhs);
    ~RPN();

    void    processExpression(std::string expression);
    bool    isValidDigit(std::string elem);
    int    getOperand();
    void    addValues();
    void    subtractValues();
    void    multiplyValues();
    void    divideValues();

private:
    std::stack<int, std::list<int> >    _operands;
};

#endif