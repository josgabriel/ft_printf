/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:42:38 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 13:19:56 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		size;

	size = ft_strlen(s);
	p = malloc(size);
	if (!p)
		return (NULL);
	return (ft_memcpy(p, s, size));
}
