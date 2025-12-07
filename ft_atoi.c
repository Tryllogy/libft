/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:41:16 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/06 18:39:56 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			minus;
	long long	result;

	minus = 1;
	result = 0;
	while (nptr[0] == 32 || (9 <= nptr[0] && nptr[0] <= 13))
		nptr++;
	if (nptr[0] == '+' || nptr[0] == '-')
	{
		if (nptr[0] == '-')
			minus *= -1;
		nptr++;
	}
	while (48 <= nptr[0] && nptr[0] <= 57)
	{
		result = (nptr[0] - 48) + result * 10;
		nptr++;
	}
	return ((int)(result * minus));
}
