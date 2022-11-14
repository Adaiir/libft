/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralexa <maralexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:04:31 by maralexa          #+#    #+#             */
/*   Updated: 2022/11/04 14:48:21 by maralexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	lens = ft_strlen((char *)src);
	if (!size)
		return (lens);
	lend = ft_strlen(dst);
	i = lend;
	if (size > 0 && size > lend)
	{
		while (*src && (i < size - 1))
			dst[i++] = *src++;
		dst[i] = '\0';
		return (lend + lens);
	}
	return (lens + size);
}
