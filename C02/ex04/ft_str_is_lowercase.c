/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 16:50:43 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/27 17:10:29 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>

int	main(void)
{
	char	*str1 = "hola";
	char	*str2 = "hOlA";

	printf("str1 = %s %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2 = %s %d\n", str2, ft_str_is_lowercase(str2));
}
*/
