/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:12:13 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 15:33:19 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include "libft/libft.h"

static int	def_int(int number, int type, int *ptr)
{
	int		b;
	char	*string;

	b = 0;
	if ((type == 'i') | (type == 'd'))
	{
		string = ft_itoa(number);
		ft_putstr_fd(string, 1);
		b = count_bytes(string);
		return (b);
	}
	else if (type == 'c')
	{
		ft_putchar_fd(number, 1);
		*ptr += 1;
	}
	return (0);
}

static int	def_uns(unsigned int number, int type)
{
	char	*string;
	int		b;

	b = 0;
	if ((type == 'x') | (type == 'X'))
		b = count_bytes(hex_conv(number, type));
	else if (type == 'u')
	{	
		string = ft_unsigned_itoa(number);
		b = count_bytes(string);
	}
	return (b);
}

static int	pointer_hex(unsigned long val)
{
	char	*string;

	string = ft_strjoin("0x", hex_conv(val, 'x'));
	return (count_bytes(string));
}

int	ft_printf(const char *str, ...)
{
	va_list	att;
	int		format_char;
	int		position;
	char	*str2;
	int		rt_value;

	position = 0;
	str2 = ft_strdup(str);
	rt_value = 0;
	va_start(att, str);
	while (str2[position])
	{
		format_char = def_args(str2, &position, &rt_value);
		if ((format_char == 'i') | (format_char == 'd') | (format_char == 'c'))
			rt_value += def_int(va_arg(att, int), format_char, &rt_value);
		else if (format_char == 's')
			rt_value += count_bytes(va_arg(att, char *));
		else if ((format_char == 'x') | (format_char == 'X') | (format_char == 'u'))
			rt_value += def_uns(va_arg(att, unsigned int), format_char);
		else if (format_char == 'p')
			rt_value += pointer_hex(va_arg(att, unsigned long));
		// free(str2);
		str2 = ft_newsubstr(str2, &position, ft_strlen(str2));
	}
	// free(str2);
	va_end(att);
	
	return (rt_value);
}
