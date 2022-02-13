/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:21:35 by salmanso          #+#    #+#             */
/*   Updated: 2022/02/12 22:16:52 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...); //done .
int		ft_formats(va_list args, const char format); // done.
int		ft_putchar(int c); // done.
int		ft_put_str(char *str); // done.
int		ft_put_ptr(unsigned long long ptr); // done.
int		ft_put_nbr(int n); //done.
int		ft_put_unsigned(unsigned int n); // done.
int		ft_putnbr_hex(unsigned int num, const char format); // done.
int		ft_put_percent(void); // done .

void	ft_putstr(char *str); //done
void	ft_putptr(uintptr_t num); // done.
int		ft_ptr_len(uintptr_t num); ///done .
char	*ft_uitoa(unsigned int n); // done .
int		ft_numlen(unsigned	int num); // done .
void	ft_put_hex(unsigned int num, const char format); // done.
int		ft_hex_len(unsigned	int num); // done .

#endif
