/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:35:07 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 22:18:01 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon()
{
}

/**
 * This parameterized constructor is required if you look at the main() given
 * in the subject PDF.
 */
Weapon::Weapon(const std::string type)
{
	this->setType(type);
}

void	Weapon::setType(const std::string type)
{
	this->_type = type;
}

/**
 * Take note that you do not need to add & in front of this->_type
 */
const std::string	&Weapon::getType(void)
{	
	return (this->_type);
}
