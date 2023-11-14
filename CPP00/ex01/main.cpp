/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:36:05 by yberrim           #+#    #+#             */
/*   Updated: 2023/11/13 22:25:51 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string input;
    PhoneBook phonebook;
    Contact contact;
    while (true)
    {
        std::cout << "Entrez Votre Commande" << std::endl;
        std::cin >> input;
        if(input == "Exit")
            break;
        else if(input == "ADD")
            phonebook.add_contact();
        else if(input == "SEARCH")
            phonebook.display_contact();
        else
            std::cout << "Commande Invalide" << std::endl;
    }
    return 0;
    
}