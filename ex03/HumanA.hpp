/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:38:04 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 22:12:01 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

/**
 * HumanA takes the weapon in its Constrcutor. This means it cannot exist
 * without a weapon. Therefore, the weapon must be initialized at the time 
 * of the HumanA object construction using a constructor initializer list.
 * 
 * Weapon is passed by reference in the Constructor and in the member variable
 * so that HumanA holds the original Weapon. Otherwise, the weaponA object will
 * be copied twice - once in the Constructor another in the member variable
 * _weaponA.
 */
class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weaponA;

	public:
		HumanA(std::string name, Weapon &weaponA);
		void	attack(void);
};

#endif
