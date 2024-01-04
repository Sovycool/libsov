##
## EPITECH PROJECT, 2023
## LibSov
## File description:
## Makefile
##

LIBMY =	my/printing_functions/my_putchar.c			\
		my/printing_functions/my_putstr.c			\
		my/printing_functions/my_putint.c			\
		my/printing_functions/my_printint.c			\
		my/printing_functions/my_putfloat.c			\
		my/printing_functions/my_printfloat.c		\
		my/printing_functions/my_printf.c			\
		my/printing_functions/my_show_word_array.c	\
		\
		my/string_control/my_is_digit.c			\
		my/string_control/my_strlen.c			\
		my/string_control/my_is_char_in_str.c	\
		my/string_control/my_are_chars_in_str.c	\
		my/string_control/my_is_str_in_str.c	\
		my/string_control/my_strcmp.c			\
		my/string_control/my_strncmp.c			\
		\
		my/string_manipulation/my_revstr.c					\
		my/string_manipulation/my_strdup.c					\
		my/string_manipulation/my_strndup.c					\
		my/string_manipulation/my_strcat.c					\
		my/string_manipulation/my_strncat.c					\
		my/string_manipulation/my_atoi.c					\
		my/string_manipulation/my_atof.c					\
		my/string_manipulation/my_str_to_word_array.c		\
		my/string_manipulation/my_word_array_to_str.c		\
		my/string_manipulation/my_convert_special_char.c	\
		\
		my/maths_functions/my_abs.c			\
		my/maths_functions/my_pow.c			\
		my/maths_functions/my_int_to_base.c	\
		my/maths_functions/my_base_to_int.c	\
		\
		my/freeing_functions/my_free_word_array.c	\

JSON =	json_parser/json/new_json.c			\
		json_parser/json/destroy_json.c		\
		json_parser/json/display_json.c		\
		json_parser/json/add_to_json.c		\
		json_parser/json/get_json_value.c	\
		json_parser/json/extract_json.c		\
		\
		json_parser/object/new_json_object.c		\
		json_parser/object/destroy_json_object.c	\
		json_parser/object/display_json_object.c	\
		json_parser/object/extract_json_object.c	\
		\
		json_parser/pair/new_json_pair.c		\
		json_parser/pair/destroy_json_pair.c	\
		json_parser/pair/display_json_pair.c	\
		json_parser/pair/display_json_pairs.c	\
		\
		json_parser/value/new_json_value.c		\
		json_parser/value/destroy_json_value.c	\
		json_parser/value/display_json_value.c	\
		json_parser/value/extract_json_value.c	\
		\
		json_parser/array/destroy_json_array.c	\
		json_parser/array/display_json_array.c	\
		json_parser/array/extract_json_array.c	\

LL =	linked_list/linked_list/new_list.c			\
		linked_list/linked_list/add_to_list.c		\
		linked_list/linked_list/remove_from_list.c	\
		linked_list/linked_list/destroy_list.c		\
		linked_list/linked_list/list_len.c			\
		linked_list/linked_list/sort_list.c			\
		linked_list/linked_list/get_list_at_index.c	\
		linked_list/linked_list/list_to_array.c		\
		linked_list/linked_list/array_len.c			\
		linked_list/linked_list/array_n_dup.c		\
		\
		linked_list/linked_dict/new_dict.c			\
		linked_list/linked_dict/set_in_dict.c		\
		linked_list/linked_dict/remove_from_dict.c	\
		linked_list/linked_dict/destroy_dict.c		\
		linked_list/linked_dict/dict_len.c			\

FMAN =	file_manipulation/fman_get_file.c		\
		file_manipulation/fman_display_file.c	\

SRCS =	libmain.c	\
		$(LIBMY)	\
		$(LL)		\
		$(JSON)		\
		$(FMAN)		\

OBJS =		$(SRCS:.c=.o)

NAME = 		libtest

export CFLAGS= 	-g -Wall -Wextra

LIBS =		\

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) -o $(NAME) $(OBJS) -L. $(LIBS)

makelibs:
	make -C my/
	make -C linked_list/
	make -C json_parser/
	make -C file_manipulation/

fcleanlibs:
	make fclean -C my/
	make fclean -C linked_list/
	make fclean -C json_parser/
	make fclean -C file_manipulation/

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

valgrind:	re
	valgrind -s --leak-check=full --track-origins=yes ./libtest

style:	fclean
	coding-style . .
	cat coding-style-reports.log
