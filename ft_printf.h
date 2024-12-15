/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:21:07 by radlouni          #+#    #+#             */
/*   Updated: 2024/11/26 23:58:54 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <assert.h>
# include <limits.h>

int		ft_putchar_count(char c);
int		ft_putnbr_base_l(unsigned int n, int init_static);
int		ft_putnbr_base_u(unsigned int n, int init_static);
int		ft_putnbr_count(int n, int init_static);
int		ft_putstr_count(char *str);
int		ft_unsd_putnbr_count(unsigned int n, int init_static);
int		ft_printf(const char *format, ...);
int		ft_print_adresse(void *n, int init_static);

#endif