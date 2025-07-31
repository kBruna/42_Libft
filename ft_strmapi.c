/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:29:13 by buehara           #+#    #+#             */
/*   Updated: 2025/07/31 20:15:47 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = malloc(len + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (len > 0)
	{
		len--;
		ptr[len] = f(len, s[len]);
	}
	return (ptr);
}
/*
#include <stdio.h>
char	test_func(unsigned int i, char c) 
{
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return c - 32;  // uppercase for even indexes
    return c;           // leave other characters unchanged
}


int	main(void)
{
	char	*str1 = "this is a lowercase string";
	char	*str2 = "THIS IS A UPPERCASE STRING!";

	printf("STR 1 : %s", ft_strmapi(str1, test_func));
	printf("STR 2 : %s", ft_strmapi(str2, test_func));
	return (0);
}*/
