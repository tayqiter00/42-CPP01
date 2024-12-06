/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:05:01 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 20:57:30 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * The "new" keyword returns a pointer to the type of the class
 */
Zombie*	newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
}
