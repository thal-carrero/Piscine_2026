/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 17:10:16 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/26 11:56:17 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i++);
}
/*
#include <stdio.h>

int	main()
{
	char*	str;

	str = "Thalia";
	printf("%d", ft_strlen(str));
}
*/
