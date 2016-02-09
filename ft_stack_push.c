/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_bool	ft_stack_push(t_ftstack **this, t_ftbuffer *data)
{
	t_stack_elem	*el;

	if (this && *this && data)
	{
		if ((el = (t_stack_elem*)malloc(sizeof(t_stack_elem))) == NULL)
			return (FALSE);
		el->data = data;
		el->next = (*this)->top;
		(*this)->top = el;
		(*this)->size++;
		return (TRUE);
	}
	return (FALSE);
}
