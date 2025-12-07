/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchemin <tchemin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:13:34 by tchemin           #+#    #+#             */
/*   Updated: 2025/11/10 14:53:53 by tchemin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_length_of_int(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	if (n > 0)
		n *= -1;
	while (n < -9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_get_buf(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		length;
	int		i;
	int		is_neg;

	is_neg = 0;
	i = 0;
	length = ft_length_of_int(n);
	s = ft_calloc(length + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
		is_neg = 1;
	while (i < length)
	{
		s[length - 1 - i++] = ft_get_buf((n % 10)) + 48;
		n = n / 10;
	}
	if (is_neg)
		s[0] = '-';
	s[length] = '\0';
	return (s);
}
