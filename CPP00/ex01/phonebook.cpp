/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:53:34 by yberrim           #+#    #+#             */
/*   Updated: 2023/11/14 14:29:19 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
int PhoneBook::index = 0;
int PhoneBook::fill_index = 0;
void PhoneBook::add_contact()
{
    std::string input;
    std::cout << "Enter First Name: ";
    std::cin >> input;
    this->contact[fill_index].set_firstname(input);
    std::cout << "Enter Last Name: ";
    std::cin >> input;
    this->contact[fill_index].set_lastname(input);
    std::cout << "Enter Nick Name: ";
    std::cin >> input;
    this->contact[fill_index].set_nickname(input);
    std::cout << "Enter Phone Number: ";
    std::cin >> input;
    this->contact[fill_index].set_phone(input);
    std::cout << "Enter Darkest Secret: ";
    std::cin >> input;
    this->contact[fill_index].set_secret(input);
    if(index < 8)
        index++;
    fill_index++;
    if(fill_index >= 8)
        fill_index = 0;
}

void PhoneBook::display_contact()
{
    if(index == 0)
    {
        std::cout << "No Contact Found" << std::endl;
        return;   
    }
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for(int i = 0; i < index; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->contact[i].get_first_name() << "|";
        std::cout << std::setw(10) << this->contact[i].get_last_name() << "|";
        std::cout << std::setw(10) << this->contact[i].get_nick_name() << std::endl;
    }
    std::cout << "Enter Index: ";
    int i;
    std::cin >> i;
    if(i < 0 || i >= index)
    {
        std::cout << "Invalid Index" << std::endl;
        return;
    }
    std::cout << "First Name: " << this->contact[i].get_first_name() << std::endl;
    std::cout << "Last Name: " << this->contact[i].get_last_name() << std::endl;
    std::cout << "Nick Name: " << this->contact[i].get_nick_name() << std::endl;
    if(this->contact[i].get_phone_number().length() > 10)
        std::cout << "Phone Number: " << this->contact[i].get_phone_number().substr(0, 9) << "." << std::endl;
    else
        std::cout << "Phone Number: " << this->contact[i].get_phone_number() << std::endl;
}
