NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_printf.c\
		ft_putchar.c\
		ft_putadr.c\
		ft_putlowhex.c\
		ft_putUPhex.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putunsigned.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -r $(NAME) $(OBJ)

clean :	
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re	   : fclean all

.PHONY : all clean fclean re