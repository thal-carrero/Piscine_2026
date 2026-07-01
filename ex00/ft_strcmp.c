/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 19:54:42 by tcarrero       #+#    #+#                */
/*   Updated: 2026/07/01 17:24:41 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "AB";

	printf("s1 = %s s2 = %s cmp = %d\n", s2, s1, ft_strcmp(s2, s1));
	printf("Real strcmp s1 = %s s2 = %s cmp = %d\n", s2, s1, strcmp(s2, s1));
}

