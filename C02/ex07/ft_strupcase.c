/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strupcase.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 17:16:54 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/28 15:06:40 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	*str_up;

	i = 0;
	str_up = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str_up[i] = str[i] - 32;
		}
		else
		{
			str_up[i] = str[i];
		}
		i++;
	}
	str_up[i] = '\0';
	return (str_up);
}
/*
#include <unistd.h>

int	main(void)
{
	char	str[] = "hola strager!";
	char	*str1;
	int	i = 0;

	str1 = ft_strupcase(str);
	while (str1[i] != '\0')
	{
		write(1, &str1[i], 1);
		i++;
	}
	//printf("str: %s\n%s\n", str, dest);
}	
*/
