/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 18:55:39 by tcarrero       #+#    #+#                */
/*   Updated: 2026/07/01 14:17:58 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*find;
	char	*temp;
	char	*og;

	og = str;
	while (*og != '\0')
	{
		find = to_find;
		temp = og;
		while (*temp == *find && *find != '\0')
		{
			temp++;
			find++;
		}
		if (*find == '\0')
			return (og);
		og++;
	}
	return ("");
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "The rain in Suiza";
	char	to_find[] = "ain";

	printf("str = %s  to_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
}
*/
