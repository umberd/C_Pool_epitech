##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

CC	=	gcc

FLAGS	=	-Werror -Wall -Wextra

SRC	=	my_cat.c \
		main.c \
		my_cat_text.c \
		my_tools.c

TEST	=	../tests/test_cat.c \
		my_cat.c \
		my_cat_text.c \
		my_tools.c

TEST_FLAG	=	--coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

INCLUDE	=	../include

LIB_FOLDER	=	../lib/my

LIB_NAME	=	my

all:
	cd $(LIB_FOLDER) && make all
	make $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(FLAGS) $(OBJ) -I$(INCLUDE) -L$(LIB_FOLDER) -l$(LIB_NAME)

clean:
	rm -f $(OBJ)
	cd $(LIB_FOLDER) && make clean
	rm -f *~
	rm -f *#

fclean:	clean
	cd $(LIB_FOLDER) && make fclean
	rm -f $(NAME)
	rm -f unit_tests
	rm -f *.gcda
	rm -f *.gcno

tests_run:	all
		$(CC) $(FLAGS) -o unit_tests $(TEST) $(TEST_FLAG) -I$(INCLUDE) -L$(LIB_FOLDER) -l$(LIB_NAME) && ./unit_tests

re:	fclean all
	cd $(LIB_FOLDER) && make re

auteur:
	echo $(USER) > auteur
