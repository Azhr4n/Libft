/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*telem;
	t_list	*prev;

	ret = NULL;
	if (lst && f)
	{
		ret = (*f)(lst);
		prev = ret;
		lst = lst->next;
		while (lst)
		{
			telem = (*f)(lst);
			prev->next = telem;
			prev = telem;
			lst = lst->next;
		}
		prev->next = NULL;
	}
	return (ret);
}
