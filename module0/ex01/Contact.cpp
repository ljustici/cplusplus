/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:43:42 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/14 14:13:16 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() // Constructor
{
}

Contact::~Contact() // Destructor
{
}

void Contact::setContact(int index, std::string name, std::string last, std::string nick, std::string number, std::string secret) // Constructor
{
    this->_index = index;
    this->_name = name;
    this->_lastName = last;
    this->_nickName = nick;
    this->_number = number;
    this->_secret = secret;
}

int Contact::getIndex()
{
    return (this->_index);
}

void Contact::setIndex(int index)
{
    this->_index = index;
}

std::string Contact::getName()
{
    return (this->_name);
}

std::string formatString(std::string str)
{
    if (str.length() >= 10)
        return (str.substr(0, 9).append(".")); 
    return (str);
}

void Contact::showContact()
{
    std::cout << "|";
    std::cout << std::setfill (' ') << std::setw(10) << this->_index % 8;
    std::cout << "|";
    std::cout << std::setw(10) << formatString(this->_name);
    std::cout << "|";
    std::cout << std::setw(10) << formatString(this->_lastName);
    std::cout << "|";
    std::cout << std::setw(10) << formatString(this->_number);
    std::cout << "|" << std::endl;
    std::cout << std::setfill ('-') << std::setw (45) << "-" << std::endl;
}

void Contact::printContact()
{
    std::cout << "Index: " << this->_index % 8 << std::endl;
    std::cout << "Name: " << this->_name << std::endl;
    std::cout << "Last name: " << this->_lastName << std::endl;
    std::cout << "Number: " << this->_number << std::endl;
    std::cout << "Darkest secret: " << this->_secret << std::endl;
}
