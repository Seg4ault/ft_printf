NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
OBJS = ft_putchar.o ft_putstr.o ft_putnbr.o ft_putnbr_unsigned.o ft_puthex.o\
       ft_putptr.o

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^

%o: %c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
