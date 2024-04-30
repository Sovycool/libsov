##
## EPITECH PROJECT, 2023
## Libmy
## File description:
## Makefile
##

SRCS =	misc/string_cleaner.c	\
		misc/json_checker.c		\
		\
		destroy/destroy_json_array.c	\
		destroy/destroy_json_object.c	\
		destroy/destroy_json_value.c	\
		\
		parser/json_parser.c		\
		parser/new_json_object.c	\
		parser/new_json_array.c		\
		parser/get_json_value.c		\
		parser/get_json_object.c	\
		parser/get_json_string.c	\
		parser/get_json_array.c		\
		\
		finder/json_finder.c		\
		finder/json_object_finder.c	\
		finder/json_array_finder.c	\
		finder/json_string_finder.c	\
		finder/json_float_finder.c	\
		finder/json_int_finder.c	\

EXTERN_SRCS =	../file_manipulation/fman_get_file.c	\
				\
				../my/string_control/my_strlen.c					\
				../my/string_control/my_is_digit.c					\
				../my/string_control/my_strcmp.c					\
				../my/string_control/my_is_char_in_str.c			\
				../my/string_control/my_are_chars_in_str.c			\
				../my/string_manipulation/my_revstr.c				\
				../my/string_manipulation/my_strdup.c				\
				../my/string_manipulation/my_strndup.c				\
				../my/string_manipulation/my_str_to_word_array.c	\
				../my/string_manipulation/my_atof.c					\
				../my/string_manipulation/my_atoi.c					\
				../my/misc/my_arrlen.c								\
				../my/freeing_functions/my_free_word_array.c		\
				../my/maths_functions/my_base_to_int.c				\
				../my/maths_functions/my_pow.c						\

OBJS =		$(SRCS:.c=.o) $(EXTERN_SRCS:.c=.o)

NAME =		libjpar.a

HEADER =	jpar.h

HEADERS =	json_headers/

all: 		$(NAME)

$(NAME):	$(OBJS)
	ar rc ../$(NAME) $(OBJS)
	make copy_h

copy_h:
	mkdir -p ../../include
	cp $(HEADER) ../../include/$(HEADER)
	cp -r $(HEADERS) ../../include/$(HEADERS)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADER)
	rm -rf ../../include/$(HEADERS)

re:	fclean all
