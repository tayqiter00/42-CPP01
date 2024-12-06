/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:45:10 by qtay              #+#    #+#             */
/*   Updated: 2024/09/19 16:48:20 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotSed.hpp"

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		NotSed	somefile(av[1]);
		somefile.replaceString(av[2], av[3]);
	}
	else
		std::cout << "Invalid num of arguments!\n";
}
