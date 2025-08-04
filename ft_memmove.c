/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:13:40 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 18:59:39 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*org;
	size_t			ctrl;

	dest = (unsigned char *)dst;
	org = (unsigned char *)src;
	if ((dest == NULL) && (org == NULL))
		return (dest);
	if (*dest < *org)
	{
		ctrl = 0;
		while (ctrl < n)
		{
			dest[ctrl] = org[ctrl];
			ctrl++;
		}
		return (dest);
	}
	n--;
	while ((int)n >= 0)
	{
			dest[n] = org[n];
			n--;
	}
	return (dest);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int     main(void)
{
        char    str_orig1[] = "ABC";
        char    str_orig2[] = "Hello []$^&*()_+{}| World!";

        char    str_cp1_dest1[100];
        char    str_cp1_dest2[100];
        char    str_cp2_dest1[100];
        char    str_cp2_dest2[100];

        memmove(str_cp1_dest1, str_orig1, sizeof(char) * 3);
        memmove(&str_orig2[0], &str_orig2[6], sizeof(char) * 5);
        ft_memmove(str_cp2_dest1, str_orig1, sizeof(char) * 3);
        ft_memmove(&str_orig2[0], &str_orig2[6], sizeof(char) * 5);

        printf("\nOriginal Function:\n\tString 01: %s\n\tString 02: 
%s\n", str_cp1_dest1, str_cp1_dest2);
        printf("\n\nMy function:\n\tString 01: %s\n\tString 02: 
%s\n\n", str_cp2_dest1, str_cp2_dest2);
        return (0);
}*/
