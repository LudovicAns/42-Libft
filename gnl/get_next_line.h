/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:09:29 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/22 13:09:29 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

int		get_next_line(int fd, char **line);
int		iseol(char *s);
char	*ft_empty_string(void);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*combine(char *res, char *buffer, int reslen);
int		ft_strlen_gnl(char *s, int eol);
char	*ft_substr_gnl(char *s, int start, size_t len);
int		get_next_line(int fd, char **line);
int		return_result(char *res, char **line, char **tmp, int reslen);
char	*ft_strdup_gnl(char *s);
int		process_read(int fd, char **buffer, char **res);
void	secure_free(char **ptr);

#endif
