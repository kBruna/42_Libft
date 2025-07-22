/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:13:40 by buehara           #+#    #+#             */
/*   Updated: 2025/07/22 20:51:16 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

int     ft_strlen(char *str);
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*org;
	size_t	ctrl;

	dst = (unsigned char *)dest;
	org = (unsigned char *)src;
	ctrl = 0;
	if (dst == NULL && org == NULL)
		return (dst);
	if ((int *)dest < (int *)src)
	{
			dst[ctrl] = org[ctrl];
			ctrl++;
	}
	else {
		dst[n] = org[n];
		n--;
	}
	return (dst);
}

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int     ft_strlen(char *str);

int     ft_strlen(char *str)
{
        int     i;
        int     len;

        while (str[i] != '\0')
        {
                len++;
                i++;
        }
        return (len);
}

int     main(void)
{
        char    str_orig1[] = "ABC";
        char    str_orig2[] = "Hello []$^&*()_+{}| World!";

        char    str_cp1_dest1[100];
        char    str_cp1_dest2[100];
        char    str_cp2_dest1[100];
        char    str_cp2_dest2[100];

        memmove(str_cp1_dest1, str_orig1, sizeof(char *) * 3);
        memmove(str_cp1_dest2, str_orig2, sizeof(char *) * 3);
        ft_memmove(str_cp2_dest1, str_orig1, sizeof(char *) * 3);
        ft_memmove(str_cp2_dest2, str_orig2, sizeof(char *) * 3);

        printf("\nOriginal Function:\n\tString 01: %s\n\tString 02: %s\n", str_cp1_dest1, str_cp1_dest2);
        printf("\n\nMy function:\n\tString 01: %s\n\tString 02: %s\n", str_cp2_dest1, str_cp2_dest2);
        return (0);
}
