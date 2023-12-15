##
## EPITECH PROJECT, 2023
## LibSov
## File description:
## Makefile
##

LIBMY =	my/printing_functions/my_putchar.c		\
		my/printing_functions/my_putstr.c		\
		my/printing_functions/my_putint.c		\
		my/printing_functions/my_putfloat.c		\
		\
		my/string_control/my_is_digit.c			\
		my/string_control/my_strlen.c			\
		my/string_control/my_is_char_in_str.c	\
		my/string_control/my_are_chars_in_str.c	\
		my/string_control/my_is_str_in_str.c	\
		my/string_control/my_strcmp.c			\
		\
		my/string_manipulation/my_revstr.c	\
		my/string_manipulation/my_strdup.c	\
		my/string_manipulation/my_strndup.c	\
		my/string_manipulation/my_strcat.c	\
		my/string_manipulation/my_strncat.c	\
		my/string_manipulation/my_atoi.c	\
		my/string_manipulation/my_atof.c	\
		\
		my/maths_functions/my_abs.c			\
		my/maths_functions/my_pow.c			\
		my/maths_functions/my_int_to_base.c	\
		my/maths_functions/my_base_to_int.c	\

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

FLAGS= 		-g -Wall -Werror -Wextra

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
