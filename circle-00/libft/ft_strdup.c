/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:44:43 by scott             #+#    #+#             */
/*   Updated: 2023/07/24 13:01:32 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*buf;

	len = ft_strlen(s1) + 1;
	buf = ft_calloc(len, sizeof(char));
	if (!buf)
		return (NULL);
	ft_memcpy(buf, s1, len);
	return (buf);
}
