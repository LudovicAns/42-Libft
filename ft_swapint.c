/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:41:31 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 18:41:31 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_swapint function swaps a and b value.
 * 
 * @param	int *a	-	First integer value.
 * 
 * @param	int *b	-	Second integer value.
 * 
 * @result	Nothing.
*/
void	ft_swapint(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
