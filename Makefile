##
## EPITECH PROJECT, 2023
## LibSov
## File description:
## Makefile
##

LIBMY =	my/my_putchar.c		\
		my/my_putstr.c		\
		my/my_putint.c		\
		my/my_putfloat.c	\
		\
		my/my_strlen.c	\
		my/my_revstr.c	\
		my/my_strdup.c	\
		my/my_strcat.c	\
		\
		my/my_abs.c			\
		my/my_pow.c			\
		my/my_int_to_base.c	\
		my/my_base_to_int.c	\

JSON =	json_parser/object/new_json.c			\
		json_parser/pair/new_json_pair.c		\
		json_parser/value/new_json_value.c		\
		json_parser/value/add_value_to_json.c	\
		json_parser/value/get_json_value.c		\

LL =	linked_list/new_list.c			\
		linked_list/add_to_list.c		\
		linked_list/remove_from_list.c	\
		linked_list/list_len.c			\
		linked_list/sort_list.c			\
		linked_list/list_to_array.c		\
		linked_list/array_len.c			\
		linked_list/array_n_dup.c		\

SRCS =	libmain.c	\
		$(LIBMY)	\
		$(LL)		\
		#$(JSON)		\

OBJS =		$(SRCS:.c=.o)

NAME = 		libtest

FLAGS= 		-Wall -Werror -Wextra

LIBS =		\

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) -o $(NAME) $(OBJS) -L. $(LIBS)

makelibs:
	make -C my/
	make -C linked_list/
	make -C json_parser/

fcleanlibs:
	make fclean -C my/
	make fclean -C linked_list/
	make fclean -C json_parser/

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all
