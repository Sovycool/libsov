##
## EPITECH PROJECT, 2023
## linked_list
## File description:
## Makefile
##

SRCS =	linked_list/new_list.c			\
		linked_list/add_to_list.c		\
		linked_list/remove_from_list.c	\
		linked_list/destroy_list.c		\
		linked_list/list_len.c			\
		linked_list/sort_list.c			\
		linked_list/get_list_at_index.c	\
		linked_list/list_to_array.c		\
		linked_list/array_len.c			\
		linked_list/array_n_dup.c		\

		linked_dict/new_dict.c			\
		linked_dict/set_in_dict.c		\
		linked_dict/remove_from_dict.c	\
		linked_dict/destroy_dict.c		\
		linked_dict/dict_len.c			\

OBJS =		$(SRCS:.c=.o)

NAME =		libll.a

HEADER =	ll.h

all: 		compil copy_lib copy_h

compil:		$(OBJS)
	ar rc $(NAME) $(OBJS)

copy_lib:
	cp $(NAME) ../

copy_h:
	mkdir -p ../../include
	cp $(HEADER) ../../include/$(HEADER)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADER)

re:	fclean all
