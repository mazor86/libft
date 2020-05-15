/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 15:41:29 by mazor             #+#    #+#             */
/*   Updated: 2020/05/12 18:13:12 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	digit;
	char	sign;

	len = (n >= 0) ? 1 : 2;
	digit = n;
	while ((digit /= 10))
		len++;
	sign = (n >= 0) ? '\0' : '-';
	digit = (n >= 0) ? n : -(long)n;
	str = (char*)ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	while (digit > 9)
	{
		str[--len] = digit % 10 + '0';
		digit /= 10;
	}
	str[--len] = digit + '0';
	if (sign)
		*str = sign;
	return (str);
}
