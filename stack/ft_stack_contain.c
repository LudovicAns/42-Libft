/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_contain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:16:44 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/21 20:16:44 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_contain function check if the given stack contain the 
 * given integer.
 * 
 * @param	t_stack *stack	-	Stack to check.
 * 
 * @param	int integer	-	Integer to search.
 * 
 * @result 1 if the stack contain integer else 0.
 */
int	ft_stack_contain(t_stack *stack, int integer)
{
	while (stack)
	{
		if (stack->integer == integer)
			return (1);
		stack = stack->next;
	}
	return (0);
}
