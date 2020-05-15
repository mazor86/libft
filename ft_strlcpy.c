/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 12:51:14 by mazor             #+#    #+#             */
/*   Updated: 2020/05/12 12:49:46 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;

	if (src && dst)
	{
		dst_len = (size - 1);
		src_len = ft_strlen(src);
		if (size)
		{
			while (*src && dst_len--)
			{
				*dst++ = *src++;
			}
			*dst = '\0';
		}
		return ((src_len));
	}
	return (0);
}
