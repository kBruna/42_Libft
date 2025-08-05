/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:29:13 by buehara           #+#    #+#             */
/*   Updated: 2025/08/05 18:29:49 by buehara          ###   ########.fr       */
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
