FILES = ft_hexal.c ft_hexau.c ft_pointer.c ft_printf.c \
		ft_putchar.c ft_putnbr.c ft_putstr.c ft_unsigned.c

OBJS	= $(FILES:.c=.o)

CC		= cc

CFLAGS	= -Wall -Werror -Wextra

NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
