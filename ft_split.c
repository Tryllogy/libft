/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:27:08 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/13 17:15:30 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[0] == c && s[0] != '\0')
		s++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] == c)
		{
			i++;
			continue ;
		}
		if (s[i] == c)
			count++;
		i++;
	}
	if (s[i - 1] == c)
		count--;
	return (count + 1);
}

void	*ft_free_split(char **split, int words)
{
	int	i;

	i = 0;
	while (i < words + 1)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	*ft_make_substr(char *s, char c, char **split, int words)
{
	char	*str;
	int		index_str;
	int		size_str;

	index_str = 0;
	size_str = 0;
	while (s[size_str] != c && s[size_str] != '\0')
		size_str++;
	str = ft_calloc((size_str + 1), sizeof(char));
	if (!str)
		return (ft_free_split(split, words));
	while (s[0] != '\0' && index_str < size_str)
	{
		str[index_str] = s[0];
		index_str++;
		s++;
	}
	index_str = 0;
	while (split[index_str])
		index_str++;
	split[index_str] = str;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		index_strs;
	char	**to_return;

	if (!s)
		return (NULL);
	words = ft_count_words((char *)s, c);
	index_strs = 0;
	if (ft_strlen(s) == 0)
		return (ft_calloc(1, sizeof(char *)));
	to_return = ft_calloc(words + 1, sizeof(char *));
	if (!to_return)
		return (NULL);
	while (index_strs < words && s[0] != '\0')
	{
		while (s[0] == c && s[0] != '\0')
			s++;
		if (!ft_make_substr((char *)s, c, to_return, words))
			return (NULL);
		while (s[0] != c && s[0] != '\0')
			s++;
		index_strs++;
	}
	to_return[index_strs] = NULL;
	return (to_return);
}
