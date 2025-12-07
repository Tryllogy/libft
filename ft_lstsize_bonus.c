/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:08:25 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/11 18:39:44 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*first;
	t_list	*buf;

	first = lst;
	if (lst == NULL)
		return (0);
	count = 1;
	buf = lst;
	while (buf->next != NULL)
	{
		if (buf->next == first)
			return (count);
		buf = buf->next;
		count++;
	}
	return (count);
}
