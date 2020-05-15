/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:33:40 by mazor             #+#    #+#             */
/*   Updated: 2020/05/13 15:11:04 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	if (!dest && !src)
		return (NULL);
	dest_copy = (unsigned char*)dest;
	src_copy = (unsigned char*)src;
	if (dest_copy <= src_copy)
	{
		while (n--)
			*dest_copy++ = *src_copy++;
	}
	else
	{
		while (n--)
			dest_copy[n] = src_copy[n];
	}
	return (dest);
}
