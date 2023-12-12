##
## EPITECH PROJECT, 2023
## json_parser
## File description:
## Makefile
##

SRCS =	my/my_compute_factorial_it.c	\
		my/my_compute_factorial_rec.c	\
		my/my_compute_power_it.c		\
		my/my_compute_power_rec.c		\
		my/my_compute_square_root.c		\
		my/my_evil_str.c				\
		my/my_find_prime_sup.c			\
		my/my_getnbr_base.c				\
		my/my_getnbr.c					\
		my/my_isneg.c					\
		my/my_is_prime.c				\
		my/my_print_alpha.c				\
		my/my_print_comb.c				\
		my/my_print_comb2.c				\
		my/my_print_combn.c				\
		my/my_print_digits.c			\
		my/my_print_revalpha.c			\
		my/my_putchar.c					\
		my/my_putnbr_base.c				\
		my/my_putnbr.c					\
		my/my_putstr.c					\
		my/my_revstr.c					\
		my/my_showmem.c					\
		my/my_showstr.c					\
		my/my_show_word_array.c			\
		my/my_sort_int_array.c			\
		my/my_strcapitalize.c			\
		my/my_strcat.c					\
		my/my_strncat.c					\
		my/my_strcat_alloc.c			\
		my/my_strcmp.c					\
		my/my_strncmp.c					\
		my/my_strcpy.c					\
		my/my_strncpy.c					\
		my/my_strdup.c					\
		my/my_strndup.c					\
		my/my_is_char_in_str.c			\
		my/my_str_isalpha.c				\
		my/my_str_islower.c				\
		my/my_str_isupper.c				\
		my/my_str_isnum.c				\
		my/my_isnum.c					\
		my/my_str_isprintable.c			\
		my/my_strlen.c					\
		my/my_strlowcase.c				\
		my/my_strstr.c					\
		my/my_str_to_word_array.c		\
		my/my_strupcase.c				\
		my/my_swap.c					\
		my/my_check_int_overflow.c		\
		my/flags/print_flag.c			\
		my/flags/my_flag_putchar.c		\
		my/flags/my_hexa.c				\
		my/flags/my_none.c				\
		my/flags/my_octal.c				\
		my/flags/my_pointer.c			\
		my/flags/my_putfloat.c			\
		my/flags/my_flag_putnbr.c		\
		my/flags/my_flag_putstr.c		\
		my/flags/my_sci_nota.c			\
		my/flags/my_short.c				\
		my/flags/my_u_int.c				\
		my/flags/my_percent.c			\
		my/my_printf.c					\
		\
		linked_list/new_list.c			\
		linked_list/add_to_list.c		\
		linked_list/remove_from_list.c	\
		linked_list/list_len.c			\
		linked_list/sort_list.c			\
		linked_list/list_to_array.c		\
		linked_list/array_len.c			\
		linked_list/array_n_dup.c		\
		\
		json_parser/object/new_json.c			\
		json_parser/pair/new_json_pair.c		\
		json_parser/value/new_json_value.c		\
		json_parser/value/add_value_to_json.c	\
		json_parser/value/get_json_value.c		\
		\
		libmain.c

OBJS =		$(SRCS:.c=.o)

NAME = 		libtest

FLAGS= 		-Wall -Werror -Wextra

LIBS =		\

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) -o $(NAME) $(OBJS) -L. $(LIBS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all
