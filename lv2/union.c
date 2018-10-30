/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:34:55 by jcornil           #+#    #+#             */
/*   Updated: 2018/08/15 23:35:00 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_seen_before(char *s, int index, char c)
{
	int i;

	i = 0;
	while (++i < index)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	while (s1[i])
	{
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
	i++;
	}
	j = 0;
	{
	while (s2[j])
	{
		if (not_seen_before(s1, i, s2[j]) && not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
		j++;
	}
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
