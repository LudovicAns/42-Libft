/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:26:48 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/25 19:26:48 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	This function print a string with a specified color in a file descriptor.
*
*	@param	char	*color	- Color code of string s.
*
*	@param	char	*s	- String that will be colored by color and
*							written in file descriptor fd.
*
*	@param	int		fd	- File descriptor where we will write the string.
*
*	@result	Nothing.
*/
void	ft_putstr_color_fd(char *color, char *s, int fd)
{
	ft_putstr_fd(color, fd);
	ft_putstr_fd(s, fd);
	ft_putstr_fd(ANSI_COLOR_RESET, fd);
}
