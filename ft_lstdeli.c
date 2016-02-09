/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdeli.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdeli(t_lst **top, t_uint pos, void (*del)(t_lst*))
{
	t_lst	*prev;
	t_lst	*tmp;
	t_uint	i;

	if (pos == 0)
	{
		tmp = *top;
		(*del)(tmp);
		*top = (*top)->next;
	}
	else
	{
		i = 0;
		tmp = *top;
		while (i++ < pos && tmp)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (tmp)
		{
			prev->next = tmp->next;
			(*del)(tmp);
		}
	}
}
