/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:50:10 by lanselin          #+#    #+#             */
/*   Updated: 2021/08/28 21:50:10 by lanselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

/*
*	|---------------|
*	|		A		|
*	|---------------|
*	|	i1	->	(1)	|
*	|	i2	->	(5)	|
*	|	i3	->	(8)	|
*	|	i4	->	(0)	|
*	|	i5	->	(4)	|
*	|---------------|
*
*	To explain how work this structure i will use this beautiful scheme. 
*	For example we will take i2:
*
*	i2 (item2) has one previous item -> i1.
*	i2 has 5 as integer value.
*	i2 has one next item -> i3.
*
*	If an item has no previous/next item it must be NULL. 
*	NULL represent the borders of the stack.
*/
typedef struct s_stack
{
	struct s_stack	*previous;
	int				integer;
	struct s_stack	*next;
}		t_stack;

/*
*	In this part of file, all useful functions to edit or get informations
*	about a s_stack struct are defined.
*/
t_stack	*ft_stack_create(int integer);
void	ft_stack_remove(t_stack **stack);
t_stack	*ft_stack_getfirst(t_stack *lambda);

#endif
