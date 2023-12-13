##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## ...
##

SRCS =	my_putchar.c	\
		my_putstr.c		\
		my_putint.c		\
		my_putfloat.c	\
		\
		my_strlen.c	\
		my_revstr.c	\
		my_strdup.c	\
		my_strcat.c	\
		\
		my_abs.c			\
		my_pow.c			\
		my_int_to_base.c	\
		my_base_to_int.c	\

OBJS =		$(SRCS:.c=.o)

NAME =		libmy.a

HEADER =	my.h

all: 		compil copy_lib copy_h

compil:		$(OBJS)
	ar rc $(NAME) $(OBJS)

copy_lib:
	cp $(NAME) ../

copy_h:
	mkdir -p ../../include
	cp my.h ../../include/$(HEADER)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADER)

re:	fclean all
