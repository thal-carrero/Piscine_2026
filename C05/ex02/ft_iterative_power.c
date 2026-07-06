/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:38:03 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/05 17:00:37 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("nbr = 5, power = 5 result = %d\n", ft_iterative_power(5, -2));
// }
