NAME	= ft_display_file
CC		= gcc
O_DIR	= *.o
CFLAGS	= -Wall -Wextra -Werror -c
FILES	= *.c
RM		= rm -f

all: $(NAME)

$(NAME):
	 	$(CC) $(CFLAGS) $(FILES)
		ar rc ft_display_file $(O_DIR)
clean:
	$(RM) $(O_DIR)

fclean: 	clean
	$(RM) $(NAME)
re:			fclean all
