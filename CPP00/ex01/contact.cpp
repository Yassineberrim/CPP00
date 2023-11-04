/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:35:07 by yberrim           #+#    #+#             */
/*   Updated: 2023/11/04 17:18:11 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_contact()
{
    
        std::cout << "ENTER FIRST_NAME";
        getline(std::cin,first_name);   
        std::cout << "ENTER LAST_NAME";
        getline(std::cin,last_name);
        std::cout << "ENTER NICK_NAME";
        getline(std::cin,nick_name);
        std::cout << "ENTER PHONE_NUMBER";
        getline(std::cin,phone_number);
        std::cout << "ENTER DARKEST_SECRET";
        getline(std::cin,darkest_secret);
        return;
}
