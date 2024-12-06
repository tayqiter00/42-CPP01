/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:27:28 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 22:33:17 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

/**
 * The Constructor should NOT take a Weapon object as one if its parameters.
 * This means HumanB will be created without a weapon initially.
 * 
 * Once we create a weapon for HumanB, it'll have to be passed as reference in
 * the setWeapon() function so that any changes made in the original weaponB
 * object will be reflected in Human B.
 * 
 * However, this isn't sufficient as another copying will be done in the
 * setWeapon() function. We cannot declare the member variable WeaponB as a
 * reference because references must be initialized at the time of construction
 * using a Constructor (but the PDF forbids that).
 * 
 * In order for HumanB to still get the original weaponB, we turn to pointers
 * instead.
 * 
 * In the setWeapon() function _weaponB is set to the address of the original
 * weapon project.
 * 
 */
class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weaponB;

	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weaponB);
		void	attack(void);
};

#endif