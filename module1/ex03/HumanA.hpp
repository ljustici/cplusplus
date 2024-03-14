/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:57:53 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/14 14:08:22 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

/**
 * Weapon must be able to change with setWeapon. 
 * If _weapon is not a reference, it can't change
 * By providing a reference, we can change its type
 * It could also be a pointer, but pointers can be
 * NULL and weapon is not supposed to be NULL in this
 * class.
*/
class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();

    private:
        std::string _name;
        Weapon &_weapon;
};

#endif