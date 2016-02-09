/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	**ft_arrccpy(char **array)
{
	char	**ret;
	t_uint	i;

	if ((ret = (char**)malloc(sizeof(char*) * (ft_arrlen(array) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (array[i])
	{
		ret[i] = ft_strdup(array[i]);
		++i;
	}
	ret[i] = NULL;
	return (ret);
}
