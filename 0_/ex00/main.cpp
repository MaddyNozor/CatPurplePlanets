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
#include <locale>

# define SUCCESS 0

std::string    scream_this(std::string str)
{
    int j = 0;

    while(str[j])
    {
        str[j] = std::toupper(str[j]);
        j++;
    }
    return (str);
}

int     main(int ac, char **av)
{
    int i;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return SUCCESS;
    }
    i = 1;
    while(av[i])
    {
        std::string sentence = av[i++];        
        std::cout << scream_this(sentence);
    }
    std::cout << std::endl;
    return SUCCESS;
}

/*    
    i = 1;
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            av[i][j] = std::toupper(av[i][j]);
            j++;
        }
        std::cout << av[i++];
    }
    std::cout << std::endl;
    return SUCCESS;
} 
*/