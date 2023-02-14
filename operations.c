/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoteix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:11:38 by joaoteix          #+#    #+#             */
/*   Updated: 2023/02/10 13:09:45 by joaoteix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft.h"

void	swap(t_list *head, char *msg)
{
	ft_swap(head, head->next);
	if (msg)
		ft_printf("%s\n", msg);
}

void	ss(t_list *a, t_list *b)
{
	swap(a, NULL);
	swap(b, NULL);
	ft_printf("ss\n");
}

void	push(t_list **dst, t_list **src, char *msg)
{
	if (!src)
		return ;
	ft_lstadd_back(dst, src);
	ft_lstdelone(src, &delfunc);
	ft_printf("%s\n", msg);
}

void	rotate(t_list **head, char *msg)
{
	t_list	*tmp;

	tmp = *head;
	*head = (*head)->next;
	ft_lstlast(*head)->next = tmp;	
	tmp->next = NULL;
	if (msg)
		ft_printf("%s\n", msg);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a, NULL);
	rotate(b, NULL);
	ft_printf("rr\n");
}

void	rev_rotate(t_list **head, char *msg)
{
	t_list	*ant_last;

	ant_last = *head;
	while (ant_last->next->next)
		ant_last = ant_last->next;
	ant_last->next->next = *head;
	*head = ant_last->next;
	ant_last->next = NULL;
	if (msg)
		ft_printf("%s\n", msg);
}

void	rrr(t_list **a, t_list **b)
{
	rev_rotate(a, NULL);
	rev_rotate(b, NULL);
	ft_printf("rrr\n");
}
