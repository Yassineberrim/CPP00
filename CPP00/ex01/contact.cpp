/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:35:07 by yberrim           #+#    #+#             */
/*   Updated: 2023/11/13 21:52:07 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_firstname(std::string firstname)
{
    this->firstname = firstname;
}
void Contact::set_lastname(std::string last_name)
{
    this->lastname = last_name;
}
void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::set_phone(std::string phone)
{
    this->phone = phone;
}
void Contact::set_secret(std::string secret)
{
    this->secret = secret;
}
std::string Contact::get_secret()
{
    return (this->secret);
}
std::string Contact::get_first_name()
{
    return (this->firstname);
}
std::string Contact::get_last_name()
{
    return (this->lastname);
}
std::string Contact::get_nick_name()
{
    return (this->nickname);
}
std::string Contact::get_phone_number()
{
    return (this->phone);
}
