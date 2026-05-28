/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:57:14 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/28 20:11:57 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "qwerty!@#$";
	char	*str2 = "qwerty\n";

	printf("obsahuje %s pouze printables? %d = 
	ano\n", str1, ft_str_is_printable(str1));
	printf("obsahuje %s pouze printables? %d = 
	ne\n", str2, ft_str_is_printable(str2));
}*/
