/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:08:26 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/06 11:23:50 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	fib_num;

	fib_num = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		fib_num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (fib_num);
	}
}
// int	main(void)
// {
// 	printf("Fibonacci num at index %d is %d\n", 19, ft_fibonacci(19));
// }
