/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:56:03 by lanselin          #+#    #+#             */
/*   Updated: 2020/11/23 17:56:05 by lanselin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(int);
size_t	ft_strlen(const char *);
int		ft_isalpha(int);
int		ft_isdigit(int);
void	*ft_memset(void *, int, size_t);
void	ft_bzero(void *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
void	*ft_memccpy(void *, const void *, int, size_t);
void	*ft_memmove(void *, const void *, size_t);
void	*ft_memchr(const void *, int, size_t);
int		ft_memcmp(const void *, const void *, size_t);
int		ft_isascii(int);
int		ft_isprint(int);
int		ft_toupper(int);
int		ft_tolower(int);
char	*ft_strchr(const char *, int);
char	*ft_strrchr(const char *, int);
int		ft_strncmp(const char *, const char *, size_t);
char	*ft_strlcpy(char *, const char *, size_t);
char	*ft_strlcat(char *, const char *, size_t);
char	*ft_strnstr(const char	*, const char *, size_t);
int		ft_atoi(const char *);
void	*ft_calloc(size_t, size_t);
char	*ft_strdup(const char *);
char	*ft_substr(char const *, unsigned int, size_t);
char	*ft_strjoin(char const *, char const *);
char	*ft_strtrim(char const *, char const *);
char	**ft_split(char const *, char);
char	*ft_itoa(int n);
char	*ft_strcpy(char *dest, char *src);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
