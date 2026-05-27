/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:48:16 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/27 19:42:30 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Destinace";
	char	src[] = "Zdroj";

	printf("destinace pred: %s\n", dest);
	ft_strcpy(dest, src);
	printf("destinace po: %s\n", dest);
}*/
