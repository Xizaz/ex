/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inv_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 19:50:22 by jcornil           #+#    #+#             */
/*   Updated: 2018/08/15 20:46:54 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char swap(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (octet >= 0 && i)
	{
		(octet / i) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}

void	print_bits2(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

int		main(int ac, char **av)
{
	int n = 5;
	print_bits(n);//
	write(1, "\n", 1);//
	print_bits2(swap(n));
}
