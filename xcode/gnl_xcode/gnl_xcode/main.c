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
//	char  *line = NULL;
//	int   fd = open("./srcs/gnl/gnl10.txt", O_RDONLY);
//	get_next_line(fd, &line);
//	close(fd);
//	sleep(15);
//	return (0);
	int		fd;
	char	*line;

	if (ac == 1)
		fd = 0;
	else if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		return (ac);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	if (ac == 2)
		close(fd);
}
