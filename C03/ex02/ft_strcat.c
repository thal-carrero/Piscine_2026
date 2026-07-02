/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thalia <thalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 20:27:00 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/02 03:17:33 by thalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char*src)
{
	char	*new_dest;
	
	new_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (new_dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = " Mundo!";
// 	char	dest[] = "Hola";

// 	printf("src = %s dest = %s\n", src, dest);
// 	printf("%s\n", ft_strcat(dest, src));
// }

