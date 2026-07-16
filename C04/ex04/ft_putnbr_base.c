/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:28:24 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/08 12:11:02 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_occ_c(char *str, char c)
{
	int	occ;

	occ = 0;
	while (*str)
	{
		if (*str == c)
			occ++;
		str++;
	}
	return (occ);
}

int	ft_is_base_valid(char *str)
{
	if (ft_strlen(str) < 1)
		return (0);
	while (*str)
	{
		if (*str == '+' || *str == '-' || (*str >= 9 && *str <= 13)
			|| *str == 32)
			return (0);
		if (ft_occ_c(str, *str) > 1)
			return (0);
		str++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	if (ft_is_base_valid(base))
	{
		nb = nbr;
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			nb = 2147483648;
		}
		if (nb < 0)
		{
			write (1, "-", 1);
			ft_putnbr_base(-nb, base);
		}
		else if (nb < ft_strlen(base))
			write(1, &base[nb % ft_strlen(base)], 1);
		else
		{
			ft_putnbr_base((nb / ft_strlen(base)), base);
			write(1, &base[nb % ft_strlen(base)], 1);
		}
	}
	else
		write (1, "", 1);
}
int	main()
{
	ft_putnbr_base(-2147483648, "01");
}
