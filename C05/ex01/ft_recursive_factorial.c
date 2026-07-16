/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:17:05 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/06 14:18:46 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	nb_factorial;

	nb_factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		nb_factorial = nb * ft_recursive_factorial(nb - 1);
		return (nb_factorial);
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("5! = %d\n", ft_recursive_factorial(5));
// }
