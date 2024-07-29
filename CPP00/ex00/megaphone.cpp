/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:01:23 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/07/29 12:19:02 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	arg;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (size_t j = 0; j < arg.length(); j++)
		{
			std::cout << static_cast<unsigned char>(std::toupper(arg[j]));
		}
	}
	std::cout << std::endl;
	return (0);
}
