# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 22:14:52 by daboyer           #+#    #+#              #
#    Updated: 2023/02/17 21:59:12 by daboyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS                    =               ft_isalnum.c ft_isprint.c ft_strrchr.c ft_strdup.c \
                                        ft_strlcat.c ft_strncmp.c  ft_atoi.c ft_isalpha.c ft_substr.c \
                                        ft_memcpy.c  ft_strlcpy.c ft_strchr.c ft_strnstr.c \
                                        ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcmp.c \
                                        ft_memmove.c  ft_memcpy.c ft_strlen.c ft_memchr.c \
										ft_split.c ft_strjoin.c ft_strtrim.c ft_itoa.c  \
										ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
										ft_strmapi.c  ft_striteri.c \
                                        ft_toupper.c  ft_isdigit.c ft_memset.c ft_calloc.c 

OBJS			= $(SRCS:.c=.o)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
