/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:12:33 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/28 17:25:08 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "0123456789";
	char	*str2 = "0l23456789";

	printf("obsahuje %s pouze cisla? %d = ano\n", str1, ft_str_is_numeric(str1));
	printf("obsahuje %s pouze cisla? %d = ne\n", str2, ft_str_is_numeric(str2));
}*/
