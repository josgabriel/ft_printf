/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 06:05:06 by josgabri          #+#    #+#             */
/*   Updated: 2021/09/14 01:14:21 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	r_num(int n, char *str, int i)
{
	unsigned int	num;

	num = n;
	if (n < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num >= 10)
		r_num((num / 10), str, (i - 1));
	str[i] = (num % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		quant;

	i = n;
	quant = 0;
	if (i <= 0)
		quant++;
	while (i)
	{
		i = i / 10;
		quant++;
	}
	str = malloc(quant + 1);
	if (!str)
		return (NULL);
	str[quant] = 0;
	r_num(n, str, (quant - 1));
	return (str);
}
