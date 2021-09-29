##
## EPITECH PROJECT, 2020
## makefile exe
## File description:
## fct
##

SRC	=	sources/disp_stdarg.c \
	sources/sum_numbers.c \
	sources/sum_strings_length.c


CFLAGS	=	-W -Wextra -Wall -Werror -g

LFLAGS	=	-L./lib/ -lmy

IFLAGS	=	-I include/

NAME	=	libmy.a

CRIFLAGS = -lcriterion --coverage

NAME_TEST = units_tests

all:
	gcc -c sources/*.c
	ar rc $(NAME) *.o
	rm *.o

tests_run:
	gcc -o $(NAME_TEST) tests/*.c $(SRC) $(IFLAGS) $(LFLAGS) $(CRIFLAGS)
	./$(NAME_TEST)


clean:
	make -C lib/my clean
	rm -f *~
	rm -f *.o

fclean:
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all
	make -C lib/my re
