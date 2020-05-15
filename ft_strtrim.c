/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:20:38 by mazor             #+#    #+#             */
/*   Updated: 2020/05/12 22:51:58 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*untrim;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (!(*set))
		return (ft_strdup(s1));
	while ((len = ft_strlen(s1)) && ft_strchr(set, *s1))
		s1++;
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	untrim = (char*)ft_calloc(len + 1, sizeof(char));
	ft_strlcpy(untrim, s1, len + 1);
	return (untrim);
}
