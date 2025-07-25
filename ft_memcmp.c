/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:26:09 by buehara           #+#    #+#             */
/*   Updated: 2025/07/25 15:43:27 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					ctrl;
	unsigned const char		*str1;
	unsigned const char		*str2;

	if (n <= 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	ctrl = 0;
	while (ctrl <= n - 1)
	{
		if (str1[ctrl] != str2[ctrl])
			return ((int)str1[ctrl] - (int)str2[ctrl]);
		ctrl++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = {0, 0, 127, 0};
	char	str2[] = {0, 0, 127, 0};
	char	str3[] = {0, 0, 42, 0};
	size_t	i = 2;

	printf("Original function (array 0): \t%d\n", memcmp(str1, str2, i));
	printf("Original function: \t%d\n", memcmp(str1, str3, i));
	printf("\nMy function (array 0): \t%d\n", ft_memcmp(str1, str2, i));
	printf("My function: \t%d\n", ft_memcmp(str1, str3, i));

	return (0);
}*/
