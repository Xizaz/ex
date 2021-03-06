/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 18:59:28 by jcornil           #+#    #+#             */
/*   Updated: 2018/07/26 18:59:30 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
/*
int main(int argc, const char *argv[])
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 0;
	b = 1;
	pa = &a;
	pb = &b;

	printf("%d %d \n", a, b);
	ft_swap(pa, pb);
	printf("%d %d \n", a, b);
	return 0;
}
*/