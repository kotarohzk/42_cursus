/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:09:43 by scott             #+#    #+#             */
/*   Updated: 2023/07/19 16:32:05 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	src = (char *)s;
	i = 0;
	while (i < n)
	{
		if (*(src + i) == (unsigned char)c)
		{
			return (src + i);
		}
		i++;
	}
	return (0);
}
