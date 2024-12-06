/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:16:03 by qtay              #+#    #+#             */
/*   Updated: 2024/12/05 21:33:53 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * Declaration and initialization must happen together since we only provide
 * with a parameterized constructor.
 */
void	randomChump(std::string name)
{
	// Zombie	zombie = Zombie(name);
	Zombie	zombie(name);
	zombie.announce();
}
