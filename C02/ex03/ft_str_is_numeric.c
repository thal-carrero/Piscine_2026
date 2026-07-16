/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 16:42:56 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/27 16:49:45 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str1 = "h0la";
	char	*str2 = "1234";

	printf("str1 = %s %d\n", str1, ft_str_is_numeric(str1));
	printf("str2 = %s %d\n", str2, ft_str_is_numeric(str2));
}
*/
