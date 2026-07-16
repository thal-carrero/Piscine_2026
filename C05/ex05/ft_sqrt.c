/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:40:17 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/06 13:45:26 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_perf_sqr(int nb)
{
	int	odd;

	odd = 1;
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
	}
	return (nb == 0);
}

int	ft_recursive_power(int nb, int power)
{
	int	result;

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

int	ft_sqrt(int nb)
{
	int	test_nb;
	int	result;

	test_nb = 0;
	result = 0;
	if (nb == 0)
		return (0);
	else if (!is_perf_sqr(nb) || nb < 0)
		return (0);
	else
	{
		while (result != nb)
		{
			result = ft_recursive_power(test_nb, 2);
			test_nb++;
		}
		return (test_nb - 1);
	}
}
//#include <stdio.h>

//int main(void)
//{
//	int	nbr = -10;

//	printf("sqr root of %d = %d\n", nbr, ft_sqrt(nbr));
//	return 0;
//}
