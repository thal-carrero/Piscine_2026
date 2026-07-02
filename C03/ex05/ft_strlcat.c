/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 11:35:39 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/30 11:54:21 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i++);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (i < size && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Mundo!";
	char	dest[] = "Hola";

	printf("src = %s(len = 6)  dest = %s(len = 4) size = %d\n", src, dest, 6);
	printf("len = %d src = %s\n", ft_strlcat(dest, src, 6), dest);
}
*/
