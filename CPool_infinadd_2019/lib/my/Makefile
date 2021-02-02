##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../libmy.a

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
