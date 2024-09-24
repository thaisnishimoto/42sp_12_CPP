/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:50:09 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/09/24 11:20:27 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DefineType.hpp"
#include "Colors.hpp"

int	main()
{
	{
	std::cout << YELLOW << "TEST 1. DEFINE TYPES" << RESET << std::endl;
	std::cout << std::boolalpha;
	std::cout << "_isChar(\"c\"): " << _isChar("c") << std::endl;    // true
	std::cout << "_isChar(\"a\"): " << _isChar("a") << std::endl; // true
	std::cout << "_isChar(\" \"): " << _isChar(" ") << std::endl;    // true
	std::cout << "_isChar(\"0\"): " << _isChar("0") << std::endl; // false
	std::cout << "_isChar(\"\\n\"): " << _isChar("\n") << std::endl;        // false
	std::cout << "_isChar(\"abc\"): " << _isChar("abc") << std::endl;        // false
	
	std::cout << std::endl;
	std::cout << "_isInt(\"0\"): " << _isInt("0") << std::endl;    // true
	std::cout << "_isInt(\"-42\"): " << _isInt("-42") << std::endl; // true
	std::cout << "_isInt(\"42\"): " << _isInt("42") << std::endl;    // true
	std::cout << "_isInt(\"+42\"): " << _isInt("+42") << std::endl; // true 
	std::cout << "_isInt(\"42.42f\"): " << _isInt("42.42f") << std::endl;    // false
	std::cout << "_isInt(\"42.42\"): " << _isInt("42.42") << std::endl;    // false
	std::cout << "_isInt(\"abc\"): " << _isInt("abc") << std::endl;        // false
	
	std::cout << std::endl;
	std::cout << "_isFloat(\"42.0f\"): " << _isFloat("42.0f") << std::endl;    // true
	std::cout << "_isFloat(\"-42.42f\"): " << _isFloat("-42.42f") << std::endl; // true
	std::cout << "_isFloat(\"-42.42f\"): " << _isFloat("+42.42f") << std::endl; // true
	std::cout << "_isFloat(\"42.42\"): " << _isFloat("42.42") << std::endl;    // false
	std::cout << "_isFloat(\"4.2.0f\"): " << _isFloat("4.2.0f") << std::endl;    // false
	std::cout << "_isFloat(\"42.42f2\"): " << _isFloat("42.42f2") << std::endl; // false
	std::cout << "_isFloat(\"42.42ff\"): " << _isFloat("42.42ff") << std::endl; // false
	std::cout << "_isFloat(\"abc\"): " << _isFloat("abc") << std::endl;        // false
	
	std::cout << std::endl;
	std::cout << "_isDouble(\"42.42\"): " << _isDouble("42.42") << std::endl;    // true
	std::cout << "_isDouble(\"-42.42\"): " << _isDouble("-42.42") << std::endl;    // true
	std::cout << "_isDouble(\"+42.42\"): " << _isDouble("+42.42") << std::endl;    // true
	std::cout << "_isDouble(\"42.000\"): " << _isDouble("42.000") << std::endl;    // true
	std::cout << "_isDouble(\"42.0f\"): " << _isDouble("42.0f") << std::endl;    // false
	std::cout << "_isDouble(\"-42.42f\"): " << _isDouble("-42.42f") << std::endl; // false
	std::cout << "_isDouble(\"abc\"): " << _isDouble("abc") << std::endl;        // false
	}
	return 0;
}

