/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:40:34 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/13 12:48:31 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale.h>

int main (int argc, char **argv)
{
    int j;
    
    if (!argv[1])
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (0);
    }
    j = 1;
    while(argv[j])
    {
        for (int i=0; i < std::strlen(argv[j]); i++)
        {
            std::cout << (char)std::toupper(argv[j][i]);
        }
        j++;
    }
    return 0;
}