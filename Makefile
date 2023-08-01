NAME	= push_swap

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= push_swap \
			sources/generate_stack \
			sources/operations \
			sources/double_operations \
			sources/error_int \
			sources/error_handling

CFILES	= $(SRCS:%=%.c)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES) -L./includes -lft -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
