/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memreps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ulong		ft_memreps(void *p, t_ulong n, t_ushort s, t_ushort d)
{
	t_ushort	*tp;
	t_ulong		ret;
	t_ulong		i;

	ret = 0;
	if (p)
	{
		tp = (t_ushort*)p;
		ret = 0;
		i = 0;
		while (i < n)
		{
			if (*tp == s)
			{
				*tp = d;
			}
			++ret;
			++tp;
			i += sizeof(short);
		}
	}
	return (ret);
}
