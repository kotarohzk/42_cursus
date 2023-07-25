/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:26:02 by scott             #+#    #+#             */
/*   Updated: 2023/07/25 12:55:13 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_number_of_elements(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**buf_array;
	size_t	i;
	size_t	j;

	if (!s || !c)
		return (NULL);
	buf_array = malloc(sizeof(char *) * get_number_of_elements(s, c));
	if (!buf_array)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] == c)
		{
			buf_array[j] = ft_substr(s, 0, i);
			s = s + i + 1;
			i = -1;
			j++;
		}
	}
	buf_array[j] = ft_substr(s, 0, ft_strlen(s));
	return (buf_array);
}
