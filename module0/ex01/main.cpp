/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:45:21 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/07 15:49:37 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void showWelcome()
{
    std::cout << "___________________" << std::endl;
    std::cout << "     PHONEBOOK     " << std::endl;
    std::cout << "___________________" << std::endl;
}

void showMenu()
{
    std::cout << std::endl << std::setfill (' ') << std::setw(10)<< "SEARCH - ADD - EXIT"  << std::endl;
}

int main(void)
{
    PhoneBook phonebook;
    std::string input;

    system("clear");
    showWelcome();
    showMenu();
    while (std::getline(std::cin, input))
    {
        if (input == "EXIT" || input == "exit")
            break;
        else if (input == "SEARCH" || input == "search")
            phonebook.listBook();
        else if (input == "ADD" || input == "add")
            phonebook.addContact();
        else
            std::cout << "Command not found." << std::endl;
        showMenu();
    }
    return (0);
}