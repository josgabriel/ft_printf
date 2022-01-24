/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:12:18 by josgabri          #+#    #+#             */
/*   Updated: 2022/01/24 02:54:39 by josgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *string, ...);
char	*ft_newsubstr(char const *s, int *start, int len);
int		def_args(char *string, int *count, int *ptr);
char	*hex_conv(unsigned long numb, char type);
char	*reverse_string(const char *str);
char	*ft_unsigned_itoa(unsigned long n);
int		count_bytes(char *str);


#endif
