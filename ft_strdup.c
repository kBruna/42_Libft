/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:37:29 by buehara           #+#    #+#             */
/*   Updated: 2025/08/01 15:20:14 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len);
	return (str);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	*str1 = "Hello World!";
	char	*str2 = "";
	char	*str3 = "Put a long string here";

	char	*ptr_og1 = strdup(str1);
	char	*ptr_og2 = strdup(str2);
	char	*ptr_og3 = strdup(str3);
	char	*ptr_ft1 = ft_strdup(str1);
	char	*ptr_ft2 = ft_strdup(str2);
	char	*ptr_ft3 = ft_strdup(str3);

	printf("Original Function: str1 =  %s\n", ptr_og1);
	printf("Original Function: str1 address = %p\n", (void *)&str1);
	printf("Original Function: str1 copy address = %p\n\n", (void *)&ptr_og1);
	printf("Original Function: str2 =  %s\n", ptr_og2);
	printf("Original Function: str2 address =  %p\n", (void *)&str2);
	printf("Original Function: str2 copy address =  %p\n\n", (void *)&ptr_og2);
	printf("Original Function: str3 =  %s\n", ptr_og3);
	printf("My function: str1 = \t%s\n", ptr_ft1);
	printf("My function: str1 address = \t%p\n\n", (void *)ptr_ft1);
	printf("My function: str2 = \t%s\n", ptr_ft2);
	printf("My function: str2 address = \t%p\n\n", (void *)&ptr_ft2);
	printf("My function: str3 = \t%s\n", ptr_ft3);

	free(ptr_og1);
	free(ptr_og2);
	free(ptr_og3);
	free(ptr_ft1);
	free(ptr_ft2);
	free(ptr_ft3);
	return (0);
}*/
