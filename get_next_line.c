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

static t_list	*file_manage(t_list **head, const int fd)
{
	t_list			*current;
	size_t			file_des;

	file_des = (size_t)fd;
	current = *head;
	while (current)
	{
		if (current->content_size == file_des)
			return (current);
		current = current->next;
	}
	current = ft_lstnew("\0", file_des);
	ft_lstadd(head, current);
	current = *head;
	return (current);
}

static int		line_read(int fd, char **buf, t_list *current)
{

}

int				get_next_line(const int fd, char **line)
{
	int				read_size;
	char			buf[BUFF_SIZE + 1];
	static t_list	*head;
	t_list			*current;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	current = file_manage(&head, fd);
	if ((*line = ft_strnew(1)))
		return (-1);
	while ((read_size = read(fd, buf, BUFF_SIZE)))
	{
		buf[read_size] = '\0';
		if((current->content = ft_strjoin(current->content, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (read_size < BUFF_SIZE && !ft_strlen(current->content))
		return (0);
	return (1);
}
