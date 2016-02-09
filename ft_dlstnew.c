/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_dlst	*ft_dlstmew(void *data, t_ulong size)
{
	t_dlst	*ret;

	if ((ret = (t_dlst*)malloc(sizeof(t_dlst))) == NULL)
		return (NULL);
	if ((ret->data = (void*)malloc(size)) == NULL)
	{
		free(ret);
		return (NULL);
	}
	ft_memcpy(ret->data, data, size);
	ret->size = size;
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}
