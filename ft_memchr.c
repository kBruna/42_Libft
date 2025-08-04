/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:10:30 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 18:57:30 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					ctrl;
	unsigned const char		*src;
	unsigned char			l;

	ctrl = 0;
	src = s;
	l = c;
	while (n--)
	{
		if (src[ctrl] == l)
			return ((void *) &src[ctrl]);
		ctrl++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str = "Searching for something in this string!";
	size_t	size = 10;
	char	c = 'g';

	printf("Original Function: \t%s", (char *)memchr(str, c, size));
	printf("\n\tMy function: \t%s", (char *)ft_memchr(str, c, size));

	return (0);
}*/
