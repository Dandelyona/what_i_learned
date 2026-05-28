/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:38:11 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/28 16:45:06 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "M@minka";
	char	*str2 = "Maminka";

	printf("Obsahuje string %s pouze pismena? 
	%d = ne\n", str1, ft_str_is_alpha(str1));
	printf("Obsahuje string %s pouze pismena? 
	%d = ano \n", str2, ft_str_is_alpha(str2));
}*/
