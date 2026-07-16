/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 18:55:39 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/08 10:19:44 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*find;
	char	*temp;
	char	*str_og;

	str_og = str;
	while (*str_og != '\0')
	{
		find = to_find;
		temp = str_og;
		while (*temp == *find && *find != '\0')
		{
			temp++;
			find++;
		}
		if (*find == '\0')
			return (str_og);
		str_og++;
	}
	return (0);
}
#include <stdio.h>

int	main()
{
	char	str[] = "The rain in Suiza";
	char	to_find[] = "x";

	printf("str = %s  to_find = %s\n", str, to_find);
	//printf("%s\n", ft_strstr(str, to_find));
}
