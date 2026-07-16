/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_comb2.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 11:26:47 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/25 15:50:16 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(short n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = n / 10 + '0';
		write(1, &c, 1);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	short	n[2];

	n[0] = 0;
	while (n[0] <= 98)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 99)
		{
			write_num(n[0]);
			write(1, " ", 1);
			write_num(n[1]);
			if (!(n[0] == 98 && n[1] == 99))
			{
				write(1, ", ", 2);
			}
			n[1]++;
		}
		n[0]++;
	}
}
