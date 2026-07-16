/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 17:03:56 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/27 17:09:15 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>

int     main(void)
{
        char    *str1 = "hola";
        char    *str2 = "HOLA";

        printf("str1 = %s %d\n", str1, ft_str_is_uppercase(str1));
        printf("str2 = %s %d\n", str2, ft_str_is_uppercase(str2));
}
*/
