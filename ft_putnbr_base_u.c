/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:52:42 by radlouni          #+#    #+#             */
/*   Updated: 2024/11/26 17:26:12 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_u(unsigned int nb, int init_static)
{
	char			*base;
	static int		index = 0;

	if (init_static == 0)
	{
		index = 0;
		init_static = 1;
	}
	base = "0123456789ABCDEF";
	if (nb < 16)
		index += ft_putchar_count(base[nb]);
	if (nb >= 16)
	{
		ft_putnbr_base_u(nb / 16, init_static);
		ft_putnbr_base_u(nb % 16, init_static);
	}
	return (index);
}

// int	main(void)
// {
// 	printf("\n%d\n", ft_putnbr_base_U(-45238));
// 	return (0);
// }