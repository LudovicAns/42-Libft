/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:56:15 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/28 21:56:15 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	The ft_stack_create function create a new item of s_stack.
*
*	@param	int integer	-	The integer to put inside first stack item.
*
*	@result	A new stack or NULL if malloc error.
*/
t_stack	*ft_stack_create(int integer)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack) * 1);
	if (!stack)
		return (NULL);
	stack->integer = integer;
	stack->previous = NULL;
	stack->next = NULL;
	return (stack);
}
