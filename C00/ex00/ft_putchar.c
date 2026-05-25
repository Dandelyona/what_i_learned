/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcopikov <dcopikov@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:02:33 by dcopikov          #+#    #+#             */
/*   Updated: 2026/05/14 18:42:01 by dcopikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)

{
	write (1, &c, 1);
}

/*int	main(void)
{
	ft_putchar('a');
	return (0);
}
*/
