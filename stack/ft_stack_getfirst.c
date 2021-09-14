/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_getfirst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 23:46:55 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/28 23:46:55 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_getfirst function return the first element of a stack.
*
*	@param	t_stack **stack	-	Adress of the stack.
*
*	@return	The first item of the stack.
*/
t_stack	*ft_stack_getfirst(t_stack **stack)
{
	t_stack	*node;

	node = *stack;
	if (!node)
		return (NULL);
	while (node->previous != NULL)
		node = node->previous;
	return (node);
}
