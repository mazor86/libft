/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:54:39 by mazor             #+#    #+#             */
/*   Updated: 2020/05/12 14:53:29 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*mapped;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	mapped = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mapped)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapped[i] = (f)(i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
