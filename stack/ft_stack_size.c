/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:22:49 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 16:22:49 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**	
 * The ft_stack_size function count the number of item in a stack.
 * 
 * @param	t_stack *stack	-	The stack to count.
 * 
 * @result	Number of items in the stack.
*/
int	ft_stack_size(t_stack *stack)
{
	int	count;

	count = 0;
	if (!stack)
		return (-1);
	stack = ft_stack_getfirst(stack);
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}
