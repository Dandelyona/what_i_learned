/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:58:52 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/25 18:12:15 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	div, mod, num1, num2;
	num1 = 4020;
	num2 = 1980;

	ft_div_mod(num1, num2, &div, &mod);

	printf("%d divided by %d =  %d\n with remainder %d\n", num1, num2, div, mod);
	return (0);
}*/
