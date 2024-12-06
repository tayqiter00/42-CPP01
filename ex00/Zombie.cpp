/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:03:58 by qtay              #+#    #+#             */
/*   Updated: 2024/12/05 21:38:11 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

/**
 * Zombie::Zombie(std::string name)
 * {
 *     this->_name = name;
 * }
 * 
 * In the method above, _name is default-constructed first, which initializes
 * it to an empty string "". The assignment is later performed in the
 * Constructor body.
 * 
 * The method below uses a member initializer list which directly
 * initializes _name to giveName without first calling its default Constructor.
 */
Zombie::Zombie(std::string name) : _name(name)
{
}

/**
 * Destructor is a member function that is invoked automatically whenever an
 * object is going to be destroyed
 */
Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been deleted" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
