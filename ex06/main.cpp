/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:35:47 by qtay              #+#    #+#             */
/*   Updated: 2024/11/07 16:29:45 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <ieee754.h>

int	main(int ac, char **av)
{
	Harl myHarl;

	if (ac == 2)
		myHarl.complain(av[1]);
	else
		std::cout << "Invalid num of arguments!\n";
	return (0);
}
