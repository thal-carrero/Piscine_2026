/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:54:20 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/09 17:33:05 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		size = max - min;
		i = 0;
		*range = malloc (sizeof (int) * size);
		if (!*range)
			return (-1);
		while (i < size)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
		return (size);
	}
}
//#include <stdio.h>

//int	main(void)
//{
//	int	min = 5;
//	int	max = 1;
//	int	**range = malloc (sizeof(int*) * 5);
//	int	i = 0;

//	printf("min = %d max = %d\n", min, max);
//	printf("size of range = %d\n", ft_ultimate_range(range, min, max));
//	while (i < (max - min))
//	{
//		printf("%d, ", range[0][i]);
//		i++;
//	}
//	return 0;
//}