/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcat </var/spool/mail/jcat>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 02:20:45 by jcat              #+#    #+#             */
/*   Updated: 2022/12/28 20:35:05 by joaoteix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	**newlsthead;
	void	*fcontent;

	if (!(lst && f && del))
		return (NULL);
	newlsthead = &newlst;
	while (lst)
	{
		fcontent = f(lst->content);
		*newlsthead = ft_lstnew(fcontent);
		if (!*newlsthead)
		{
			del(fcontent);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		newlsthead = &(*newlsthead)->next;
		lst = lst->next;
	}
	return (newlst);
}
