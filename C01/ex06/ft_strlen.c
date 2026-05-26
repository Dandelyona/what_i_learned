/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:24:01 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/26 18:09:27 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int 	main(void)
{
	char	*str = "Hello World!\n";
	int	length;

	length = ft_strlen(str);
	printf("Retezec: %s\nDelka: %d znaku\n", str, length);
}*/
