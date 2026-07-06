/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:52:56 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/05 17:04:26 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
}
// #include <stdio.h>

// int main(void)
// {
// 	printf("nbr = 5, power = 5 result = %d\n", ft_recursive_power(5, 5));
// }
