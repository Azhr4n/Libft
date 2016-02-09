/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pivanovi <pivanovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:32:37 by pivanovi          #+#    #+#             */
/*   Updated: 2013/11/21 12:32:38 by pivanovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_qs_swap(void **a, void **b)
{
	void	*t;

	t = *a;
	*a = *b;
	*b = t;
}

static void	ft_qs_partition(void *base, size_t *n_start_end,
				int (*fcmp)(void *, void *))
{
	UNUSED(base);
	UNUSED(n_start_end);
	UNUSED(fcmp);
	ft_qs_swap(&base, &base);
}

static void	ft_qsort_rec(void *base, size_t *n_start_end,
				int (*fcmp)(void *, void *))
{
	int	p;

	if (n_start_end[1] < n_start_end[2])
	{
		UNUSED(fcmp);
		UNUSED(p);
		UNUSED(base);
		ft_qs_partition(base, n_start_end, fcmp);
	}
}

void		ft_qsort(void *base, size_t nmemb, size_t size,
				int (*fcmp)(void *, void *))
{
	size_t	n_start_end[3];

	n_start_end[0] = nmemb;
	n_start_end[1] = 0;
	n_start_end[2] = size;
	ft_qsort_rec(base, n_start_end, fcmp);
}
