/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 13:40:47 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/13 14:29:58 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_validate_base(char *base);
int	ft_get_nbr(char c, char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_cant_digits(long nb, int base_len)
{
	int	digits;

	digits = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		digits++;
	while (nb != 0)
	{
		nb = nb / base_len;
		digits++;
	}
	return (digits);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		nb_digits;
	char	*str;

	if (ft_validate_base(base_from) == 0 || ft_validate_base(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	nb_digits = ft_cant_digits(nb, ft_strlen(base_to));
	str = malloc (sizeof(char) * nb_digits + 1);
	if (!str)
		return (NULL);
	str[nb_digits] = '\0';
	if (nb == 0)
		str[nb_digits - 1] = base_to[0];
	else if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		str[--nb_digits] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	return (str);
}

//#include <stdio.h>
//int	main()
//{
//	//printf("%s\n", ft_convert_base("156", "0123456789", "01"));
//}
