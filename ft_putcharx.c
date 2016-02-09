/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putcharx(t_uchar c)
{
	char	charset[17];

	ft_strcpy(charset, "0123456789abcdef");
	if (c < 16)
	{
		ft_putchar('0');
		ft_putchar(charset[c]);
	}
	else
	{
		ft_putchar(charset[c / 16]);
		ft_putchar(charset[c % 16]);
	}
}
