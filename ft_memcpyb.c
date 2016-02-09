/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpyb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpyb(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;

	if (dst && src)
	{
		tdst = (char*)dst;
		tsrc = (char*)src;
		while (n--)
			tdst[n] = tsrc[n];
	}
	return (dst);
}
