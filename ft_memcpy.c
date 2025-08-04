/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:42:37 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 18:58:14 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					ctrl;
	unsigned char			*copy;
	unsigned const char		*original;

	if (n == 0 || (!src && !dest))
		return (dest);
	ctrl = 0;
	copy = dest;
	original = src;
	while (ctrl < n)
	{
		copy[ctrl] = original[ctrl];
		ctrl++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
	int    str_orig1[] = {1,2,3,4,5,6,7,8,9};
	int    str_orig2[] = {10,11,12,13,14,0,15,16};

	int    str_cp1_dest1[100];
	int    str_cp1_dest2[100];
	int    str_cp2_dest1[100];
	int    str_cp2_dest2[100];

	int	size_len1 = 9;
	int	size_len2 = 8;

	memcpy(&str_cp1_dest1, &str_orig1, sizeof(int) * 3);
	memcpy(&str_cp1_dest2, &str_orig2, sizeof(int) * 4);
	ft_memcpy(&str_cp2_dest1, &str_orig1, sizeof(int) * 3);
	ft_memcpy(&str_cp2_dest2, &str_orig2, sizeof(int) * 4);

	printf("\nOriginal String:\n\tString 01:\n");    
	for (int i = 0; i < size_len1; i++)
		printf("str[%d] = %d\n", i, str_orig1[i]);
	printf("\n\tString 02:\n");    
	for (int i = 0; i < size_len2; i++)
		printf("str[%d] = %d\n", i, str_orig2[i]);
	printf("\nOriginal Function:\n\tString 01:\n");    
	for (int i = 0; i < size_len1; i++)
		printf("str[%d] = %d\n", i, str_cp1_dest1[i]);
	printf("\n\tString 02:\n");    
	for (int i = 0; i < size_len2; i++)
		printf("str[%d] = %d\n", i, str_cp1_dest2[i]);
	printf("\nMy_Function:\n\tString 01:\n");    
	for (int i = 0; i < size_len1; i++)
		printf("str[%d] = %d\n", i, str_cp2_dest1[i]);
	printf("\n\tString 02:\n");    
	for (int i = 0; i < size_len2; i++)
		printf("str[%d] = %d\n", i, str_cp2_dest2[i]);
	return (0);
}*/
