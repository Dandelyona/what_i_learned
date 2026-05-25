/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:53:38 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/25 19:29:27 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int v1 = 15;
	int v2 = 3;
	int *a = &v1;
	int *b = &v2;

	printf("Pred callnutim funkce ft_ultimate_div_mod: \n");
	printf("Pointer 'a' ukazuje na adresu %p, ktera ma hodnotu %d\n", a, *a);
	printf("Pointer 'b' ukazuje na adresu %p, ktera ma hondotu %d\n", b, *b);
	ft_ultimate_div_mod(a, b);
	printf("\nPo callnuti fuknce ft_ultimate_div_mod: \n");
	printf("Pointer 'a' stale ukazuje na adresu %p, ale ted ma novou hodnotu %d\n", a, *a);
	printf("Pointer 'b' stale ukazuje na adresu %p, ale ted ma novou hodnotu %d\n", b, *b);
}*/
