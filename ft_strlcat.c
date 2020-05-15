/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 13:54:52 by mazor             #+#    #+#             */
/*   Updated: 2020/05/11 15:12:52 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	dst = ft_strchr(dst, '\0');
	if (size > dst_len)
	{
		ft_strlcpy(dst, src, size - dst_len);
		return (dst_len + src_len);
	}
	else
		return (size + src_len);
}
