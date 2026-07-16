/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:01:09 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/04 18:57:04 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	sign = 0;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	if (sign % 2 != 0)
		nb = nb * -1;
	return (nb);
}
// #include <stdio.h>

// int	main()
// {
// 	char	str[] = "   ---++--12345hgsdf789";

// 	printf("str = %s nb = %d\n", str, ft_atoi(str));
// }