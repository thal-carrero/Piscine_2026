/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 19:54:42 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/29 20:11:46 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	sum_s1;
	int	sum_s2;
	int	i;

	i = 0;
	sum_s1 = 0;
	sum_s2 = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		sum_s1 += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
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
	char	s1[] = "ABC";
	char	s2[] = "ABD";

	printf("s1 = %s s2 = %s %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("s1 = %s s2 = %s %d\n", s1, s2, ft_strcmp(s2, s1));
	printf("s1 = %s s2 = %s %d\n", s1, s1, ft_strcmp(s1, s1));
}
*/
