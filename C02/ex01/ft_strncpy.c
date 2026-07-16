/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 15:49:34 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/28 11:52:03 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "hola1";
	char	src[] = "adios";

	printf("dest: %s  src: %s\n", dest, src);
	ft_strncpy(dest, src, 7);
	printf("dest: %s  src: %s\n", dest, src);

}
*/
