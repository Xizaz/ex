/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:42:19 by jcornil           #+#    #+#             */
/*   Updated: 2018/11/11 16:42:22 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	char c;

	if (ac == 2)
	{
		while (*av[1])
		{
			c = *av[1];
			if (c >= 'a' && c <= 'z')
			{
				while (c >= 'a')
				{
					write (1,&*av[1],1);
					c--;
				}
			}
			else if (c >= 'A' && c <= 'A')
			{
				while (c >= 'A')
				{
					write (1,&*av[1],1);
					c--;
				}
			}
			else
				write (1,&*av[1],1);
			av[1]++;
		}
	}
	write (1,"\n",1);
}
