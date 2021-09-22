/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:09:01 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/22 13:09:01 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int			len;
	char		*buffer;
	char		*res;
	static char	*tmp;

	if (fd < 0 || fd > 4096 || !line || BUFFER_SIZE <= 0)
		return (-1);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (-1);
	if (!tmp || !(tmp[0]))
		res = ft_strdup_gnl("\0");
	else
		res = ft_strdup_gnl(tmp);
	len = 0;
	if (!iseol(res))
		len = process_read(fd, &buffer, &res);
	free(buffer);
	if (iseol(res) || len < BUFFER_SIZE)
	{
		len = return_result(res, line, &tmp, len);
		secure_free(&res);
		return (len);
	}
	return (-1);
}

void	secure_free(char **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

int	process_read(int fd, char **buffer, char **res)
{
	int	len;

	len = 0;
	if (!iseol(*res))
		len = read(fd, *buffer, BUFFER_SIZE);
	if (len > 0)
		*res = combine(*res, *buffer, len);
	while (!iseol(*res) && len > 0)
	{
		if (!iseol(*res) && len > 0)
			len = read(fd, *buffer, BUFFER_SIZE);
		else
			len = 0;
		if (len > 0)
			*res = combine(*res, *buffer, len);
	}
	return (len);
}

int	return_result(char *res, char **line, char **tmp, int len)
{
	int		size;

	if (len <= -1)
		return (-1);
	if (len == 0 && !iseol(res))
	{
		secure_free(&*line);
		*line = ft_strdup_gnl(res);
		secure_free(&*tmp);
		return (0);
	}
	if (!iseol(res))
	{
		*line = ft_strdup_gnl(res);
		secure_free(&*line);
		return (1);
	}
	size = ft_strlen_gnl(res, 0) - (ft_strlen_gnl(res, 1) + 1);
	secure_free(&*line);
	*line = ft_substr_gnl(res, 0, ft_strlen_gnl(res, 1));
	secure_free(&*tmp);
	*tmp = ft_substr_gnl(res, ft_strlen_gnl(res, 1) + 1, size);
	return (1);
}

char	*combine(char *res, char *buffer, int len)
{
	void	*ptr_saver;

	buffer[len] = '\0';
	ptr_saver = res;
	res = ft_strjoin_gnl(res, buffer);
	free(ptr_saver);
	return (res);
}
