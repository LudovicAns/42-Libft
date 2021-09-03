/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnormal_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:35:29 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/01 14:35:29 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * The ft_isnormal_int check if the given integer is between 'normal' integer
 * value which are : -2147483648 -> 2147483647
 * 
 * @param	int i	-	Integer to check.
 * 
 * @result	1 if the integer is 'normal' else 0.
*/
int	ft_isnormal_int(long long int i)
{
	if (i > 2147483647 || i < -2147483648)
		return (0);
	return (1);
}
