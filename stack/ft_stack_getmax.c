/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_getmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:34:32 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/23 15:45:17 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_getmax function return the biggest int inside a stack.
 * 
 * @param   t_stack *stack    -   Stack where we shearch.
 * 
 * @result  Biggest int inside the stack.
 */
int	ft_stack_getmax(t_stack *stack)
{
	int	max;

	max = stack->integer;
	stack = ft_stack_getfirst(stack);
	while (stack)
	{
		if (stack->integer > max)
			max = stack->integer;
		stack = stack->next;
	}
	return (max);
}
