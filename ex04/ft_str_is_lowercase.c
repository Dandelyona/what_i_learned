/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:25:56 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/28 19:44:13 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "slovicko";
	char	*str2 = "Slovicko";

	printf("obsahuje %s pouze mala pismena? %d = 
	ano\n", str1, ft_str_is_lowercase(str1));
	printf("obsahuje %s pouze mala pismena? %d = 
	ne\n", str2, ft_str_is_lowercase(str2));
}*/
