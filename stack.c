/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoteix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:34:59 by joaoteix          #+#    #+#             */
/*   Updated: 2023/02/10 12:41:49 by joaoteix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_init(size_t nmemb, size_t memb_size)
{
	t_stack	stack;

	stack = ft_calloc(nmemb, memb_size);
	if (!stack)
		return (stack);
	stack->head = 0;
	stack->tail = 0;
	return (stack);
}

void	stack_push(
