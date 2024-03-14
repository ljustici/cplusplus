/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:25:12 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/13 19:54:42 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zomb = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        zomb[i].setName(name + std::to_string(i));
    return (zomb);   
}