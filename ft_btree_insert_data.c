/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_insert_data(t_btree **root, t_ftbuffer *item,
		int (*cmpf)(t_ftbuffer*, t_ftbuffer *))
{
	t_btree	*new;

	new = ft_btree_create_node(item);
	if (root)
	{
		if (*root)
		{
			if ((*cmpf)((*root)->data, item) > 0)
				ft_btree_insert_data(&(*root)->left, item, cmpf);
			else
				ft_btree_insert_data(&(*root)->right, item, cmpf);
		}
		else
			*root = new;
	}
}
