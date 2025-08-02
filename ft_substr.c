/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:13:22 by buehara           #+#    #+#             */
/*   Updated: 2025/08/01 16:12:08 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (ft_strlen(s) < start)
		ptr = malloc(1);
	else if (ft_strlen(&s[start]) >= len)
		ptr = malloc(len + 1);
	else
		ptr = malloc((int)(ft_strlen(&s[start]) + 1));
	if (ptr == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		*ptr = '\0';
	else if (ft_strlen(&s[start]) >= len)
		ft_strlcpy(ptr, &s[start], len + 1);
	else
		ft_strlcpy(ptr, &s[start], (ft_strlen(s) + 1));
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str1 = "This is a test string!";
	char	*str2 = "Hello World!";
	char	*ret1;
	char 	*ret2;
	char	*ret3;
	char	*ret4;
	char	*ret5;
	char	*ret6;
	char	*ret7;

	ret1 = ft_substr(str1, 10, 12);
	ret2 = ft_substr(str2, 0, 12);
	ret3 = ft_substr(str1, -1, 5);
	ret4 = ft_substr(str2, 0, 0);
	ret5 = ft_substr("", 0, 5);
	ret6 = ft_substr(str1, 24, 1);
	ret7 = ft_substr(str1, 0, -1);

	printf("ft_substr: ");
	printf("1 %s |", (ret1[0] == '\0') ? "KO" : ret1);
	printf("2 %s |", (ret2[0] == '\0') ? "KO" : ret2);
	printf("3 %s |", (ret3 == NULL) ? "OK" : ret3);
	printf("4 %s |", (ret4 == NULL) ? "OK" : ret4);
	printf("5 %s |", (ret5 == NULL) ? "OK" : ret5);
	printf("6 %s |", (ret6 == NULL) ? "OK" : ret6);
	printf("7 %s", (ret7 == NULL) ? "OK" : ret7);
	printf("\n");

	free(ret1);
	free(ret2);
	free(ret3);
	free(ret4);
	free(ret5);
	free(ret6);
	free(ret7);
	return (0);
}*/
