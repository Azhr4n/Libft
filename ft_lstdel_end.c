/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_end(t_lst **top, void (*del)(t_lst*))
{
	t_lst	*tmp;
	t_lst	*prev;

	if (*top)
	{
		tmp = *top;
		if (tmp->next)
		{
			while (tmp->next)
			{
				prev = tmp;
				tmp = tmp->next;
			}
			(*del)(tmp);
			prev->next = NULL;
		}
		else
		{
			(*del)(*top);
			*top = NULL;
		}
	}
}
