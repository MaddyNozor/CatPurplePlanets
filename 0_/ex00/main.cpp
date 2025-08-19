/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:01:24 by mairivie          #+#    #+#             */
/*   Updated: 2025/08/01 17:01:25 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define SUCCESS 0;

int     main(int ac, char **av)
{
    int i = 1;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return SUCCESS;
    }
    while(av[i])
    {
        std::cout << av[i] << " ";
        i++;
    }
    std::cout << std::endl;
    return SUCCESS;
}