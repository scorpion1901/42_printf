/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsd_putnbr_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:32:20 by radlouni          #+#    #+#             */
/*   Updated: 2024/11/26 17:45:09 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsd_putnbr_count(unsigned int n, int init_static)
{
	static int		index = 0;

	if (init_static == 0)
	{
		index = 0;
		init_static = 1;
	}
	if (n < 10)
		index += ft_putchar_count(n + 48);
	if (n >= 10)
	{
		ft_unsd_putnbr_count(n / 10, init_static);
		ft_unsd_putnbr_count(n % 10, init_static);
	}
	return (index);
}

// int	main(void)
// {
// 	printf("\n%d\n", ft_unsd_putnbr_count(-1));
// 	return (0);
// }