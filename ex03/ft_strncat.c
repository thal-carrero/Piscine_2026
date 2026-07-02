/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thalia <thalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 20:45:10 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/02 03:34:33 by thalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	char	*new_dest;
	
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

