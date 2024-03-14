/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:46:49 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/14 13:59:33 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon()
{
    
}

const std::string Weapon::getType()
{
    return(this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}