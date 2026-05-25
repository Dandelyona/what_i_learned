/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:03:36 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/20 20:09:36 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 4200;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}*/
