/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:16:38 by radlouni          #+#    #+#             */
/*   Updated: 2024/11/26 17:50:10 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_count(int n, int init_static)
{
	long			nb;
	static int		index = 0;

	if (init_static == 0)
	{
		index = 0;
		init_static = 1;
	}
	nb = n;
	if (nb < 0)
	{
		index += ft_putchar_count('-');
		nb *= -1;
	}
	if (nb < 10)
		index += ft_putchar_count(nb + 48);
	if (nb >= 10)
	{
		ft_putnbr_count(nb / 10, init_static);
		ft_putnbr_count(nb % 10, init_static);
	}
	return (index);
}

// int	main(void)
// {
// 	printf("\n%d\n", ft_putnbr_count(-4562));
// 	return (0);
// }