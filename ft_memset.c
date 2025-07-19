/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:02:56 by buehara           #+#    #+#             */
/*   Updated: 2025/07/19 19:03:29 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *font, int c, int num);

void *ft_memset(void *font, int c, int num)
{
	int	ctrl;

	ctrl = 0;
	while (ctrl < num)
	{
		((char*)font)[ctrl] = c;
		ctrl++;
	}
	return (font);
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
	printf("\nReturn my_funcion: \n\t%s", str3);

	return (0);
}*/
