NAME	= libft.a
CC		= gcc
O_DIR	= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER  = includes/
CFLAGS	= -Wall -Wextra -Werror -c
FILES	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
RM		= rm -f

all: $(NAME)

$(NAME):
	 	$(CC) $(CFLAGS) $(FILES) 
		ar rc libft.a $(O_DIR)
clean:
	$(RM) $(OBJS) $(O_DIR)

fclean: 	clean
	$(RM) $(NAME)
re:			fclean all
