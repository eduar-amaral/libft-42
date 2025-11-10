# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 14:43:01 by eamaral-          #+#    #+#              #
#    Updated: 2025/11/10 19:46:14 by eamaral-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========================
#     🐐Goated start
# ========================


# The name of the legendary static library we're crafting.
NAME = libft.a

# Bonus mode toggle, starts off chill. Gets spicy when summoned.
BONUS = 

# The chosen ones, source files destined for greatness.
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_atoi.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# The bonus squad, only called when the prophecy demands it.
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

# Object transformation, turns .c into .o like alchemy.
OBJS = $(patsubst %.c, %.o, $(SRCS))
OBJS_BONUS = $(patsubst %.c, %.o, $(SRCS_BONUS))

# The compiler of destiny.
CC = cc

# Compiler flags, no warnings shall pass.
# -Wall: enable all warnings
# -Wextra: enable extra warning
# -Werror: treat warnings as error
CFLAGS = -Wall -Wextra -Werror

# Cleanup spell.
RM = rm -f

# ========================
#      🎨COLOR CODES
# ========================

# ANSI magic to make the terminal pop.
GREEN = \033[5;4;32m # Success vibes
YELLOW = \033[1;33m # Compilation hype
CYAN = \033[1;36m # File names
CRAZY_YELLOW = \033[5;3;7;33m # Cleanup rage
MAGENTA = \033[5;4;35m # Goat neon LIB
RESET = \033[0m # Back to default. Boring but necessary.

# ========================
#        🛠TARGETS
# ========================

# Default target, builds the library like a boss.
all: $(NAME)

# The main build rule.
# checks if BONUS=1.
# If yes, it throws in the bonus .o files like parmesan on pasta.
# If not, we keep it clean and classy.
$(NAME): $(OBJS) $(if $(BONUS),$(OBJS_BONUS))
	@echo "                🚀 $(GREEN)Compiling complete!$(RESET) 🚀"
ifeq ($(BONUS),1)
	@echo "              🔨  $(GREEN)Building library with bonus$(RESET) 🔨"
	@echo "                  ✨🔮✨ $(CYAN)$(NAME)$(RESET) ✨🔮✨" 
	@ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
else
	@echo "                🔨  $(GREEN)Building library$(RESET) 🔨 "
	@echo "                  ✨🔮✨ $(CYAN)$(NAME)$(RESET) ✨🔮✨"
	@ar rcs $(NAME) $(OBJS)
endif
	@echo "$(MAGENTA)"
	@echo "██╗     ██╗██████╗     ██████╗  ██████╗  █████╗ ████████╗"
	@echo "██║     ██║██╔══██╗   ██╔════╝ ██╔═══██╗██╔══██╗╚══██╔══╝"
	@echo "██║     ██║██████╔╝   ██║  ███╗██║   ██║███████║   ██║   "
	@echo "██║     ██║██╔══██╗   ██║   ██║██║   ██║██╔══██║   ██║   "
	@echo "███████╗██║██████╔╝   ╚██████╔╝╚██████╔ ██║  ██║   ██║   "
	@echo "╚══════╝╚═╝╚═════╝     ╚═════╝  ╚═════╝ ╚═╝  ╚═╝   ╚═╝   "
	@echo "$(RESET)"
	@echo "\a"

# Compilation ritual, transforms each .c into a .o
%.o: %.c
	@echo "             ⚙️$(YELLOW)Compiling:$(RESET) $(CYAN)$<$(RESET)"
	@$(CC) $(CFLAGS) -I. -c $< -o $@

# ========================
#     🧙‍♂️ BONUS MODE
# ========================

# Build the static library from object files with bonus included
# BONUS=1 gets passed like a secret handshake.
# Then the Makefile knows: "Ah, time to bring out the spicy list."
# Also: we silence those annoying "Entering directory..." messages.
bonus:
	@$(MAKE) --no-print-directory BONUS=1 all

# Cleanup ritual, wipes out all object files
clean:
	@echo "$(CRAZY_YELLOW)                                                        "
	@echo "            ╔══════════════════════════════╗             "
	@echo "            ║                              ║             "
	@echo "            ║       OBJECTS FILES          ║             "
	@echo "            ║    HAS BEEN DESTROYED        ║             "
	@echo "            ║                              ║             "
	@echo "            ╚══════════════════════════════╝             "
	@echo "$(RESET)"
	@$(RM) $(OBJS) $(OBJS_BONUS)

# Full cleanse that removes everything, even the sacred library.
fclean: clean
	@echo "$(CRAZY_YELLOW)                                                        "
	@echo "            ╔══════════════════════════════╗             "
	@echo "            ║                              ║             "
	@echo "            ║         THE LIBRARY          ║             "
	@echo "            ║    HAS BEEN DESTROYED        ║             "
	@echo "            ║                              ║             "
	@echo "            ╚══════════════════════════════╝             "
	@echo "$(RESET)"
	@$(RM) $(NAME)

# Resurrection spell, nukes and rebuilds from scratch.
re: fclean all

# Declare targets that aren't actual files
.PHONY: all clean fclean re bonus