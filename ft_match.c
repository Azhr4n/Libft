/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_match(char *s1, char *s2)
{
	if (s1 && s2)
	{
		if (!(*s1) && !(*s2))
			return (1);
		else if (*s2 == *s1 && *s2 != '*')
			return (ft_match(s1 + 1, s2 + 1));
		else if (*s2 == '*' && *s1 == 0)
			return (ft_match(s1, s2 + 1));
		else if (*s2 == '*')
			return (ft_match(s1, s2 + 1) || ft_match(s1 + 1, s2));
		else
			return (0);
	}
	return (0);
}
