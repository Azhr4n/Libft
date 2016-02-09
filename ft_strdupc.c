/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strdupc(const char *s1, char c)
{
	char	*ret;

	ret = NULL;
	if (s1)
	{
		if ((ret = (char*)malloc(ft_strlenc((char*)s1, c) + 1)) == NULL)
			return (NULL);
		ft_strcpyc(ret, (char*)s1, c);
	}
	return (ret);
}
