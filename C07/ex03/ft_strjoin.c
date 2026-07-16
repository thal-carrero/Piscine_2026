/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 14:54:10 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/15 10:53:34 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && (i < size - 1))
		{
			str[k++] = sep[j];
			j++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		new_str_len;
	int		i;

	i = 0;
	new_str_len = 0;
	if (size == 0)
	{
		new_str = malloc(1);
		if (!new_str)
			return (NULL);
		*new_str = '\0';
		return (new_str);
	}
	while (i < size)
	{
		new_str_len += ft_strlen(strs[i]);
		i++;
	}
	new_str_len += ft_strlen(sep) * (size - 1);
	new_str = malloc (sizeof (char) * (new_str_len + 1));
	if (!new_str)
		return (NULL);
	ft_strcat(size, strs, sep, new_str);
	return (new_str);
}
//#include <stdio.h>

//int	main()
//{
//	char	**strs = malloc (sizeof(char*) * 3);
//	char	sep[] = ", ";
//	int		size = 3;

//	strs[0] = "hola0";
//	strs[1] = "hola1";
//	strs[2] = "hola2";
//	printf("join_str = %s\n", ft_strjoin(0, strs, sep));
//}