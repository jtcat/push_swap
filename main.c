/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoteix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:07:10 by joaoteix          #+#    #+#             */
/*   Updated: 2023/02/10 13:06:41 by joaoteix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "operations.h"

void	delete(void *content)
{
	free(content);
	return ;
}

int	is_numb(char *str)
{
	if (*str != '+' && *str != '-' && !ft_isdigit(*str))
		return (0);
	str++;
	while (ft_isdigit(*str))
		str++;
	return (*str == '\0');
}

void	fill_stack(t_list **a, int argc, char **argv)
{
	while (--argc > 0)
	{
		ft_lstadd_front(a, ft_lstnew(malloc(sizeof(int))));
		if (!is_numb(argv[argc]))
		{
			ft_lstclear(a, &delete);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		*(int *)((*a)->content) = ft_atoi(argv[argc]);
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc == 1)
		exit(0);
	a = NULL;
	b = NULL;
	fill_stack(&a, argc, argv);	
	rotate(&a, "ra");
	b = a;
	while (a->next->next)
	{
		if (a->content > a->next->content)
			swap(a, "sa");
		else
			push(&b, a);
	}
	ft_lstclear(&a, &delete);
}
