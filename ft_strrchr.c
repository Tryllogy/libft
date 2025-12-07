/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:39:39 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/12 14:52:58 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_found;

	i = 0;
	last_found = -1;
	while ((char)s[i])
	{
		if ((char)s[i] == (char)c)
			last_found = i;
		i++;
	}
	if (last_found != -1)
		return (((char *)&s[last_found]));
	while ((char)s[i] == '\0' && (char)c == '\0')
		i++;
	if ((char)s[i - 1] == '\0' && (char)c == '\0')
		return ((char *)&s[i - 1]);
	return (NULL);
}
