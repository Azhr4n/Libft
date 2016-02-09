/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_lst	*ft_lstnew(void *data, t_ulong size)
{
	t_lst	*ret;

	if ((ret = (t_lst*)malloc(sizeof(t_lst))) == NULL)
		return (NULL);
	if ((ret->data = (void*)malloc(size)) == NULL)
	{
		free(ret);
		return (NULL);
	}
	ft_memcpy(ret->data, data, size);
	ret->size = size;
	ret->next = NULL;
	return (ret);
}
