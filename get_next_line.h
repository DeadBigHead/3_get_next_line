/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 15:59:19 by mvlad             #+#    #+#             */
/*   Updated: 2017/03/02 17:49:49 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H
# define __GET_NEXT_LINE_H

# include "libft.h"
# define BUFF_SIZE 10
# define PROTECT_N1(x) if (!x) return (-1);

typedef int uint;

int	get_next_line(const int fd, char **line);

#endif
