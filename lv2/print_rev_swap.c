/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inv_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 19:50:22 by jcornil           #+#    #+#             */
/*   Updated: 2018/08/16 14:40:17 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

int		main(int ac, char **av)
{
	int n = 150;
	printf(">> NORMAL");
	print_bits(n);
	printf("\n>> SWAP");
	print_bits(n >> 4| n << 4);
	printf("\n>> REVERSE");
	print_bits(~n);
	printf("\n");
}
