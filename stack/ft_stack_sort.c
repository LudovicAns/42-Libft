/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:55:20 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/02 12:55:20 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Need documentation.
 * https://www.youtube.com/watch?v=xGl-VBmKr2E&ab_channel=OlivierCuisenaire
 */
static t_stack	*ft_stack_merge(t_stack *first, t_stack *second)
{
	(void)first;
	(void)second;
}

/**
 * The ft_stack_split function split a stack in two part using two pointers 
 * (fast and slow) with fast which is moving 2 by 2 in the given stack and 
 * slow moving 1 by 1 in the stack. 
 * When fast can't move anymore, the next value of slow represent the first 
 * item of the secound part of the split stack.
 * 
 * @param	t_stack *stack	-	Split stack.
 * 
 * @result	First item of second part of the splited stack.
 */
static t_stack	*ft_stack_split(t_stack *stack)
{
	t_stack	*fast;
	t_stack	*slow;
	t_stack	*temp;

	stack = ft_stack_getfirst(stack);
	fast = stack;
	slow = stack;
	while (fast->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	temp = slow->next;
	slow->next = NULL;
	return (temp);
}

/**
 * Need documentation.
 */
void	ft_stack_sort(t_stack *stack)
{
	t_stack	*first;
	t_stack	*second;

	first = stack;
	if (!stack || !stack->next)
		return ;
	second = ft_stack_split(first);
	ft_stack_sort(first);
	ft_stack_sort(second);
}
