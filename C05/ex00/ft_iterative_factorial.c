/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:47:27 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/06 14:15:33 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nb_factorial;

	nb_factorial = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			nb_factorial *= (nb - 1);
			nb--;
		}
		return (nb_factorial);
	}
}
// #include <stdio.h>

// int main(void)
// {
// 	printf("5! = %d\n", ft_iterative_factorial(5));
// }
