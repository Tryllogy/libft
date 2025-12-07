/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:38:31 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/13 14:53:41 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_malloc(char *s, size_t start, size_t len)
{
	char	*s2;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len_s - 1 < start)
		return (ft_strdup(""));
	if (len_s < start + len)
	{
		s2 = ft_calloc(len_s - start + 1, sizeof(char));
		if (!s2)
			return (NULL);
		return (s2);
	}
	s2 = ft_calloc((len + 1), sizeof(char));
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	s2 = ft_malloc((char *)s, start, len);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		s2[i] = s[i + start];
		i++;
	}
	return (s2);
}
