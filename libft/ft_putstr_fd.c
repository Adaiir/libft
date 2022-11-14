/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralexa <maralexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:27:31 by maralexa          #+#    #+#             */
/*   Updated: 2022/11/02 12:20:44 by maralexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write(fd, &str[x], 1);
		x++;
	}
	if (!str)
		return ;
}