/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:31:13 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/13 19:18:25 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *otherZomb;
    
    randomChump("Pepe Stack");
    otherZomb = newZombie("Fulanito Heap");
    otherZomb->announce();
    delete(otherZomb);

    return (0);
};