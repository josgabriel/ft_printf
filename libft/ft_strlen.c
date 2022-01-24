/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 02:33:17 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 15:32:29 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *c)
{
	int	size;

	size = 0;
	if (!c)
		return (size);
	while (c[size])
		size++;
	return (size);
}
