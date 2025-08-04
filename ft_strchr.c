/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:59:30 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 19:01:54 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *) s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *) s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "Hello World!";
	char	c = 'l';

	printf("\nOriginal Function: \t%s", strchr(str, c + 256));
	printf("\nMy function: \t\t%s\n", ft_strchr(str, c + 256));

	return (0);
}*/
