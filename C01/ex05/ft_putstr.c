/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 16:53:36 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/28 16:11:18 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	c = str[0];
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &c, 1);
		i++;
		c = str[i];
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putstr("Thalia");
}
*/
