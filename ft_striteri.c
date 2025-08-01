/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:10:14 by buehara           #+#    #+#             */
/*   Updated: 2025/08/01 12:24:00 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	ctrl;

	ctrl = 0;
	while (s[ctrl] != '\0')
	{
		f(ctrl, &s[ctrl]);
		ctrl++;
	}
}
/*
#include <stdio.h>
void	test_func(unsigned int i, char *c) 
{
	*c += i;
}

int	main(void)
{
	char	*str1 = "0000000000";
	char	*str2 = "1111111111";

	ft_striteri(str1, test_func);
	ft_striteri(str2, test_func);

	printf("STR 1 : %s", str1);
	printf("STR 2 : %s", str2);
	return (0);
}*/
