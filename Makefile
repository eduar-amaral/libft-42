# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 14:43:01 by eamaral-          #+#    #+#              #
#    Updated: 2025/11/04 00:31:56 by eamaral-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========================
#        CONFIGURATION
# ========================

# Name of the output static library
NAME = libft.a

# List of source files to compile
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_atoi.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c
		
# Automatically convert .c files to .o files for object list
OBJS = $(patsubst %.c, %.o, $(SRCS))

# Compiler to use
CC = cc

# Compiler flags:
# -Wall: enable all warnings
# -Wextra: enable extra warning
# -Werror: treat warnings as error
CFLAGS = -Wall -Wextra -Werror

# Cleanup command
RM = rm -f

# ========================
#        COLOR CODES
# ========================

#ANSI color codes
GREEN = \033[0;32m # Sucess messages
YELLOW = \033[1;33m # Compilation messages
BLUE = \033[1;34m # File names
RED = \033[0;31m # Cleanup messages
RESET = \033[0m # Reset to default terminal color

# ========================
#         TARGETS
# ========================

# Default target: builds the library
all: $(NAME)

# Build the static library from object files
$(NAME): $(OBJS)
	@echo "$(GREEN)Building library:$(RESET) $(BLUE)$(NAME)$(RESET)"
	@ar rcs $(NAME) $(OBJS)

# Compile each .c file into a .o file
%.o: %.c
	@echo "$(YELLOW)Compiling:$(RESET) $(BLUE)$<$(RESET)"
	@$(CC) $(CFLAGS) -I. -c $< -o $@

# Remove all object files
clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@$(RM) $(OBJS)

# Remove objects files and the library
fclean: clean
	@echo "$(RED)Removing library:$(RESET) $(BLUE)$(NAME)$(RESET)"
	@$(RM) $(NAME)

# Rebuild everything from scratch
re: fclean all

# Declare targets that aren't actual files
.PHONY: all clean fclean re