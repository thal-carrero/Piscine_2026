/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_reverse_alphabet.c                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 11:22:54 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/25 13:17:44 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}
