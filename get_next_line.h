/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 14:12:16 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/25 16:47:48 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_file
{
	int				fd;
	char			*tail;
	struct s_file	*next;
}					t_file;

int					ft_strlen(char *str);
char				*ft_strjoin(char *one, char *two);
char				*ft_strchr(const char *str, int ch);
char				*ft_strdup(char const *s);
t_file				*ft_lstnew(int fd);
int					get_next_line(int fd, char **line);

#endif
