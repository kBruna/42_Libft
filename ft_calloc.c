/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:27:46 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 18:54:55 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		ft_memset(ptr, 0, 1);
		return (ptr);
	}
	if (nmemb > (size_t)(-1) / size)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	str_size = 10;
	char	*test1;
	char	*test2;

	test1 = (char *)calloc(str_size, sizeof(char));
	test2 = (char *)ft_calloc(str_size, sizeof(char));
	
	if (test1 != NULL)
		printf("Calloc Allocated!\n");
	else
		printf("Calloc Failled!\n");
	if (test2 != NULL)
		printf("FT_Calloc Allocated!\n");
	else
		printf("Calloc Failled!\n");

	free(test1);
	free(test2);
	return (0);
}*/
