/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralexa <maralexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:23:08 by maralexa          #+#    #+#             */
/*   Updated: 2022/11/07 10:37:14 by maralexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	itoa_size(long n, int *mag_ptr)
{
	size_t	size;
	long	mag;

	size = 1;
	mag = 10;
	if (n < 0)
		size++;
	while (n / mag)
	{
		size++;
		mag *= 10;
	}
	if (mag_ptr)
		*mag_ptr = mag;
	return (size);
}

static void	put_nbr(long n, char **str)
{
	if (n < 0)
	{
		**str = '-';
		(*str)++;
		put_nbr(-n, str);
	}
	else
	{
		if (n < 10)
		{
			**str = n + '0';
			(*str)++;
		}
		else
		{
			put_nbr(n / 10, str);
			put_nbr(n % 10, str);
		}
	}
}

static void	zero_fill(char *str, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
		str[index++] = '0';
	str[index] = 0;
}

char	*ft_itoa(int n)
{
	char		*str;
	char		*str_it;
	int			mag;
	size_t		size;

	size = itoa_size(n, &mag);
	mag = 1;
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str)
	{
		str_it = str;
		zero_fill(str_it, size);
		put_nbr(n, &str_it);
		*str_it = 0;
	}
	return (str);
}
