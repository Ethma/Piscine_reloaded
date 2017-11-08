NAME	= ft_display_file
CC		= gcc
O_DIR	= *.o
CFLAGS	= -Wall -Wextra -Werror -c
FILES	= *.c
RM		= rm -f

all: $(NAME) clean

$(NAME):
	 	$(CC) $(CFLAGS) $(FILES)
		ar rc libft.a $(O_DIR)
		gcc -o ft_display_file libft.a
clean:
	$(RM) $(O_DIR)
	$(RM) libft.a

fclean: 	clean
	$(RM) $(NAME)
re:			fclean all
