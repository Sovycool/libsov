##
## EPITECH PROJECT, 2023
## json_parser
## File description:
## Makefile
##

SRCS =	json/new_json.c			\
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

HEADERS =	\

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
