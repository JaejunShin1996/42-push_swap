NAME	= libft.a

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS 	   =	libft/*.c \
				ft_printf/*.c \
				get_next_line/*.c

OBJS	= $(SRCS:.c=.o)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) *.o
	make clean

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re