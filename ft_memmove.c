/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:44:03 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/12 19:20:10 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((src == NULL && dest == NULL) || n == 0)
		return (dest);
	if (src < dest)
	{
		n--;
		while (n > 0)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			n--;
		}
		((unsigned char *)dest)[0] = ((unsigned char *)src)[0];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
