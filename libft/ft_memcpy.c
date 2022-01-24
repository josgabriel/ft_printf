/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:04:58 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 12:13:51 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	if (!dest && !src)
		return (NULL);
	while (cont < n)
	{
		((unsigned char *)dest)[cont] = ((unsigned char *)src)[cont];
		cont++;
	}
	return (dest);
}
