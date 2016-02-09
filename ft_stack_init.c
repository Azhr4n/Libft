/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_ftstack	*ft_stack_init(void)
{
	t_ftstack	*ret;

	if ((ret = (t_ftstack*)malloc(sizeof(t_ftstack))) == NULL)
		return (NULL);
	ret->top = NULL;
	ret->size = 0;
	ret->push = (t_stack_fpp*)ft_stack_push;
	ret->pop = ft_stack_pop;
	ret->peek = ft_stack_peek;
	ret->destroy = ft_stack_destroy;
	return (ret);
}
