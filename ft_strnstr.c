/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:50:33 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 19:07:55 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ctrl_l;
	size_t	ctrl_b;

	ctrl_b = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[ctrl_b] && ctrl_b < len)
	{
		ctrl_l = 0;
		while (little[ctrl_l] != '\0' && ctrl_l + ctrl_b < len)
		{
			if (little[ctrl_l] != big[ctrl_b + ctrl_l])
				break ;
			ctrl_l++;
			if (little[ctrl_l] == '\0')
				return ((char *)&big[ctrl_b]);
		}
		ctrl_b++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	*org = "";
	char	*find = "";
	int	n = 7;

	printf("Original function: \t%s\n", strnstr(org, find, n));
	printf("\tMy Function: \t%s\n", ft_strnstr(org, find, n));

	return (0);
}*/
