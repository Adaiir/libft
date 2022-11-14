/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralexa <maralexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:39:54 by maralexa          #+#    #+#             */
/*   Updated: 2022/11/07 10:33:36 by maralexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *str, char c)
{
	int	wordnum;
	int	i;

	i = 1;
	wordnum = 0;
	if (!str[0])
		return (wordnum);
	while (str[i])
	{
		if (str[i + 1] == 0 || (str[i] == c && str[i - 1] != c))
			wordnum++;
		i++;
	}
	return (wordnum);
}

static char	*ft_nw(char *s, char c)
{
	char	*s1;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	s1 = malloc (i + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (*s && *s != c)
		s1[i++] = *s++;
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	l;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	strings = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!s || !strings)
		return (NULL);
	l = 0;
	while (*s)
	{
		if (*s != c)
		{
			strings[l++] = ft_nw((char *)s, c);
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	strings[l] = 0;
	return (strings);
}
