##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## ...
##

SRCS =	object/new_json.c			\
		pair/new_json_pair.c		\
		value/new_json_value.c		\
		value/add_value_to_json.c	\
		value/get_json_value.c

OBJS =		$(SRCS:.c=.o)

NAME =		libjson.a

HEADER =	json_parser.h

HEADERS =	json_headers/

all: 		compil copy_lib copy_h

compil:		$(OBJS)
	ar rc $(NAME) $(OBJS)

copy_lib:
	cp $(NAME) ../

copy_h:
	mkdir -p ../../include
	cp $(HEADER) ../../include/$(HEADER)
	cp $(HEADERS) ../../include/$(HEADERS)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADER)
	rm -f ../../include/$(HEADERS)

re:	fclean all
