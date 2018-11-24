/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 11:58:45 by jcornil           #+#    #+#             */
/*   Updated: 2018/07/30 11:58:52 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int ac, char **av)
{
    int hint = 0;
    
    if (ac == 1)
    {
        printf("Number of hints (max 3): ");
        scanf("%d",&hint);
        if (hint >= 1 && hint <= 3)
        {
            if (hint >= 1)
                printf("Deal with -\n");
            if (hint >= 2)
                printf("recursion\n");
            if (hint == 3)
                printf("10%%\n");
        }
    }
    return(0);
}