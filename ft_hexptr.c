/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:18:39 by mrk               #+#    #+#             */
/*   Updated: 2024/03/28 14:02:33 by mhrynevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

static int	hexptr_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_hexptr(long long n, char c)
{
	int			i;
	long long	result;

	i = hexptr_count (n);
	if (n > 0)
	{
		ft_hexptr (n / 16, c);
		result = n % 16;
		if (result > 9 && c == 'x')
			ft_putchar_fd (result - 10 + 'a', 1);
		else if (result > 9 && c == 'X')
			ft_putchar_fd (result - 10 + 'A', 1);
		else
			ft_putnbr_fd (result, 1);
	}
	return (i);
}
/*int	main()
	ft_putnbr_fd(10,2);
}*/
