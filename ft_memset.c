/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:02:56 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 19:12:25 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	ctrl;
	unsigned char	*str;

	ctrl = 0;
	str = s;
	while (ctrl < n)
	{
		str[ctrl] = c;
		ctrl++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	n = 5;
	char	c = 'a';
	char	str1[] = "Test of the ft_memset function.";
	char	str2[] = "Test of the ft_memset function.";
	char	str3[] = "Test of the ft_memset function.";

	ft_memset(str2, c, n);
	memset(str3, c, n);
	
	printf("\nOriginal string:\n\t%s", str1);
	printf("\nReturn original function: \n\t%s", str2);
	printf("\nReturn my_funcion: \n\t%s\n", str3);

	return (0);
}*/
