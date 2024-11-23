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
  std::istringstream  stream(expression);
  std::string elem;
  while (stream >> elem)
  {
    if (isValidDigit(elem))
      continue;
    else if (elem == "+")
      addValues();
    else if (elem == "-")
      subtractValues();
    else if (elem == "*")
      multiplyValues();
    else if (elem == "/")
      divideValues();
    else
      throw std::invalid_argument("Error");
  }
  if (_operands.size() == 1)
    std::cout << _operands.top() << std::endl;
  else
    throw std::runtime_error("Error");
}

bool  RPN::isValidDigit(std::string elem)
{
  std::istringstream  stream(elem);
  int num;

  if (!(stream >> num) || !stream.eof())
    return false;

  if (num >= 10)
    throw std::invalid_argument("Error");

  _operands.push(num);
  return true;
}

int RPN::getOperand()
{
  if (_operands.empty())
    throw std::runtime_error("Error");
  int operand = _operands.top();
  _operands.pop();
  return operand;
}

void  RPN::addValues()
{
  int num2 = getOperand();
  int num1 = getOperand();
  _operands.push(num1 + num2);
}

void  RPN::subtractValues()
{
  int num2 = getOperand();
  int num1 = getOperand();
  _operands.push(num1 - num2);
}

void  RPN::multiplyValues()
{
  int num2 = getOperand();
  int num1 = getOperand();
  _operands.push(num1 * num2);
}

void  RPN::divideValues()
{
  int num2 = getOperand();
  int num1 = getOperand();
  if (num2 == 0)
    throw std::domain_error("Error");
  _operands.push(num1 / num2);
}