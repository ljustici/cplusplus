/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:25:40 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/13 19:48:14 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n;
    Zombie *horde;
    
    n = 10;
    horde = zombieHorde(10, "Menganito");
    for (int i = 0; i < n; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}