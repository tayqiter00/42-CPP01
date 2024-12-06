/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:40:02 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 22:04:12 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

/**
 * The weapon class is passed by reference so that any changes made to the
 * original club will be reflected in HumanA.
 * 
 * Using  member initialization lists ensures that HumanA will always have a
 * weapon.
 */
HumanA::HumanA(std::string name, Weapon &weaponA)
	: _name(name), _weaponA(weaponA)
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their "
		<< this->_weaponA.getType() << std::endl;
}
