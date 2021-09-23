/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_dispfrom_f.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:15:47 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/29 15:15:47 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*	The ft_stack_dispfrom_f function display a stack in STDOUT starting from 
*	the first item of the stack.
*
*	@param	t_stack *stack	-	A random item from the stack to display.
*
*	@result	Nothing.
*/
void	ft_stack_dispfrom_f(t_stack *stack)
{
	if (!stack)
	{
		ft_putstr_color_fd(ANSI_COLOR_RED, "Error: Can't disp empty stack\n",
			STDOUT);
		return ;
	}
	stack = ft_stack_getfirst(stack);
	ft_putchar_fd('{', STDOUT);
	while (stack->next)
	{
		ft_putnbr_fd(stack->integer, STDOUT);
		ft_putstr_fd(", ", STDOUT);
		stack = stack->next;
	}
	ft_putnbr_fd(stack->integer, STDOUT);
	ft_putchar_fd('}', STDOUT);
	ft_putchar_fd('\n', STDOUT);
}
