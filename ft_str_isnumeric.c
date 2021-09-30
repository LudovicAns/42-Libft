/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isnumeric.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:24:25 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/27 15:24:25 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	This function test if a string is numeric or not.
*
*	@param	char *str	-	String to check.
*
*	@return	1 if is true or 0 if is false.
*/
int	ft_str_isnumeric(char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
