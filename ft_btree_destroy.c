/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_btree_destroy(t_btree **root)
{
	if (root && *root)
	{
		if ((*root)->left)
			ft_btree_destroy(&(*root)->left);
		if ((*root)->right)
			ft_btree_destroy(&(*root)->right);
		ft_buffer_destroy(&(*root)->data);
		free(*root);
		*root = NULL;
	}
}
