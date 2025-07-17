# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: buehara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 12:44:47 by buehara           #+#    #+#              #
#    Updated: 2025/07/17 14:21:32 by buehara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# === Variables ===

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
AR = ar
RCS = rcs
CC = gcc
C_SOURCE = $(wildcard *.c)
H_SOURCE = $(wildcard *.h)
OBJ = $(C_SOURCE:.c=.o)


# === CC Rules ===

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(RCS) $(CFLAGS) $@ $^

%.o : %.c %.h
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
