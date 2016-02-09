/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_stack_destroy(t_ftstack **this)
{
	t_stack_elem	*tmp;

	if (this && *this)
	{
		while ((*this)->top)
		{
			tmp = (*this)->top->next;
			ft_memdel((void**)&(*this)->top);
			(*this)->top = tmp;
		}
	}
	return (FALSE);
}
