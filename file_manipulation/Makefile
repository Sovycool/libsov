##
## EPITECH PROJECT, 2023
## json_parser
## File description:
## Makefile
##

SRCS =		fman_get_file.c		\
			fman_display_file.c	\
			fman_dup_file.c		\

OBJS =		$(SRCS:.c=.o)

NAME =		libfman.a

HEADER =	fman.h

HEADERS =	\

all: 		$(NAME)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	make copy_lib
	make copy_h

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
