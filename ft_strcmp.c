/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:30:31 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/22 13:30:31 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The ft_strcmp function return 0 if s1 is equal to s2.
 * 
 * @param	char *s1	-	String 1.
 * 
 * @param	char *s2	-	String 2.
 * 
 * @return	0 if equal else diff between the two first different char.
 */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == 0)
			return (0);
	return (*s1 - *--s2);
}
