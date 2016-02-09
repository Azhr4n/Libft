/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrepc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ulong	ft_memrepc(void *p, t_ulong n, t_uchar s, t_uchar d)
{
	t_uchar	*tp;
	t_ulong	ret;

	ret = 0;
	if (p)
	{
		tp = (t_uchar*)p;
		while (n--)
		{
			if (*tp == s)
			{
				*tp = d;
				++ret;
			}
			++tp;
		}
	}
	return (ret);
}
