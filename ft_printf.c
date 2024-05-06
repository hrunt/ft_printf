/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:18:37 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/29 15:07:09 by mhrynevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "ft_printf.h"

static int	conversion(int i, char *f, va_list args)
{
	if (f[i] == 'i' || f[i] == 'd')
		return (ft_putnbr_fd (va_arg (args, int), 1));
	else if (f[i] == 'c')
		return (ft_putchar_fd (va_arg (args, int), 1));
	else if (f[i] == 's')
		return (ft_putstr_fd (va_arg (args, char *), 1));
	else if (f[i] == '%')
		return (ft_putchar_fd ('%', 1));
	else if (f[i] == 'u')
		return (ft_putundec (va_arg (args, unsigned int), 1));
	else if (f[i] == 'x')
		return (ft_hex(va_arg (args, unsigned int), 'x'));
	else if (f[i] == 'X')
		return (ft_hex (va_arg (args, unsigned int), 'X'));
	else if (f[i] == 'p')
		return (ft_printptr (va_arg (args, char *)));
	else
		return (ft_putchar_fd (f[i], 1));
}

int	ft_printf(const char *f, ...)
{
	int		i;
	int		j;
	va_list	args;

	i = 0;
	j = 0;
	va_start (args, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			j += conversion (i, (char *) f, args) - 2;
		}
		else
			write (1, &f[i], 1);
		i++;
	}
	va_end (args);
	return (i + j);
}
/*#include <stdio.h>
int main()
{
    int test = 42;
    
    int yours = printf(" %p \n", LONG_MIN);
    int my = ft_printf (" %p \n", LONG_MIN);
    printf ("yours is %d and mine is %d\n", yours, my);
    
    printf("%p is a virtual memory address\n", &test);
    ft_printf ("%p is a virtual memory address\n", &test);
    printf("%p is a virtual memory address\n", NULL);
    ft_printf ("%p is a virtual memory address\n", NULL);
}*/