##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

SRC	=	do_op.c \
		do_op_operand.c \
		my_usage.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_advanced_do-op

INCLUDE	=	../include

LIB_FOLDER	=	../lib

LIB_NAME	=	my

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -Werror -Wall -Wextra $(OBJ) -I$(INCLUDE) -L$(LIB_FOLDER) -l$(LIB_NAME)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
