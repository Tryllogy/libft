/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:15:22 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/06 17:18:38 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (j < ft_strlen(little))
			{
				if (little[j] != big[i + j] || ((i + j) >= len))
					break ;
				j++;
			}
			if (j == ft_strlen(little))
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
