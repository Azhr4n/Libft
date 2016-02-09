/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_srt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_srt(t_lst **top, t_lst *elem, int (*cmp)(t_lst*, t_lst*))
{
	t_lst	*tmp;
	t_lst	*prev;

	if (!*top)
		ft_lstpush(top, elem);
	else
	{
		prev = *top;
		if ((*cmp)(prev, elem) >= 0)
		{
			elem->next = *top;
			*top = elem;
			return ;
		}
		tmp = (*top)->next;
		while (tmp)
		{
			if ((*cmp)(tmp, elem) >= 0)
				break ;
			prev = tmp;
			tmp = tmp->next;
		}
		elem->next = tmp;
		prev->next = elem;
	}
}
