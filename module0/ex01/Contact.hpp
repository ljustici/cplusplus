/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:53:47 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/07 16:41:38 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
    public:
        Contact();
        ~Contact();
        void setContact(int index, std::string name, std::string last, std::string nick, std::string number, std::string secret);
        void showContact();
        void printContact();
        int getIndex();
        void setIndex(int index);
        std::string getName();

    private:
        int    _index;
        std::string _name;
        std::string _lastName;
        std::string _nickName;
        std::string _number;
        std::string _secret;
    
};

#endif