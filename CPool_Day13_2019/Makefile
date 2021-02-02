##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libbtree.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
