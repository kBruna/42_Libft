# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: buehara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 12:44:47 by buehara           #+#    #+#              #
#    Updated: 2025/07/24 13:49:48 by buehara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# === Variables ===

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
AR = ar
RCS = rcs
CC = gcc
C_SOURCE = 	ft_bzero.c		\
				ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_memcpy.c		\
				ft_memset.c		\
				ft_memmove.c	\
				ft_strlen.c		\
				ft_strlcat.c	\
				ft_strlcpy.c	\
				ft_tolower.c	\
				ft_toupper.c	

OBJ = $(C_SOURCE:.c=.o)


# === CC Rules ===

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(RCS) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


# === Bonus Rules ===

BONUS = _bonus.{c/h}


# === Clean Rules ===

clean:
	rm -f $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all


# === PHONY ===

.PHONY: all clean fclean re
