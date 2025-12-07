/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:35:45 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/12 15:25:28 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;

	s2 = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
