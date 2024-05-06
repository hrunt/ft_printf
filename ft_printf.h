/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:18:16 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/29 13:03:53 by mhrynevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int		ft_printf(const char *f, ...);
int		ft_putundec(unsigned int n, int fd);
int		ft_hex(unsigned int n, char c);
int		ft_printptr(void *ptr);
int		ft_hexptr(long long n, char c);

#endif