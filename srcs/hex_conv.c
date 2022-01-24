/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:55:37 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 02:43:44 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include "libft/libft.h"

static char	*set_unsigned(unsigned long number)
{
	char	*string;

	string = ft_unsigned_itoa(number);
	return (string);
}

static char	helperx(int num)
{
	if (num == 10)
		return ('a');
	else if (num == 11)
		return ('b');
	else if (num == 12)
		return ('c');
	else if (num == 13)
		return ('d');
	else if (num == 14)
		return ('e');
	else
		return ('f');
}

static char	helperxx(int num)
{
	if (num == 10)
		return ('A');
	else if (num == 11)
		return ('B');
	else if (num == 12)
		return ('C');
	else if (num == 13)
		return ('D');
	else if (num == 14)
		return ('E');
	else
		return ('F');
}

char	*hex_conv(unsigned long numb, char type)
{
	unsigned int		aux;
	unsigned int		c;
	char				*str;

	c = 0;
	str = set_unsigned(numb);
	while (numb > 0)
	{
		aux = numb % 16;
		if (aux < 10)
			str[c] = aux + '0';
		else
		{
			if (type == 'x')
				str[c] = helperx(aux);
			else if (type == 'X')
				str[c] = helperxx(aux);
		}
		numb = numb / 16;
		c++;
	}
	str[c] = numb;
	str[c + 1] = '\0';
	str = reverse_string(str);
	return (str);
}
