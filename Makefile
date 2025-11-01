# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 13:49:58 by eamaral-          #+#    #+#              #
#    Updated: 2025/10/30 19:42:57 by eamaral-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(patsubst %.c, %.o, $(SRCS))
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@echo "ft_*.o files has been compiled"
	@ar rcs $(NAME) $(OBJS)
	@echo "libft.a file has been created"
	
%.o : %.c
	@$(CC) $(CFLAGS) -c -I. $< -o $@

clean :
	@$(RM) $(OBJS)
	@echo "ft_*.o files has been deleted"

fclean : clean
	@$(RM) $(NAME)
	@echo "libft.a file has been deleted"

re : fclean all

.PHONY : all clean fclean re