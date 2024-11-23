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

#include <iostream>
#include <stack>

class    RPN
{
public:
    RPN();
    RPN(const RPN& src);
    RPN& operator=(const RPN& rhs);
    ~RPN();

    void    processExpression(std::string expression);

private:
    std::stack<int>    _operands;
};

#endif