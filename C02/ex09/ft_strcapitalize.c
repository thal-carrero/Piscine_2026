/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 17:40:13 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/30 17:52:21 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	ft_is_num(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

char	ft_uppercase(char c)
{
	c = c - 32;
	return (c);
}

int	ft_is_alpha_num(char c)
{
	if (ft_is_num(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*str_cap;

	i = 0;
	str_cap = str;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_is_alpha_num(str[i]))
		{
			if (i == 0 && !(ft_is_num(str[i])))
				str_cap[i] = ft_uppercase(str[i]);
			else if (ft_is_num(str[i]))
				str_cap[i] = str[i];
			else if (i > 0 && !(ft_is_alpha_num(str[i - 1])))
				str_cap[i] = ft_uppercase(str[i]);
		}
		else
			str_cap[i] = str[i];
		i++;
	}
	return (str_cap);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux";
	char str2[] = "HELLO";
	char str3[] = "Hello, como estas ?";
	char str4[] = "%68al\nAFG+a6df-hga;hdh";

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
}
*/
