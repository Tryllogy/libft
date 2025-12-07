/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:23:30 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/11 18:38:58 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*buf;
	t_list	*first;

	if (lst == NULL)
		return (NULL);
	first = lst;
	buf = lst;
	while (buf->next != NULL)
	{
		if (first == buf->next)
			return (buf);
		buf = buf->next;
	}
	return (buf);
}
