/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:37:10 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/04 14:48:03 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*read_sort(int new_line_position, char **tmp)
{
	char	*res;
	char	*hold;

	if (new_line_position <= 0)
	{
		if (**tmp == '\0')
		{
			free (*tmp);
			*tmp = NULL;
			return (NULL);
		}
		res = *tmp;
		*tmp = NULL;
		return (res);
	}
	hold = ft_substr(*tmp, new_line_position, BUFFER_SIZE);
	res = *tmp;
	res[new_line_position] = 0;
	*tmp = hold;
	return (res);
}

char	*read_content(int fd, char *content, char **tmp)
{
	ssize_t	num_bytes;
	char	*new_line;
	char	*hold;

	new_line = ft_strchr(*tmp, '\n');
	while (new_line == NULL)
	{
		num_bytes = read(fd, content, BUFFER_SIZE);
		if (num_bytes <= 0)
		{
			return (read_sort(num_bytes, tmp));
		}
		content[num_bytes] = '\0';
		hold = ft_strjoin(*tmp, content);
		free(*tmp);
		*tmp = hold;
		new_line = ft_strchr(*tmp, '\n');
	}
	return (read_sort(new_line - *tmp + 1, tmp));
}

char	*get_next_line(int fd)
{
	char		*read_content_return;
	char		*reservoir;
	static char	*tmp[FD_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FD_SIZE)
	{
		return (NULL);
	}
	reservoir = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (reservoir == NULL)
	{
		return (NULL);
	}
	if (tmp[fd] == NULL)
	{
		tmp[fd] = ft_strdup("");
	}
	read_content_return = read_content(fd, reservoir, &tmp [fd]);
	if (reservoir != NULL)
	{
		free (reservoir);
		reservoir = NULL;
	}
	return (read_content_return);
}
