/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 10:24:08 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/14 10:56:18 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_strs(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_check_separator(str[i], charset) == 0
			&& (i == 0 || ft_check_separator(str[i - 1], charset) == 1))
			j++;
		i++;
	}
	return (j);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_check_separator(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_copy(char *str, int len)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = malloc (sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;

	arr = malloc (sizeof(char *) * (ft_count_strs(str, charset) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_check_separator(str[i], charset) == 1)
			i++;
		else
		{
			arr[j] = ft_copy(str + i, ft_strlen(str + i, charset));
			j++;
			i = i + ft_strlen(str + i, charset);
		}
	}
	arr[j] = NULL;
	return (arr);
}

//#include <stdio.h>

//int	main()
//{
//	char str[] = "hola, como;, estas?";
//	char sep[] = ",;.";
//	int	i = 0;
//	char	**new_str = ft_split(str, sep);
//	while (new_str[i])
//	{
//		printf("'%s'\n", new_str[i]);
//		i++;
//	}
//}