/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:39:30 by buehara           #+#    #+#             */
/*   Updated: 2025/07/24 21:05:11 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ctrl;

	ctrl = 0;
	if (n > 0)
	{
		while ((s1[ctrl] != '\0' || s2[ctrl] != '\0') && n--)
		{
			if (s1[ctrl] != s2[ctrl])
				return (s1[ctrl] - s2[ctrl]);
			ctrl++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str1 = "Hello World!";
	char	*str2 = "Hello Wor1ld!";
	int	index = 50;

	printf("Original Function: \t%d\n", strncmp(str1, str2, index));
	printf("\n\tMy Function: \t%d\n", ft_strncmp(str1, str2, index));

	return (0);
}*/
