/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:30:39 by qtay              #+#    #+#             */
/*   Updated: 2024/09/18 23:12:25 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie		*zombies;
	std::string	name;
	std::string	num;
	
	std::cout << "Enter the number of zombies: ";
	std::getline(std::cin, num);
	std::cout << "Enter the name of the zombies: ";
	std::getline(std::cin, name);
	zombies = zombieHorde(atoi(num.c_str()), name);
	delete[] zombies;
}
