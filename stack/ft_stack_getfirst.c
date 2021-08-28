/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_getfirst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 23:46:55 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/28 23:46:55 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	The ft_stack_getfirst function return the first element of a stack.
*
*	@param	t_stack *lambda	-	One random item from the stack.
*
*	@return	The first item of the stack.
*/
t_stack	*ft_stack_getfirst(t_stack *lambda)
{
	if (!lambda)
		return (NULL);
	while (lambda->previous != NULL)
		lambda = lambda->previous;
	return (lambda);
}
