# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwattana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 16:06:37 by rwattana          #+#    #+#              #
#    Updated: 2022/05/13 21:08:59 by rwattana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a

IS_LIB = ft_isalnum.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalpha.c

TO_LIB = ft_toupper.c ft_tolower.c ft_atoi.c

STR_LIB = ft_strchr.c ft_strrchr.c ft_strlen.c ft_strncmp.c ft_strlcpy.c \
		  ft_strlcat.c ft_strnstr.c ft_strdup.c

MEM_LIB = ft_memset.c ft_bzero.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		  ft_memcpy.c ft_calloc.c

P2_LIB = ft_itoa.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		 ft_strmapi.c ft_striteri.c

P2FD_LIB = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BN_LIB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		 ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRCS = $(IS_LIB) $(TO_LIB) $(MEM_LIB) $(STR_LIB) $(P2_LIB) $(P2FD_LIB)
OBJS = $(SRCS:.c=.o)

BN_OBJS = $(BN_LIB:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(BN_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BN_OBJS)

clean:
	$(RM) $(OBJS) $(BN_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	@echo "------------------------------------"
	@echo " !!!!!!!!   NORMINETTE   !!!!!!!!"
	@echo ""
	@norminette -R CheckForbiddenSourceHeader ft_*.c
	@norminette -R CheckDefine *.h
	@echo ""
	@echo "------------------------------------"

clone-test:
	@echo "------------------------------------"
	@echo " !!!!!!!!   CLONE-TEST   !!!!!!!!"
	@git clone https://github.com/Tripouille/libftTester
	@git clone https://github.com/y3ll0w42/libft-war-machine
	@cd .. && git clone https://github.com/alelievr/libft-unit-test

del-test:
	@echo "------------------------------------"
	@echo " !!!!!!!!   DEL-TEST   !!!!!!!!"
	@rm -rf libftTester libft-war-machine
	@cd .. && rm -rf libft-unit-test

test-all:
	@echo "------------------------------------"
	@echo " !!!!!!!!   TEST   !!!!!!!!"
	@cd libftTester && make a && cd ..
	@cd libft-war-machine && ./grademe.sh && cd ..
	@cd .. && cd .. && cd libft-unit-test && make f
