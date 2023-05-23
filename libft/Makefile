# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 19:48:03 by gabrielp          #+#    #+#              #
#    Updated: 2023/04/22 00:38:07 by gabrielp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_split.c \
		ft_substr.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_striteri.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
		ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c
		
		
OBJS = $(SRCS:.c=.o)

CC = @cc
RM = @rm -f
CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled 🙌"
MSG2 = @echo "Cleaned 🚀"

ARCHIVE = @ar -rc

RANLIB = @ranlib

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJECTS = $(BONUS:.c=.o)

$(NAME): $(OBJS)
				$(ARCHIVE) $(NAME) $(OBJS)
				$(RANLIB) $(NAME)
				$(MSG1)

bonus: $(BONUS_OBJECTS)
					$(ARCHIVE) $(NAME) $(BONUS_OBJECTS)
					$(RANLIB) $(NAME)
					$(MSG1)
		
all: $(NAME) bonus

clean:
		$(RM) $(OBJS) $(BONUS_OBJECTS)
		$(MSG2)

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re