/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:29:36 by qtay              #+#    #+#             */
/*   Updated: 2024/11/07 16:58:16 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n" "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/**
 * return_type (ClassName::*pointer_name)(parameter_types) = &ClassName::member_function_name;
 * 
 * Allows easy polymorphism compared to if/else forest. Apparently is more scalable and flexible.
 */
void	Harl::complain(std::string level)
{
	size_t				i;
	const std::string	complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (i = 0; i < sizeof(complaints) / sizeof(std::string); i++)
	{
		if (complaints[i] == level)
			break ;
	}
	switch (i)
	{
		case 0:
            (this->*(&Harl::debug))();
			std::cout << std::endl;
			// fall through
		case 1:
            (this->*(&Harl::info))();
			std::cout << std::endl;
			// fall through
		case 2:
            (this->*(&Harl::warning))();
			std::cout << std::endl;
			// fall through
		case 3:
 			(this->*(&Harl::error))();
			std::cout << std::endl;
			break ;
		default:
			std::cout << " [ Probably complaining about insignificant problems ]\n";
			// ft_ptr = NULL;
			break;
	}
}
