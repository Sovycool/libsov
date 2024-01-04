##
## EPITECH PROJECT, 2023
## json_parser
## File description:
## Makefile
##

MY_SRCS = 	../my/printing_functions/my_putchar.c			\
			../my/printing_functions/my_putstr.c			\
			../my/printing_functions/my_putint.c			\
			../my/printing_functions/my_printint.c			\
			../my/printing_functions/my_putfloat.c			\
			../my/printing_functions/my_printfloat.c		\
			../my/printing_functions/my_printf.c			\
			../my/printing_functions/my_show_word_array.c	\
			\
			../my/string_control/my_is_digit.c			\
			../my/string_control/my_strlen.c			\
			../my/string_control/my_is_char_in_str.c	\
			../my/string_control/my_are_chars_in_str.c	\
			../my/string_control/my_is_str_in_str.c		\
			../my/string_control/my_strcmp.c			\
			../my/string_control/my_strncmp.c			\
			\
			../my/string_manipulation/my_revstr.c				\
			../my/string_manipulation/my_strdup.c				\
			../my/string_manipulation/my_strndup.c				\
			../my/string_manipulation/my_strcat.c				\
			../my/string_manipulation/my_strncat.c				\
			../my/string_manipulation/my_atoi.c					\
			../my/string_manipulation/my_atof.c					\
			../my/string_manipulation/my_str_to_word_array.c	\
			../my/string_manipulation/my_word_array_to_str.c	\
			../my/string_manipulation/my_convert_special_char.c	\
			\
			../my/maths_functions/my_abs.c			\
			../my/maths_functions/my_pow.c			\
			../my/maths_functions/my_int_to_base.c	\
			../my/maths_functions/my_base_to_int.c	\
			\
			../my/freeing_functions/my_free_word_array.c	\

LL_SRCS = 	../linked_list/linked_list/new_list.c			\
			../linked_list/linked_list/add_to_list.c		\
			../linked_list/linked_list/remove_from_list.c	\
			../linked_list/linked_list/destroy_list.c		\
			../linked_list/linked_list/list_len.c			\
			../linked_list/linked_list/sort_list.c			\
			../linked_list/linked_list/get_list_at_index.c	\
			../linked_list/linked_list/list_to_array.c		\
			../linked_list/linked_list/array_len.c			\
			../linked_list/linked_list/array_n_dup.c		\
			\
			../linked_list/linked_dict/new_dict.c			\
			../linked_list/linked_dict/set_in_dict.c		\
			../linked_list/linked_dict/remove_from_dict.c	\
			../linked_list/linked_dict/destroy_dict.c		\
			../linked_list/linked_dict/dict_len.linked_listc			\
			../linked_list/linked_dict/get_in_dict.c		\

SRCS =	$(MY_SRCS)	\
		$(LL_SRCS)	\
		\
		json/new_json.c			\
		json/destroy_json.c		\
		json/display_json.c		\
		json/add_to_json.c		\
		json/get_json_value.c	\
		json/extract_json.c		\
		\
		object/new_json_object.c		\
		object/destroy_json_object.c	\
		object/display_json_object.c	\
		object/extract_json_object.c	\
		\
		pair/new_json_pair.c		\
		pair/destroy_json_pair.c	\
		pair/display_json_pair.c	\
		pair/display_json_pairs.c	\
		\
		value/new_json_value.c		\
		value/destroy_json_value.c	\
		value/display_json_value.c	\
		value/extract_json_value.c	\
		\
		array/destroy_json_array.c	\
		array/display_json_array.c	\
		array/extract_json_array.c	\

OBJS =		$(SRCS:.c=.o)

NAME =		libjpar.a

HEADER =	jpar.h

HEADERS =	json_headers/

all: 		compil copy_lib copy_h

compil:		$(OBJS)
	ar rc $(NAME) $(OBJS)

copy_lib:
	cp $(NAME) ../

copy_h:
	mkdir -p ../../include
	cp $(HEADER) ../../include/$(HEADER)
	cp -r $(HEADERS) ../../include/$(HEADERS)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADER)
	rm -rf ../../include/$(HEADERS)

re:	fclean all
