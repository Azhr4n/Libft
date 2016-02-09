/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_btree	*ft_btree_create_node(t_ftbuffer *item)
{
	t_btree	*new;

	new = NULL;
	if (item)
	{
		if ((new = (t_btree *)malloc(sizeof(t_btree))) == NULL)
			return (NULL);
		if ((new->data = ft_buffer_dup(item)) == NULL)
		{
			free(new);
			return (NULL);
		}
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
