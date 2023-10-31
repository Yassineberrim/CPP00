/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:15:14 by yberrim           #+#    #+#             */
/*   Updated: 2023/10/31 20:16:44 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j];j++)
            {
                std::cout <<(char)std::toupper(av[i][j]);
            }
        }
        std::cout << std::endl;
    }
    return 0;
}