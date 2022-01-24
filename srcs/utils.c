/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:12:22 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 12:55:14 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include "libft/libft.h"

char	*ft_newsubstr(char const *s, int *start, int len)
{
	char	*subs;
	int	cont;
	int		c;

	*start += 1;
	cont = 0;
	c = ft_strlen(s);
	if (!s)
		return (0);
	if (*start > c)
		len = 0;
	if (len > c)
		len = c;
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (0);
	while (s[*start] && cont < len)
	{
		subs[cont] = s[*start];
		cont++;
		*start += 1;
	}
	subs[cont] = '\0';
	*start = 0;
	return (subs);
}

int	def_args(char *string, int *count, int *ptr)
{
	while (string[*count])
	{
		if (string[*count] == '%')
		{
			*count += 1;
			if (string[*count] == ' ')
			{
				while (string[*count] == ' ')
					*count += 1;
			}
			if (string[*count] != '%')
				return (string[*count]);
			else
			{
				ft_putchar_fd(string[*count], 1);
				*ptr += 1;
			}
		}
		else
		{
			ft_putchar_fd(string[*count], 1);
			*ptr += 1;
		}
		*count += 1;
	}
	return (0);
}

char	*reverse_string(const char *str)
{
	int		len;
	int		c;
	char	*str2;

	len = ft_strlen(str) - 1;
	c = 0;
	str2 = ft_strdup(str);
	while (str[c])
	{
		str2[c] = str[len];
		c++;
		len--;
	}
	str2[c] = '\0';
	return (str2);
}

static void	r_unsigned_num(unsigned long n, char *str, int i)
{
	unsigned long	num;

	num = n;
	if (num >= 10)
		r_unsigned_num((num / 10), str, (i - 1));
	str[i] = (num % 10) + '0';
}

char	*ft_unsigned_itoa(unsigned long n)
{
	char				*str;
	unsigned long		i;
	unsigned int		quant;

	i = n;
	quant = 0;
	if (i == 0)
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
	r_unsigned_num(n, str, (quant - 1));
	return (str);
}
