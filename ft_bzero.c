/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:23:04 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 18:53:00 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	ctrl;

	ptr = (unsigned char *)s;
	ctrl = 0;
	while (ctrl < n)
	{
		ptr[ctrl] = '\0';
		ctrl++;
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int     main(void)
{
        char    str_orig1[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
        char    str_my1[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
        char    str_my2[] = "Hello []$^&*()_+{}| World!";
        char    str_orig2[] = "Hello []$^&*()_+{}| World!";
	int	n = 5;

	ft_bzero(&str_my1[n], n);
	ft_bzero(&str_my2[n], n);
	bzero(&str_orig1[n], n);
	bzero(&str_orig2[n], n);
	
	printf("\nOriginal Function:\n\tString 01: %.30s\n\t
	String 02: %.30s", str_orig1, str_orig2);

	printf("\n\nMy function:\n\tString 01: %.30s\n\t
	String 02: %.30s\n", str_my2,  str_my1);
	
	return (0);
}*/
