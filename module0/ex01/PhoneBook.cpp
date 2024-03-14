/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:40:40 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/14 14:13:52 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string getValidString()
{
    std::string input;
    
    while(std::getline(std::cin, input))
    {
        if (!input.empty())
            break;
    }
    return(input);
}

void PhoneBook::addContact()
{
    std::string name;
    std::string last;
    std::string nick;
    std::string number;
    std::string secret;
    Contact contact;
    
    std::cout << "Name" << std::endl;
    name = getValidString();
    std::cout << "Last name" << std::endl;
    last = getValidString();
    std::cout << "Nickname" << std::endl;
    nick = getValidString();
    std::cout << "number" << std::endl;
    number = getValidString();
    std::cout << "Darkest secret" << std::endl;
    secret = getValidString();
    contact.setContact(this->_index, name, last, nick, number, secret);
    this->_contact[this->_index % 8] = contact;
    this->_index++;
}

void PhoneBook::listBook()
{
    int i;
    std::string search;
    int n;

    system("clear"); //This exposes your program to vulnerabilities
    std::cout << std::setfill ('-') << std::setw (45) << "-" << std::endl
    << "|"
    << std::setfill (' ') << std::setw(10) << "INDEX"
    << "|"
    << std::setw(10) << "NAME"
    << "|"
    << std::setw(10) << "LAST NAME"
    << "|"
    << std::setw(10) << "NUMBER"
    << "|" << std::endl
    << std::setfill ('-') << std::setw (45) << "-" << std::endl;
    i = 0;
    while (!this->_contact[i].getName().empty() && i < 8)
    {
        this->_contact[i].showContact();
        i++;
    }
    std::cout << "Insert index of contact to see detail: " << std::endl;
    search = getValidString();
    if (isdigit(search[0]))
    {
        n = std::atoi(search.c_str());
        if (n < 8 && !this->_contact[n].getName().empty())
            this->_contact[n].printContact();
    }
}
