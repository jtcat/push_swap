/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoteix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:11:38 by joaoteix          #+#    #+#             */
/*   Updated: 2023/02/09 11:59:37 by joaoteix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	swap(t_list *head, char *msg);

void	ss(t_list *a, t_list *b);

void	push(t_list **dst, t_list *src, char *msg);

void	rotate(t_list **head, char *msg);

void	rr(t_list *a, t_list *b);

void	rev_rotate(t_list **head, char *msg);

void	rrr(t_list **a, t_list **b);
