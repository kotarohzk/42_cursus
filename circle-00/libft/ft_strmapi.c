/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:35:04 by scott             #+#    #+#             */
/*   Updated: 2023/07/25 15:47:44 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buf;
	size_t	i;

	if (!s || !f)
		return (NULL);
	buf = malloc(ft_strlen(s) + 1);
	if (!buf)
		return (NULL);
	i = 0;
	while (i < ft_strlen)
	{
		buf[i] = f(i, s[i]);
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
