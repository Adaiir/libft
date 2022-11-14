/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralexa <maralexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:19:53 by maralexa          #+#    #+#             */
/*   Updated: 2022/11/07 13:40:47 by maralexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t length)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (length > ft_strlen((char *)&s[start]))
		length = ft_strlen((char *)&s[start]);
	substring = (char *)malloc(length + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (s[start] && i < length)
		substring[i++] = s[start++];
	substring[i] = '\0';
	return (substring);
}
