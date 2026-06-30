/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 20:13:07 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/29 20:26:28 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	int				sum_s1;
	int				sum_s2;
	unsigned int	i;

	i = 0;
	diff = 0;
	sum_s1 = 0;
	sum_s2 = 0;
	while (i < n && s1[i] != '\0')
	{
		sum_s1 += s1[i];
		i++;
	}
	i = 0;
	while (i < n && s2[i] != '\0')
	{
		sum_s2 += s2[i];
		i++;
	}
	diff = sum_s1 - sum_s2;
	return (diff);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABC";

	printf("s1 = %s s2 = %s n = %d %d\n", s1, s2, 3, ft_strncmp(s1, s2, 3));
	printf("s1 = %s s2 = %s n = %d %d\n", s1, s2, 4, ft_strncmp(s1, s2, 4));
	printf("s1 = %s s2 = %s n = %d %d\n", s2, s1, 4, ft_strncmp(s2, s1, 4));
}
*/
