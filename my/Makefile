##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## ...
##

SRCS =	printing_functions/my_putchar.c		\
		printing_functions/my_putstr.c		\
		printing_functions/my_putint.c		\
		printing_functions/my_putfloat.c	\
		\
		string_control/my_strlen.c	\
		\
		string_manipulation/my_revstr.c	\
		string_manipulation/my_strdup.c	\
		string_manipulation/my_strcat.c	\
		\
		maths_functions/my_abs.c			\
		maths_functions/my_pow.c			\
		maths_functions/my_int_to_base.c	\
		maths_functions/my_base_to_int.c	\

OBJS =		$(SRCS:.c=.o)

NAME =		libmy.a

HEADER =	my.h

HEADERS =	my_headers/

all: 		compil copy_lib copy_h

compil:		$(OBJS)
	ar rc $(NAME) $(OBJS)

copy_lib:
	cp $(NAME) ../

copy_h:
	mkdir -p ../../include
	cp $(HEADER) ../../include/$(HEADER)
	cp $(HEADERS) ../../include/$(HEADERS)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADER)
	rm -f ../../include/$(HEADERS)

re:	fclean all
