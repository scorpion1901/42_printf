/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adresse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:28:04 by radlouni          #+#    #+#             */
/*   Updated: 2024/11/27 00:26:49 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adresse(void *n, int init_static)
{
	char				*base;
	static int			index = 0;
	unsigned long long	nb;

	if (init_static == 0)
	{
		if (!n)
			return (ft_putstr_count("(nil)"));
		index = 0;
		index += ft_putstr_count("0x");
		init_static = 1;
	}
	nb = (unsigned long long)n;
	base = "0123456789abcdef";
	if (nb < 16)
		index += ft_putchar_count(base[nb]);
	if (nb >= 16)
	{
		ft_print_adresse((void *)(nb / 16), init_static);
		ft_print_adresse((void *)(nb % 16), init_static);
	}
	return (index);
}
