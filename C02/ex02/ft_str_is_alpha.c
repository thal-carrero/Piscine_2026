/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 15:54:20 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/28 14:55:46 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "hola";
	str2 = "Hola3";

	printf("str1 = %s %d\n", str1, ft_str_is_alpha(str1));
	printf("str2 = %s %d\n", str2, ft_str_is_alpha(str2));
	return (0);
}
*/
