NAME	= 	push_swap

CC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror

SRCS	= 	sources/*.c \
			libft/libft.a

$(NAME):
	make all -C libft
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	make clean -C libft
	@rm -f $(NAME)

fclean: clean
	make fclean -C libft

re: fclean all

.PHONY: all, clean, fclean, re
