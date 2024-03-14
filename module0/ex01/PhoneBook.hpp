/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:51:02 by ljustici          #+#    #+#             */
/*   Updated: 2024/03/07 16:40:48 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <stdlib.h>
#include <ctype.h>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
        void listBook();

    private:
        int _index;
        Contact _contact[8];
        
};

#endif 