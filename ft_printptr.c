/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:14:12 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/29 15:06:52 by mhrynevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdint.h>

char	*ptr_to_hex(void *ptr)
{
	uintptr_t	ptr2;
	const char	*hex_digits;
	char		*result;
	int			i;
	int			num;

	hex_digits = "0123456789abcdef";
	ptr2 = (uintptr_t)ptr;
	num = (sizeof(uintptr_t) * 2);
	result = malloc(num + 1);
	if (!result)
		return (NULL);
	result[num] = '\0';
	i = num - 1;
	while (i >= 0)
	{
		result[i] = hex_digits[ptr2 & 0xF];
		ptr2 >>= 4;
		i--;
	}
	return (result);
}

int	ft_printptr(void *ptr)
{
	char	*result;
	int		i;
	int		length;

	i = 0;
	if (ptr == NULL)
		return (ft_putstr_fd ("(nil)", 1));
	ft_putstr_fd ("0x", 1);
	result = ptr_to_hex(ptr);
	if (!result)
		return (0);
	length = ft_strlen (result);
	while (result[i] == '0' && result[i])
		i++;
	ft_putstr_fd ((result + i), 1);
	free(result);
	return (length - i + 2);
}
