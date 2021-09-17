/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_getmin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:42:50 by lanselin          #+#    #+#             */
/*   Updated: 2021/09/17 15:05:16 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_stack_getmin function return the lowest int inside a stack.
 * 
 * @param   t_stack *stack    -   Stack where we shearch.
 * 
 * @result  Lowest int inside the stack.
 */
int ft_stack_getmin(t_stack *stack)
{
    int min;

    min = INTMAX;
    stack = ft_stack_getfirst(stack);
    while (stack)
    {
        if (stack->integer < min)
            min = stack->integer;
        stack = stack->next;
    }
    return (min);
}
