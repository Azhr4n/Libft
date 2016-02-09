/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddi(t_lst **top, t_lst *elem, t_uint pos)
{
	t_uint	i;
	t_lst	*tmp;

	if (!*top || pos == 0)
		ft_lstpush(top, elem);
	else
	{
		i = 0;
		tmp = *top;
		while (i < pos && tmp->next)
		{
			tmp = tmp->next;
			++i;
		}
		elem->next = tmp->next;
		tmp->next = elem;
	}
}
