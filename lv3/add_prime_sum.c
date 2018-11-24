/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:56:39 by jcornil           #+#    #+#             */
/*   Updated: 2018/11/24 14:35:17 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	is_neg;
	int	number;

	i = 0;
	is_neg = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		is_neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (is_neg)
		return (-number);
	else
		return (number);
}

int	ft_is_prime(int n)
{
	int prime;

	prime = n / 2;
	if (n <= 1)
		return (0);
	if (n == 2 || (prime * 2) != n)
		return (1);
	else
		return (0);
}

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(int ac, char **av)
{
	int	i;
	int	sum;
	int	prime;	

	if (ac == 2)
		{
			prime = ft_atoi(av[1]);
			if (prime < 0)
				{
					write(1,"\n",1);
					return(0);
				}		
			sum = 0;
			i = 0;
			while (i <= prime)
				{
					if (ft_is_prime(i))
					{
						sum += i;
						ft_putchar('[');
						ft_putnbr(sum);
						ft_putchar(']');
						ft_putchar('\t');
					}
					i++;
				}
			ft_putnbr(sum);
		}
	write (1,"\n",1);
	return (0);
}
