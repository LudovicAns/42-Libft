/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_hasbigger.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 01:36:20 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/20 01:36:20 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_hasbigger check if the given stack cointain a bigger value of 
 * the given value.
 * 
 * @param	t_stack *stack	-	Stack where search.
 * 
 * @param	int value	-	Value to check.
 * 
 * @result	1 if the stack contain a bigger value else 0.
 */
int	ft_stack_hasbigger(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->integer > value)
			return (1);
		stack = stack->next;
	}
	return (0);
}
