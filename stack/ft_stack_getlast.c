/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_getlast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:09:30 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 15:09:30 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_getlast function return the last element of a stack.
*
*	@param	t_stack *lambda	-	One random item from the stack.
*
*	@return	The first item of the stack.
*/
t_stack	*ft_stack_getlast(t_stack *lambda)
{
	if (!lambda)
		return (NULL);
	while (lambda->next)
		lambda = lambda->next;
	return (lambda);
}
