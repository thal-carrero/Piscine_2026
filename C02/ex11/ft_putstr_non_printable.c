/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_non_printable.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tcarrero <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 13:56:05 by tcarrero       #+#    #+#                */
/*   Updated: 2026/06/30 18:38:23 by tcarrero       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (0);
	return (1);
}

void	ft_dec_to_hex(char c, char *str)
{
	char	*base_hex;
	int		div;
	int		mod;

	base_hex = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	str[0] = base_hex[div];
	str[1] = base_hex[mod];
	str[2] = '\0';
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	str_hex[50];

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_dec_to_hex(str[i], str_hex);
			write(1, "\\", 1);
			write(1, &str_hex[0], 1);
			write(1, &str_hex[1], 1);
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	printf("%s\n", str);
	ft_putstr_non_printable(str);
	return (0);
}
*/
