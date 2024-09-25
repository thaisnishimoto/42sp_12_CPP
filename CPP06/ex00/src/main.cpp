/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:50:09 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/25 16:21:56 by tmina-ni         ###   ########.fr       */
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
	std::cout << "isInt(\"2147483647\"): " << isInt("2147483647") << std::endl; // true 
	std::cout << "isInt(\"-2147483648\"): " << isInt("-2147483648") << std::endl; // true 
	std::cout << "isInt(\"2147483648\"): " << isInt("2147483648") << std::endl; // false 
	std::cout << "isInt(\"-2147483649\"): " << isInt("-2147483649") << std::endl; // false 
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
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 3. CONVERT INT" << RESET << std::endl;
	ScalarConverter::converter("0");
	std::cout << std::endl;
	ScalarConverter::converter("-42");
	std::cout << std::endl;
	ScalarConverter::converter("42");
	std::cout << std::endl;
	ScalarConverter::converter("255");
	std::cout << std::endl;
	ScalarConverter::converter("-128");
	std::cout << std::endl;
	ScalarConverter::converter("2147483647"); //int_max
	std::cout << std::endl;
	ScalarConverter::converter("-2147483648"); //int_min
	std::cout << std::endl;
	ScalarConverter::converter("2147483648"); //int_max + 1
	std::cout << std::endl;
	ScalarConverter::converter("-2147483649"); //int_min - 1
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 4. CONVERT FLOAT" << RESET << std::endl;
	ScalarConverter::converter("0.0f");
	std::cout << std::endl;
	ScalarConverter::converter("-4.2f");
	std::cout << std::endl;
	ScalarConverter::converter("4.2f");
	std::cout << std::endl;
	ScalarConverter::converter("42.0f");
	std::cout << std::endl;
	ScalarConverter::converter("35000000000.0f"); //35 billion should overflow int
	std::cout << std::endl;
	ScalarConverter::converter("2147483648.0f"); //int_max + 1
	std::cout << std::endl;
	ScalarConverter::converter("-2147483649.0f"); //int_min - 1
	std::cout << std::endl;
	ScalarConverter::converter("0.0000000001f"); 
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << YELLOW << "TEST 6. CONVERT PSEUDO LITERALS" << RESET << std::endl;
	ScalarConverter::converter("+inff");
	std::cout << std::endl;
	ScalarConverter::converter("+inf");
	std::cout << std::endl;
	ScalarConverter::converter("-inff");
	std::cout << std::endl;
	ScalarConverter::converter("-inf");
	std::cout << std::endl;
	ScalarConverter::converter("nanf");
	std::cout << std::endl;
	ScalarConverter::converter("nan");
	std::cout << std::endl;
	}
	return 0;
}
