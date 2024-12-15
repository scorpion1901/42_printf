/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:02:09 by radlouni          #+#    #+#             */
/*   Updated: 2024/11/27 16:43:58 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *str)
{
	int	a;
	int	index;

	if (!str)
	{
		ft_putstr_count("(null)");
		return (6);
	}
	a = 0;
	index = 0;
	if (!str)
	{
		index += ft_putstr_count("(null)");
		return (index);
	}
	while (str[a] != '\0')
	{
		index += ft_putchar_count(str[a]);
		a++;
	}
	return (index);
}
