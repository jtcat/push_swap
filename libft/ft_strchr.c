/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoteix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:45:58 by joaoteix          #+#    #+#             */
/*   Updated: 2022/11/09 21:19:11 by joaoteix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*(str++) == '\0')
			return (NULL);
	}
	return ((char *)str);
}
