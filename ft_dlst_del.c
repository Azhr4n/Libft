/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_dlst_del(t_dlst **lst)
{
	t_dlst	*tmp;

	if (*lst)
	{
		while ((*lst)->prev)
			*lst = (*lst)->prev;
		while (*lst)
		{
			tmp = (*lst)->next;
			free((*lst)->data);
			free(*lst);
			*lst = tmp;
		}
		*lst = NULL;
	}
}
