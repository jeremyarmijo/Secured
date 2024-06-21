##
## EPITECH PROJECT, 2023
## makefile
## File description:
## pour my_printf
##

CC	=	gcc

SRC	=	src/main.c \
		src/my_putchar.c	\
		src/my_putstr.c		\
		src/my_put_nbr.c	\
		src/recursive_power.c	\
		src/my_strlen.c		\
		src/delete_hash.c		\
		src/my_strdup.c		\
		src/to_number.c		\
		src/ht_dump.c		\
		src/ht_insert.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libhashtable.a

CFLAGS	=	-Wall -Wextra -g3 -iquote include

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
