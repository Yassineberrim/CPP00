/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:56:07 by yberrim           #+#    #+#             */
/*   Updated: 2023/11/13 21:46:26 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>


class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone;
        std::string secret;

    public:
        void set_firstname(std::string firstname);
        void set_lastname(std::string last_name);
        void set_nickname(std::string nickname);
        void set_phone(std::string phone);
        void set_secret(std::string secret);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_phone_number();
        std::string get_secret();
};
#endif
