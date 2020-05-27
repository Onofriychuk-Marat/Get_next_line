/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 14:12:19 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/25 16:47:10 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strjoin(char *one, char *two)
{
	char	*new;
	int		i;

	if (!one || !two)
		return (NULL);
	new = (char*)malloc(sizeof(char) * (ft_strlen(one) + ft_strlen(two) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (*one)
		*(new + i++) = *one++;
	while (*two)
		*(new + i++) = *two++;
	*(new + i) = '\0';
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = -1;
	while (*(s + ++i))
	{
		if (*(s + i) == c)
			return ((char*)s + i);
	}
	if (*(s + i) == c)
		return ((char*)s + i);
	return (NULL);
}

char	*ft_strdup(char const *s)
{
	int		i;
	char	*new;

	i = -1;
	new = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
	if (!new)
		return (NULL);
	while (*(s + ++i))
		*(new + i) = *(s + i);
	*(new + i) = '\0';
	return (new);
}

t_file	*ft_lstnew(int fd)
{
	t_file	*new;

	if (fd < 0)
		return (NULL);
	new = (t_file*)malloc(sizeof(t_file));
	if (!new)
		return (NULL);
	new->fd = fd;
	new->tail = NULL;
	new->next = NULL;
	return (new);
}
