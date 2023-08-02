NAME	= 	push_swap

CC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror

SRCS	= 	push_swap \
			sources/generate_stack \
			sources/operations \
			sources/operations_double \
			sources/error_int \
			sources/error_duplicate \
			sources/error_handling \
			sources/sort_three

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
