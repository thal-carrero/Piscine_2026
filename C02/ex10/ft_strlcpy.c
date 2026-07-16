/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 16:18:32 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/30 18:47:02 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i++);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1  && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < size - 1)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hola Mundo!";
	char	dest[] = "Hola Thalia!";
	int	len = 0;

	printf("src = %s\n dest = %s\n size = %d\n", src, dest, 10);
	len = ft_strlcpy(dest, src, 10);
	printf("dest: %s\nlen_src = %d\n", dest, len);

}
*/
