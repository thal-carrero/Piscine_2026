/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:08:35 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/06 14:14:42 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	while (!ft_is_prime(next_prime))
	{
		next_prime = ft_find_next_prime(next_prime + 1);
	}
	return (next_prime);
}
//#include <stdio.h>

//int	main()
//{
//	int	nbr = 8;

//	printf("The next prime number of %d is %d\n", nbr, ft_find_next_prime(nbr));
//}