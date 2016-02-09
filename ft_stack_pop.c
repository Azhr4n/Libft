/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ftbuffer	*ft_stack_pop(t_ftstack **this)
{
	t_ftbuffer		*ret;
	t_stack_elem	*tmp;

	if (this && *this)
	{
		ret = (*this)->top->data;
		if (!ret)
			return (NULL);
		tmp = (*this)->top;
		(*this)->top = (*this)->top->next;
		if (tmp)
			ft_memdel((void**)&tmp);
		(*this)->size--;
		return (ret);
	}
	return (NULL);
}
