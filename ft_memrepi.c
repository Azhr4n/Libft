/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrepi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ulong		ft_memrepi(void *p, t_ulong n, t_uint s, t_uint d)
{
	t_uint		*tp;
	t_ulong		ret;
	t_ulong		i;

	ret = 0;
	if (p)
	{
		tp = (t_uint*)p;
		i = 0;
		while (i < n)
		{
			if (*tp == s)
			{
				*tp = d;
				++ret;
			}
			++tp;
			i += sizeof(int);
		}
	}
	return (ret);
}
