/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 19:00:36 by buehara           #+#    #+#             */
/*   Updated: 2025/07/25 20:54:03 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	int	signal;
	int	number;

	number = 0;
	signal = 1;
	while (*nptr == ' ')
		nptr++;
	if (*nptr++ == '-')
		signal = -1;
	else if (*nptr++ == '+')
		signal = 1;
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			number = number * 10 + *nptr - '0';
		nptr++;
		if (!(*nptr >= '0' && *nptr <= '9') || *nptr == '\0')
			return (number * signal);
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str1 = "-123$4";
	char	*str2 = "-12345";
	char	*str3 = "$$$$  009876500";

	printf("Original function: \t%d\t%d\n", atoi(str2), atoi(str3));
	printf("My function: \t\t%d\t%d\n", ft_atoi(str2), ft_atoi(str3));
	return (0);
}*/
