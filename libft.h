/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:33:21 by buehara           #+#    #+#             */
/*   Updated: 2025/07/24 17:41:20 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void			ft_bzero(void *s, size_t n);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memset(void *font, int c, size_t num);

void			*ft_memmove(void *dest, const void *src, size_t n);

size_t			ft_strlen(const char *str);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

size_t			ft_strlcpy(char *dest, char *src, size_t size);

int				ft_tolower(int c);

int				ft_toupper(int c);

#endif
