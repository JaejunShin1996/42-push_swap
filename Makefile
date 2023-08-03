NAME	= 	push_swap

CC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror

SRCS	= 	push_swap \
			sources/stack_generate \
			sources/stack_utils \
			sources/operations \
			sources/operations_double \
			sources/error_int \
			sources/error_duplicate \
			sources/error_handling \
			sources/sort_three \
			sources/sort_five \
			sources/sort 

CFILES	= $(SRCS:%=%.c)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES) -L./includes -lft -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all, clean, fclean, re
