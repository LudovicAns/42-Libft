/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:21:13 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/19 23:21:13 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_copy function simply copy the given stack.
 * 
 * @param	t_stack *stack	-	Stack to copy.
 * 
 * @result	Copied stack.
 */
t_stack	*ft_stack_copy(t_stack *stack)
{
	t_stack	*copy;
	t_stack	*new_node;

	copy = NULL;
	stack = ft_stack_getfirst(stack);
	while (stack)
	{
		new_node = ft_stack_create(stack->integer);
		if (!new_node)
		{
			ft_stack_clear(&copy);
			return (NULL);
		}
		ft_stack_addback(&copy, new_node);
		stack = stack->next;
	}
	return (copy);
}
