/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:31:41 by qtay              #+#    #+#             */
/*   Updated: 2024/12/05 21:45:41 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

// #include "HumanA.hpp"
// #include "HumanB.hpp"
#include <string>
#include <iostream>

/**const std::string	&getType(void);
 * 
 * The const in front of getType() prevents _type from being modified, ensuring
 * encapsulation.
 * Return as reference to avoid copying overhead.
 */
class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(const std::string type);
		const std::string	&getType(void);
		void	setType(const std::string type);
};

#endif