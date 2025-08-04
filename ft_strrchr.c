/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:03:27 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 19:08:33 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{	
		if (s[len] == (char)c)
			return ((char *)(&s[len]));
		len--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char  *str = "Hello World!";
   char  c = 'l';

   printf("\nOriginal Function: \t%s", strrchr(str, c + 256));
   printf("\nMy function: \t\t%s\n", ft_strrchr(str, c + 256));

   return (0);
}*/
