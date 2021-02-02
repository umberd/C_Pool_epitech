##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

SRC	=	tests/test_match.c \
		tests/test_nmatch.c \
		match.c \
		nmatch.c

OBJ	=	$(SRC:.c=.o)

NAME	=	tests_run

CC	=	gcc

FLAGS	=	-Werror -Wall -Wextra

TEST_FLAG	=	--coverage -lcriterion

all:

clean:
	rm -f *~
	rm -f *#

fclean:	clean
	rm -f unit_tests
	rm -f *.gcda
	rm -f *.gcno

re:	fclean all

auteur:
	echo $(USER) > auteur

$(NAME):	all
		$(CC) $(FLAGS) -o unit_tests $(SRC) $(TEST_FLAG) && ./unit_tests
