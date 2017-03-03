/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:49:19 by mvlad             #+#    #+#             */
/*   Updated: 2017/03/02 17:49:23 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int		fd;
	char	*line;
	long	read_size;
	char	buf[BUFF_SIZE + 1];

	if (ac == 1)
		fd = 0;
	else if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		return (ac);

	read_size = read(fd, buf, BUFF_SIZE);
	buf[read_size] = '\0';
	ft_putendl(buf);
	while ((read_size = read(fd, buf, BUFF_SIZE)))
	{
		printf("%ld\n", read_size);
	}
	printf("%ld\n", read_size);
//	while (get_next_line(fd, &line) == 1)
//	{
//		ft_putendl(line);
//		free(line);
//	}
//	if (ac == 2)
//		close(fd);
}
