/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <thaismnishimoto@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:39:44 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/21 12:39:46 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN& src) : _operands(src._operands)
{}

RPN& RPN::operator=(const RPN& rhs)
{
  if (this != &rhs)
  {
    _operands = rhs._operands;
  }
  return *this;
}

RPN::~RPN()
{}

void  RPN::processExpression(std::string expression)
{
  std::cout << expression << std::endl;
}