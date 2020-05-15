/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:41:22 by mazor             #+#    #+#             */
/*   Updated: 2020/05/12 00:07:54 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, ft_strlen(s) + 1);
	return (dup);
}
