/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:50:09 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 16:18:28 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DefineType.hpp"
#include "ScalarConverter.hpp"
#include "Colors.hpp"

int	main()
{
	{
	std::cout << YELLOW << "TEST 1. DEFINE TYPES" << RESET << std::endl;
	std::cout << std::boolalpha;
	std::cout << "isChar(\"c\"): " << isChar("c") << std::endl;    // true
	std::cout << "isChar(\"a\"): " << isChar("a") << std::endl; // true
	std::cout << "isChar(\" \"): " << isChar(" ") << std::endl;    // true
	std::cout << "isChar(\"0\"): " << isChar("0") << std::endl; // false
	std::cout << "isChar(\"\\n\"): " << isChar("\n") << std::endl;        // false
	std::cout << "isChar(\"abc\"): " << isChar("abc") << std::endl;        // false
	
	std::cout << std::endl;
	std::cout << "isInt(\"0\"): " << isInt("0") << std::endl;    // true
	std::cout << "isInt(\"-42\"): " << isInt("-42") << std::endl; // true
	std::cout << "isInt(\"42\"): " << isInt("42") << std::endl;    // true
	std::cout << "isInt(\"+42\"): " << isInt("+42") << std::endl; // true 
	std::cout << "isInt(\"42.42f\"): " << isInt("42.42f") << std::endl;    // false
	std::cout << "isInt(\"42.42\"): " << isInt("42.42") << std::endl;    // false
	std::cout << "isInt(\"abc\"): " << isInt("abc") << std::endl;        // false
	
	std::cout << std::endl;
	std::cout << "isFloat(\"42.0f\"): " << isFloat("42.0f") << std::endl;    // true
	std::cout << "isFloat(\"-42.42f\"): " << isFloat("-42.42f") << std::endl; // true
	std::cout << "isFloat(\"-42.42f\"): " << isFloat("+42.42f") << std::endl; // true
	std::cout << "isFloat(\"42.42\"): " << isFloat("42.42") << std::endl;    // false
	std::cout << "isFloat(\"4.2.0f\"): " << isFloat("4.2.0f") << std::endl;    // false
	std::cout << "isFloat(\"42.42f2\"): " << isFloat("42.42f2") << std::endl; // false
	std::cout << "isFloat(\"42.42ff\"): " << isFloat("42.42ff") << std::endl; // false
	std::cout << "isFloat(\"abc\"): " << isFloat("abc") << std::endl;        // false
	
	std::cout << std::endl;
	std::cout << "isDouble(\"42.42\"): " << isDouble("42.42") << std::endl;    // true
	std::cout << "isDouble(\"-42.42\"): " << isDouble("-42.42") << std::endl;    // true
	std::cout << "isDouble(\"+42.42\"): " << isDouble("+42.42") << std::endl;    // true
	std::cout << "isDouble(\"42.000\"): " << isDouble("42.000") << std::endl;    // true
	std::cout << "isDouble(\"42.0f\"): " << isDouble("42.0f") << std::endl;    // false
	std::cout << "isDouble(\"-42.42f\"): " << isDouble("-42.42f") << std::endl; // false
	std::cout << "isDouble(\"abc\"): " << isDouble("abc") << std::endl;        // false
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 2. CONVERT CHAR" << RESET << std::endl;
	ScalarConverter::converter("c");
	std::cout << std::endl;
	ScalarConverter::converter("a");
	std::cout << std::endl;
	ScalarConverter::converter(" ");
	std::cout << std::endl;
	ScalarConverter::converter("\n");
	std::cout << std::endl;
	}
	return 0;
}

