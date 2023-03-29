NAMEC = client
NAMES = server

SRCC = client.c
SRCS = server.c
LIBFT = libft/libft.a
PRINTF = printf/libftprintf.a
OBJC = $(SRCC:.c=.o)
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAMEC) $(NAMES)

$(NAMEC): $(OBJC)
	@make -C libft
	@make -C printf
	$(CC) $(CFLAGS) $(OBJC) $(LIBFT) $(PRINTF) -o $(NAMEC)

$(NAMES): $(OBJS)
	@make -C libft
	@make -C printf
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAMES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C libft clean
	@make -C printf clean
	rm -f $(OBJS) $(OBJC)

fclean: clean
	@make -C libft fclean
	@make -C printf fclean
	rm -f $(NAMEC) $(NAMES)

re: fclean all

.PHONY: all clean fclean re
