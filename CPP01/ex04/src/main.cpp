/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:23:28 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/15 17:20:50 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error. Strings cannot be empty" << std::endl;
		return (1);
	}
	std::ifstream	infile;
	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error. Could not open file " << argv[1] << std::endl;
		return (1);
	}
	std::string	content = get_file_content(infile);
	infile.close();

	std::string	modified_content = replace_strings(content, s1, s2);
	std::string	outfilename = filename + ".replace";
	std::ofstream	outfile(outfilename.c_str());
	outfile << modified_content;
	outfile.close();
	return (0);
}
