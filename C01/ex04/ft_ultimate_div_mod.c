/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 16:49:30 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/26 11:43:21 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 20;
	int	b = 10;

	printf("a = %d b = %d\n", a, b); 
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d b = %d", a, b);
}
*/
