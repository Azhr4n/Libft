/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

int		ft_memreaalloc(void **ptr, t_uint osize, t_uint nsize)
{
	void	*ret;

	if ((ret = (void*)malloc(nsize)) == NULL)
		return (0);
	ft_memcpy(ret, *ptr, osize);
	ft_memdel(ptr);
	*ptr = ret;
	return (1);
}
