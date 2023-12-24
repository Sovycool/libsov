##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## ...
##

SRCS =		\

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
	cp $(HEADERS) ../../include/$(HEADERS)

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADER)
	rm -f ../../include/$(HEADERS)

re:	fclean all
