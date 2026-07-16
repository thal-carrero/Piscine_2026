/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 16:28:26 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/26 11:33:18 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

 int	main(void)
{
	int	a = 20;
	int	b = 10;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("a = %d b = %d \ndiv = %d mod = %d", a, b, div, mod);
}
*/
