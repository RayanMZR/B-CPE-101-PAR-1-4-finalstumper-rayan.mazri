##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME	=	rush3

SRC	=	lib/my/my_putchar.c \
		lib/my/my_putstr.c \
		lib/my/my_put_nbr.c \
		lib/my/my_strcmp.c \
		src/rush3.c \
		src/rush_one.c \
		src/rush_two.c \
		src/rush_three.c \
		src/rush_four.c \
		src/rush_five.c \
		src/loop_short_size.c \
		src/main.c

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME) :	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	: 	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY  :       all clean fclean re
