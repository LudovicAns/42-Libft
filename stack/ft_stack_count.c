/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:08:01 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/02 12:08:01 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_count funtion count the number of integer integer contained in 
 * a stack.
 * 
 * @param	t_stack *stack	-	The stack where count.
 *
 * @param	int integer	-	The integer to count.
 * 
 * @result	Count of integer in the stack.
 */
int	ft_stack_count(t_stack *stack, int integer)
{
	int	count;

	count = 0;
	while (stack)
	{
		if (stack->integer == integer)
			count++;
		stack = stack->next;
	}
	return (count);
}
