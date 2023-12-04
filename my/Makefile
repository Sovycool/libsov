##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## ...
##

SRCS =	my_compute_factorial_it.c	\
		my_compute_factorial_rec.c	\
		my_compute_power_it.c		\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_evil_str.c				\
		my_find_prime_sup.c			\
		my_getnbr_base.c			\
		my_getnbr.c					\
		my_isneg.c					\
		my_is_prime.c				\
		my_print_alpha.c			\
		my_print_comb.c				\
		my_print_comb2.c			\
		my_print_combn.c			\
		my_print_digits.c			\
		my_print_revalpha.c			\
		my_putchar.c				\
		my_putnbr_base.c			\
		my_putnbr.c					\
		my_putstr.c					\
		my_revstr.c					\
		my_showmem.c				\
		my_showstr.c				\
		my_show_word_array.c		\
		my_sort_int_array.c			\
		my_strcapitalize.c			\
		my_strcat.c					\
		my_strncat.c				\
		my_strcat_alloc.c			\
		my_strcmp.c					\
		my_strncmp.c				\
		my_strcpy.c					\
		my_strncpy.c				\
		my_strdup.c					\
		my_strndup.c				\
		my_is_char_in_str.c			\
		my_str_isalpha.c			\
		my_str_islower.c			\
		my_str_isupper.c			\
		my_str_isnum.c				\
		my_isnum.c					\
		my_str_isprintable.c		\
		my_strlen.c					\
		my_strlowcase.c				\
		my_strstr.c					\
		my_str_to_word_array.c		\
		my_strupcase.c				\
		my_swap.c					\
		my_check_int_overflow.c		\
		flags/print_flag.c			\
		flags/my_flag_putchar.c		\
		flags/my_hexa.c				\
		flags/my_none.c				\
		flags/my_octal.c			\
		flags/my_pointer.c			\
		flags/my_putfloat.c			\
		flags/my_flag_putnbr.c		\
		flags/my_flag_putstr.c		\
		flags/my_sci_nota.c			\
		flags/my_short.c			\
		flags/my_u_int.c			\
		flags/my_percent.c			\
		my_printf.c

OBJS =		$(SRCS:.c=.o)

all: 		compil copy_lib copy_h

compil:		$(OBJS)
	ar rc libmy.a $(OBJS)

copy_lib:
	cp libmy.a ../

copy_h:
	mkdir -p ../../include
	cp my.h ../../include/my.h

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f libmy.a
	rm -f ../libmy.a
	rm -f ../../include/my.h

re:	fclean all
