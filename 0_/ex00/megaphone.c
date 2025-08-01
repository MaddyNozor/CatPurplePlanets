/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:47:11 by mairivie          #+#    #+#             */
/*   Updated: 2025/08/01 18:00:44 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>

    //    int toupper(int c);
    //    int tolower(int c);

void string_upper(char **str_adr)
{
    while (**str_adr)
    {
        write(1, toupper(str_adr++), 1);
    }
}
    

int main(int ac, char **av)
{
    if (ac == 1)
        printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    return (1);
    
}