/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_getvalue.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 00:42:29 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/20 00:42:29 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_getvalue return the value of the integer at the given index 
 * in the given stack.
 * 
 * @param	t_stack *stack	-	Stack where search.
 * 
 * @param	int	index	-	Index in the stack where look for the value.
 * 
 * @result	The integer value contained in the given index.
 */
int	ft_stack_getvalue(t_stack *stack, int index)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (i == index)
			return (stack->integer);
		stack = stack->next;
		i++;
	}	
	return (-2147483648);
}
