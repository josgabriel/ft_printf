/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_bytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:41:23 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 02:43:39 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
# include "libft/libft.h"

void			ft_putchar_fd(char c, int fd);

static int	*newputstr(char *s, int *ptr)
{
	while (*s)
	{
		ft_putchar_fd(*s, 1);
		s++;
		*ptr += 1;
	}
	return (ptr);
}

int	count_bytes(char *str)
{
	int	b;
	int	*count;

	b = 0;
	count = &b;
	newputstr(str, count);
	return (*count);
}
