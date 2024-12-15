/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:17:49 by radlouni          #+#    #+#             */
/*   Updated: 2024/11/27 16:39:34 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	parametre(va_list arg, char lettre)
{
	int	i;
	int	init;

	i = 0;
	init = 0;
	if (lettre == 'c')
		i += ft_putchar_count(va_arg(arg, int));
	else if (lettre == 's')
		i += ft_putstr_count(va_arg(arg, char *));
	else if (lettre == 'p')
		i += ft_print_adresse(va_arg(arg, void *), init);
	else if (lettre == 'i')
		i += ft_putnbr_count(va_arg(arg, int), init);
	else if (lettre == 'd')
		i += ft_putnbr_count(va_arg(arg, int), init);
	else if (lettre == 'u')
		i += ft_unsd_putnbr_count(va_arg(arg, unsigned int), init);
	else if (lettre == 'x')
		i += ft_putnbr_base_l(va_arg(arg, unsigned int), init);
	else if (lettre == 'X')
		i += ft_putnbr_base_u(va_arg(arg, unsigned int), init);
	else if (lettre == '%')
		i += ft_putchar_count('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			count;
	va_list		arguments;

	if (!format)
		return (-1);
	va_start (arguments, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += parametre(arguments, format[i + 1]);
			i++;
		}
		else
			count += ft_putchar_count(format[i]);
		i++;
	}
	va_end (arguments);
	return (count);
}

// int	main(void)
// {
// 	int a = 42;
// 	ft_printf("la valeur est %d", a);
// 	return (0);
// }