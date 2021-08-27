/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 22:26:21 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/27 22:26:21 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Need documentation
*/
static char	*char_first(char c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return(NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

/*
*	The ft_strjoin_char function add a char to the right of the string and
*	obviously add the null char at the end.
*
*	@param	char *str	-	String where we will add the char c.
*
*	@param	const char c	-	Char we will add to the right of the string.
*
*	@result	-	A malloced string.
*/
char	*ft_strjoin_char(char *str, const char c)
{
	int		i;
	char	*joined;
	
	if (!c)
		return (NULL);
	if (!str)
		return (char_first(c));
	joined = (char *)malloc((ft_strlen(str) + 2) * sizeof(char));
	if (!joined)
	{
		free(str);
		return (NULL);
	}
	i = -1;
	while (str[++i])
		joined[i] = str[i];
	joined[i++] = c;
	joined[i] = '\0';
	return (joined);
}
