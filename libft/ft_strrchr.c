/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralexa <maralexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:08:04 by maralexa          #+#    #+#             */
/*   Updated: 2022/11/07 14:47:36 by maralexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;

	lens = ft_strlen((char *)s);
	while (lens > 0 && (unsigned char)s[lens] != (unsigned char)c)
		lens--;
	if ((unsigned char)s[lens] == (unsigned char)c)
		return ((char *)&s[lens]);
	return (0);
}
