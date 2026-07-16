/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_swap.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 16:20:26 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/26 11:24:23 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}
/*:x
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
}
*/
