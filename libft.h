/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:33:21 by buehara           #+#    #+#             */
/*   Updated: 2025/07/19 19:05:44 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

int	ft_isprint(int c);

void	*ft_memset(void *font, int c, int num);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int len_dest);

int	ft_strlen(char *str);

int	ft_tolower(int c);

int	ft_toupper(int c);

#endif
