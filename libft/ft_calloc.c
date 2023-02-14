/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoteix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:15:49 by joaoteix          #+#    #+#             */
/*   Updated: 2022/11/11 18:02:27 by joaoteix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	memlen;
	void	*allocmem;

	if (size > 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	memlen = nmemb * size;
	allocmem = malloc(memlen);
	if (!allocmem)
		return (NULL);
	ft_bzero(allocmem, memlen);
	return (allocmem);
}
