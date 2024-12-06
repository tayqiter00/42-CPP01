/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:07:41 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 22:41:01 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOTSED_HPP
# define NOTSED_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

class NotSed
{
private:
	std::fstream	infile;
	std::fstream	outfile;

public:
	NotSed(std::string filename);
	~NotSed();
	void replaceString(std::string str1, std::string str2);
};

#endif
