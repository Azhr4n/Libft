/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*str_e;
	char	*str_s;

	if (*str)
	{
		str_s = str - 1;
		str_e = str;
		while (*str_e)
			++str_e;
		while (str_e-- > ++str_s)
			if (str_s != str_e)
			{
				*str_e ^= *str_s;
				*str_s ^= *str_e;
				*str_e ^= *str_s;
			}
	}
	return (str);
}
