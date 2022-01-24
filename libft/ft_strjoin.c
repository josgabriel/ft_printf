/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 22:37:28 by josgabri          #+#    #+#             */
/*   Updated: 2021/09/06 15:10:15 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cont;
	size_t	cont2;
	char	*s3;

	cont = 0;
	cont2 = 0;
	if (!s1 && !s2)
		return (NULL);
	s3 = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[cont])
	{
		s3[cont] = s1[cont];
		cont++;
	}
	while (s2[cont2])
	{
		s3[cont] = s2[cont2];
		cont++;
		cont2++;
	}
	s3[cont] = '\0';
	return (s3);
}
