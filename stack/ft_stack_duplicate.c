/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:52:38 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/02 10:52:38 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_duplicate function duplicate the given stack.
 * 
 * @param	t_stack *stack	-	The stack to duplicate.
 * 
 * @result	The duplicate stack or NULL if malloc error.
 */
t_stack	*ft_stack_duplicate(t_stack *stack)
{
	t_stack *new_stack;
	t_stack *new_item;

	while (stack)
	{
		new_item = ft_stack_create(stack->integer);
		if (!new_item)
		{
			ft_stack_clear(&new_stack);
			return (NULL);
		}
		ft_stack_addback(new_stack, new_item);
		stack = stack->next;
	}
	return (new_stack);
}
