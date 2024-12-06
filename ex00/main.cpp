/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:52:38 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 16:54:10 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * Zombies created on the heap must be deleted otherwise it won't be deleted.
 * You can see that its Destructor is not called if you omit "delete zombie1".
 */
int	main(void)
{
	Zombie	*zombie1;

	randomChump("Stack");
	zombie1 = newZombie("Heap");
	zombie1->announce();
	delete zombie1;
	return (0);
}
