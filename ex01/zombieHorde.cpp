/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:30:47 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 20:56:55 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * new Zombie[N] constructs N objects of Zombie in a single contiguous block
 * of memory.
 * 
 * Look at the main() function to see how the memory is freed using delete
 */
Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	return (zombies);
}
