/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:47:59 by scott             #+#    #+#             */
/*   Updated: 2023/07/20 13:27:38 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	i = dst_len;
	if (dstsize && dst_len < dstsize)
	{
		while ((i < (dstsize - 1)) && src[i - dst_len])
		{
			dst[i] = src[i - dst_len];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i - dst_len])
		i++;
	if (dst_len < dstsize)
		return (dst_len + (i - dst_len));
	return (dstsize + (i - dst_len));
}
