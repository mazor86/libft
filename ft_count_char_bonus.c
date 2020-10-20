/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:26:31 by mazor             #+#    #+#             */
/*   Updated: 2020/10/20 17:27:57 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_count_char returns count of c in str
*/

int		ft_count_char(char *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count);
}
