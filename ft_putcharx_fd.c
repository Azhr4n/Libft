/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharx_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putcharx_fd(t_uchar c, int fd)
{
	char	charset[17];

	ft_strcpy(charset, "0123456789abcdef");
	if (c < 16)
	{
		ft_putchar_fd('0', fd);
		ft_putchar_fd(charset[c], fd);
	}
	else
	{
		ft_putchar_fd(charset[c / 16], fd);
		ft_putchar_fd(charset[c % 16], fd);
	}
}
