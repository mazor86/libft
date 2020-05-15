/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 23:01:39 by mazor             #+#    #+#             */
/*   Updated: 2020/05/13 01:52:27 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calculate_str(const char *s, char c)
{
	size_t	num;

	num = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		num++;
		while (*s && *s == c)
			s++;
	}
	return (num);
}

static size_t	len_word(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static void		fill_word(char const **s, char c, char **split, size_t num)
{
	size_t	i;

	i = 0;
	while (**s && **s != c)
	{
		split[num][i++] = **s;
		(*s)++;
	}
	split[num][i] = '\0';
	while (**s && **s == c)
		(*s)++;
}

static void		free_mem(char **split, size_t num)
{
	while (num)
		free(split[num--]);
	free(split[num]);
	free(split);
	return ;
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	size_t	num;
	size_t	len;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	num = calculate_str(s, c);
	if (!(split = (char**)malloc(sizeof(char*) * (num + 1))))
		return (NULL);
	split[num] = NULL;
	num = 0;
	while (*s)
	{
		len = len_word(s, c);
		if (!(split[num] = (char*)malloc(sizeof(char) * (len + 1))))
		{
			free_mem(split, num);
			return (NULL);
		}
		fill_word(&s, c, split, num++);
	}
	return (split);
}
