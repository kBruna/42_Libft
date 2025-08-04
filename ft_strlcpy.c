/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:51:13 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 19:06:10 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	int		ctrl;

	count = 0;
	ctrl = 0;
	while (src[ctrl] != '\0')
	{
		ctrl++;
	}
	if (size > 0)
	{
		while ((src[count] != '\0') && (count < size - sizeof(char)))
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (ctrl);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

int	main(void)
{
	char	str_orig1[] = "ABC";
	char	str_orig2[] = "Hello []$^&*()_+{}| World!";

	char	str_cp1_dest1[100];
	char	str_cp1_dest2[100];
	char	str_cp2_dest1[100];
	char	str_cp2_dest2[100];

	unsigned int	orig_1 = strlcpy(str_cp1_dest1, str_orig1, 2);
	unsigned int	orig_2 = strlcpy(str_cp1_dest2, str_orig2, 10);
	unsigned int	myfunc_1 = ft_strlcpy(str_cp2_dest1, str_orig1, 2);
	unsigned int	myfunc_2 = ft_strlcpy(str_cp2_dest2, str_orig2, 10);

	printf("\nOriginal Function:\n\tString 01: %s\t\tReturn : %d 
\n\tString 02: %s\t\tReturn : %d", str_cp1_dest1, orig_1, str_cp1_dest2, orig_2);
	printf("\n\nMy function:\n\tString 01: %s \t\tReturn : %d\n\tString 02: 
%s\t\tReturn : %d\n", str_cp2_dest1, myfunc_1, str_cp2_dest2, myfunc_2);
	return (0);
}*/
