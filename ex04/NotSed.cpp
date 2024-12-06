/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:07:39 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 22:58:58 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotSed.hpp"

/**
 * .open and .close are methods from the <fstream> library
 */
NotSed::NotSed(std::string filename)
{
	this->infile.open(filename.c_str(), std::ios::in);
	if (!this->infile)
	{
		std::cerr << "Infile couldn't be opened!" << std::endl;
		std::exit(1);
	}
	this->outfile.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
	if (!this->outfile)
	{
		std::cerr << "Outfile couldn't be opened!" << std::endl;
		std::exit(1);
	}
}

NotSed::~NotSed(void)
{
	this->infile.close();
	this->outfile.close();
}

/**
 * std::getline() reads until \n is met and stores the string
 * the .find method then attempts to locate the substr
 * std::string::npos means invalid or non-existent position
 * if pos is valid, extract the line until the substr and write it into the outfile
 * then write the replacement string into the outfile too
 * change the starting position to after the substr
 * find the next pos (pos + str1.length() tells .find to start searching from which index. Default is 0)
 */
void NotSed::replaceString(std::string str1, std::string str2)
{
	std::string	line;
	size_t	start;
	size_t	pos;

	while (std::getline(this->infile, line))
	{
		start = 0;
		pos = line.find(str1);
		while (true)
		{
			if (pos != std::string::npos)
			{
				this->outfile << line.substr(start, pos - start);
				this->outfile << str2;
				start = pos + str1.length();
				pos = line.find(str1, pos + str1.length());
			}
			else
			{
				this->outfile << line.substr(start, line.length() -  start) << std::endl;
				break ;
			}
		}
	}	
}
