/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:00:37 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/10 16:06:48 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_last_good_char(char *str, char *set)
{
	int	i;

	i = (int)ft_strlen(str) - 1;
	while (ft_is_in_set(str[i], (char *)set) && i >= 0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		index_s2;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (ft_is_in_set(s1[i], (char *)set))
		i++;
	j = ft_last_good_char((char *)s1, (char *)set);
	if (j < i)
		return (ft_calloc(1, sizeof(char)));
	s2 = ft_calloc((j - i + 2), sizeof(char));
	if (!s2)
		return (NULL);
	index_s2 = 0;
	while (index_s2 <= j - i)
	{
		s2[index_s2] = s1[i + index_s2];
		index_s2++;
	}
	return (s2);
}
