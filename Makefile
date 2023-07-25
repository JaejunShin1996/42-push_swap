NAME	= push_swap

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= push_swap generate_stack utilies

CFILES	= $(SRCS:%=%.c)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES) -L./Libft -lft -I . -o $(NAME)
	
all: $(NAME)

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re