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

EXTERN_SRCS =	../file_manipulation/fman_get_file.c	\
				\
				../my/string_control/my_strcmp.c					\
				../my/string_manipulation/my_str_to_word_array.c	\
				../my/misc/my_arrlen.c								\
				../my/freeing_functions/my_free_word_array.c		\

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
