/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarrero <tcarrero@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:51:28 by tcarrero          #+#    #+#             */
/*   Updated: 2026/07/13 15:34:33 by tcarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_SIZE 1024

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		col;
	int		bytes_read;
	char	buff[MAX_LINE_SIZE];
	char	c;

	i = 0;
	col = 0;
	bytes_read = 0;
	if (argc < 2)
		write (1, "Not enough arguments\n", 22);
	else
	{
		fd = open (argv[1], O_RDWR);
		if (fd == -1)
		{
			write (1, "Error opening the map\n", 23);
			exit (1);
		}
		while (i < MAX_LINE_SIZE - 1)
		{
			bytes_read = read(fd, &c, 1);
			if (bytes_read <= 0)
				break;
			if (c == '\n')
				break;
			buff[i++] = c;
		}
		while (i < MAX_LINE_SIZE - 1)
		{
			bytes_read = read(fd, &c, 1);
			if (bytes_read <= 0)
				break;
			if (c == '\n')
				break;
			buff[i++] = c;
			col++;
		}
		
		//if (read (fd, buff, sizeof(buff)) == -1)
		//{
		//	write(1, "Error reading the map\n", 26);
		//	exit (1);
		//}
		//printf("%s", buff);
		//solve()
		if (close (fd) < 0)
		{
			write(1, "Error closing the map\n", 23);
			exit (1);
		}
	}
	return (0);
}
