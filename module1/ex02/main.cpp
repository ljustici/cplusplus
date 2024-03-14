/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:57:12 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/14 12:42:03 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Memory:" << std::endl
        << "- Memory address of the string variable 'brain': " << &brain << std::endl
        << "- Memory address held by stringPTR: " << stringPTR << std::endl
        << "- Memory address held by stringREF: " << &stringREF << std::endl
        << "Value:" << std::endl
        << "- The value of the string variable 'brain': " << brain << std::endl
        << "The value pointed to by stringPTR: " << *stringPTR << std::endl
        << "The value pointed to by stringREF: " << stringREF << std::endl;
    
    return (0);
}