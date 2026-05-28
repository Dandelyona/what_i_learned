/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:46:02 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/28 19:56:18 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "CAUKY";
	char	*str2 = "CAUKy";

	printf("obsahuje %s pouze velka pismena? %d = 
			ano\n", str1, ft_str_is_uppercase(str1));
	printf("obsahuje %s pouze velka pismena? %d = 
			ne\n", str2, ft_str_is_uppercase(str2));
}*/
