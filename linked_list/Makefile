##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## ...
##

SRCS =	new_list.c			\
		add_to_list.c		\
		remove_from_list.c	\
		list_len.c			\
		sort_list.c			\
		list_to_array.c		\
		array_len.c			\
		array_n_dup.c

OBJS =		$(SRCS:.c=.o)

NAME =		libll.a

HEADER =	linked_list.h

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
