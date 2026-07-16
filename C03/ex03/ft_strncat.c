/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: thalia <thalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 20:45:10 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/02 13:26:53 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*new_dest;

	i = 0;
	new_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (new_dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = " Mundo!";
// 	char	dest[] = "Hola";

// 	printf("src = %s dest = %s nb = %d\n", src, dest, 6);
// 	printf("%s\n", ft_strncat(dest, src, 6));
// }
