/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:28:54 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 22:33:22 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

/**
 * WeaponB is passed as reference (i.e. original str is passed, no copying).
 * _weaponB is set to the ADDRESS of the original string.
 */
void	HumanB::setWeapon(Weapon &weaponB)
{
	this->_weaponB = &weaponB;	
}

void	HumanB::attack(void)
{
	if (this->_weaponB)
		std::cout << this->_name << " attacks with their "
			<< this->_weaponB->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon!" << std::endl;
}