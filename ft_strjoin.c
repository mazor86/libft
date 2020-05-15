/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 15:25:56 by mazor             #+#    #+#             */
/*   Updated: 2020/05/12 15:38:40 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*joined;
	unsigned int	len1;
	unsigned int	len2;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		if (!(joined = (char*)malloc(sizeof(char) * (len1 + len2 + 1))))
			return (NULL);
		ft_strlcpy(joined, s1, len1 + 1);
		ft_strlcat(joined, s2, len1 + len2 + 1);
		return (joined);
	}
	return (NULL);
}
