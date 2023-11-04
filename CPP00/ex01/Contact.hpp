/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:56:07 by yberrim           #+#    #+#             */
/*   Updated: 2023/11/04 17:45:28 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void set_contact();
        std::string get_firs_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkest();
};

#endif