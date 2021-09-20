/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:40:20 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/19 22:40:20 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_find function return index value in the given stack for the 
 * passed integer.
 * 
 * @param	t_stack *stack	-	Stack where search.
 * 
 * @param	int integer	-	Searched value.
 * 
 * @result	Index value of the integer in given stack or -2147483648 if it 
 * 			does not exist in the given stack.
 */
int	ft_stack_find(t_stack *stack, int integer)
{
	int	count;

	count = 0;
	stack = ft_stack_getfirst(stack);
	while (stack)
	{
		if (stack->integer == integer)
			return (count);
		stack = stack->next;
		count++;
	}
	return (-2147483648);
}
