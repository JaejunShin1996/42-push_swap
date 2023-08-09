NAME	= 	push_swap

CC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror

SRCS	= 	sources/push_swap \
			sources/stack_generate \
			sources/stack_utils \
			sources/input_handling \
			sources/operations \
			sources/operations_double \
			sources/error_int \
			sources/error_duplicate \
			sources/error_handling \
			sources/free_stack \
			sources/sort_utils \
			sources/sort_three \
			sources/sort_ten \
			sources/sort_over_ten \
			sources/sort_over_ten2 \
			sources/sort

CFILES	= $(SRCS:%=%.c)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES) -L./includes -lft -o $(NAME)

# $(NAME):
# 	$(CC) $(CFLAGS) $(CFILES) -L./includes -lft_m2 -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all, clean, fclean, re
