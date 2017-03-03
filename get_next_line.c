/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 15:58:07 by mvlad             #+#    #+#             */
/*   Updated: 2017/03/02 17:49:37 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_file(t_list **head, const int fd)
{
	t_list			*current;

	current = *head;
	while (current)
	{
		if (current->content_size == fd)
			return (current);
		current = current->next;
	}
	current = ft_lstnew();
}

int				get_next_line(const int fd, char **line)
{
	int				read_size;
	char			buf[BUFF_SIZE + 1];
	static t_list	*head;
	t_list			*current;
	char			tmp[] = "";

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	current = get_file(&head, fd);
}
