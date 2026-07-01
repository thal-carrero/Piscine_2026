/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 20:13:07 by tcarrero       #+#    #+#                */
/*   Updated: 2026/07/01 16:32:18 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABC";

	printf("s1 = %s s2 = %s n = %d cmp = %d\n", s1, s2, 3, ft_strncmp(s1, s2, 3));
	printf("s1 = %s s2 = %s n = %d cmp = %d\n", s1, s2, 4, ft_strncmp(s1, s2, 4));
	printf("s1 = %s s2 = %s n = %d cmp = %d\n", s2, s1, 4, ft_strncmp(s2, s1, 4));
}

