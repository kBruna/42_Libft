/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:59:31 by buehara           #+#    #+#             */
/*   Updated: 2025/07/28 20:42:49 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcat(ptr, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str1 = "Helloo0o0o0o0";
	char	*str2 = "-World!!!!!!!!!";
	char	*str3;

	str3 = ft_strjoin(str1, str2);
	printf("Final String: %s\n", str3);
	
	return (0);
}*/
