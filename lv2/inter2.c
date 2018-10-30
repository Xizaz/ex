/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:46:18 by jcornil           #+#    #+#             */
/*   Updated: 2018/08/15 12:59:30 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int verif_doub(char *str, char c, int index)
{
	int i;

	i = 0;
	while(i < index)
	{
		if (c == str[i])
			return(0);
		i++; 
	}
	return(1);
}

void inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		if (verif_doub(s1, s1[i], i) == 1)
		{
			j = 0;
			while(s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);
					break ;
				}
			j++;
			}
		}
	i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1,"\n",1);
	return(0);
}
