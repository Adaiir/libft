/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralexa <maralexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:24:09 by maralexa          #+#    #+#             */
/*   Updated: 2022/11/07 09:28:24 by maralexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	int		i;

	if (!s || !f)
		return (NULL);
	s1 = (char *)malloc(ft_strlen((char *) s) + 1);
	if (!s1)
		return (NULL);
	i = -1;
	while (s[++i])
		s1[i] = f(i, s[i]);
	s1[i] = '\0';
	return (s1);
}
