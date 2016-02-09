/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xmalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_xmalloc(size_t n)
{
	void	*ret;

	if ((ret = (void*)ft_memalloc(n)) == NULL)
	{
		ft_putendl_fd("fatal error with malloc()... exiting", FT_STDERR);
		exit(-1);
	}
	return (ret);
}
