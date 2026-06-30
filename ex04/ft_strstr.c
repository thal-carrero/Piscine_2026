/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 18:55:39 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/30 21:36:18 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_cmp(char a, char b)
{
	if (a == b)
		return (1);
	return (0);
}

char	*ft_temp_str(char *str, int index)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[index];
		i++;
		index++;
	}
	return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	cmp;

	i = 0;
	j = 0;
	cmp = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0')
		{
			cmp = ft_cmp(str[i], to_find[j]);
			printf("str[%d] = %c to_find[%d] = %c cmp = %d\n", i, str[i], j, to_find[j], cmp);
			if (cmp)
			{
				i++;
				j++;
			}
			else 
				break;
		}
		i++;
	}
	ft_temp_str(str, i);
	return (str);
}

#include <stdio.h>

int	main()
{
	char	str[] = "The rain in Suiza";
	char	to_find[] = "ain";

	printf("str = %s  to_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
}
