/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:36:05 by yberrim           #+#    #+#             */
/*   Updated: 2023/11/04 17:15:22 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string input;
    PhoneBook pb;
    int i = 0;
    while (std::cin)
    {
        getline(std::cin,input);
        if(input == "ADD")
            pb.contact[i].set_contact();
    }    
}