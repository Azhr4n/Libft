/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_search_item.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_btree_search_item(t_btree *root, t_ftbuffer *data_ref,
			int (*cmpf)(t_ftbuffer *, t_ftbuffer *))
{
	if (root && cmpf && data_ref)
	{
		if (!(*cmpf)(data_ref, root->data))
			return (root);
		else
		{
			if (root->left)
				return (ft_btree_search_item(root->left, data_ref, cmpf));
			if (root->right)
				return (ft_btree_search_item(root->left, data_ref, cmpf));
		}
	}
	return (NULL);
}
