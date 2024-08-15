/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:23:28 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/08/15 17:20:21 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string	get_file_content(std::ifstream& infile)
{
	std::string	line;
	std::string	content;

	while (std::getline(infile, line))
		content += line + '\n';
	return (content);
}

std::string	replace_strings(std::string content, std::string s1, std::string s2)
{
	size_t	pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	return content;
}
