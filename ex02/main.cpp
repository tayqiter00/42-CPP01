/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:57:47 by qtay              #+#    #+#             */
/*   Updated: 2024/09/19 00:14:15 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/**
 * A string reference is an alias for a string object
 */
int	main(void)
{
	std::string str = "HI THIS IS BRAIN";;
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << "Mem addr of str var          : " << &str << std::endl;
	std::cout << "Mem addr held by stringPTR   : " << stringPTR << std::endl;
	std::cout << "Mem addr held by stringREF   : " << &stringREF << std::endl << std::endl;

	std::cout << "Value of str var             : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
