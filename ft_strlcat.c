/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:01:23 by buehara           #+#    #+#             */
/*   Updated: 2025/07/24 17:43:49 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ctrl;
	size_t	ctrl_src;
	size_t	index;
	size_t	index_src;

	ctrl = 0;
	ctrl_src = 0;
	index_src = ft_strlen(src);
	index = ft_strlen(dst);
	if (size > 0)
	{
		ctrl = index;
		if (ctrl + 1 > size)
			return (index_src + size);
		size -= (ctrl + 1);
		while (src[ctrl_src] != '\0' && size)
		{
			dst[ctrl++] = src[ctrl_src++];
			size--;
		}
		dst[ctrl] = '\0';
		return (index + index_src);
	}
	return (index_src);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	*org = "This-is-the-original string.";
	char	dest1[50] = "Hello World!";
	char	dest2[50] = "Hello World!";

	int	int_org = strlcat(dest1, org, 40);
	int	int_myft = ft_strlcat(dest2, org, 40);

	printf("\nOriginal str: %s\n", org);
	printf("\nStrlcat: %s\n\tReturn: %d\n", dest1, int_org);
	printf("\nft_strlcat: %s\n\tReturn: %d\n", dest2, int_myft);

	return (0);
}*/
