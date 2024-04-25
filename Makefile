##
## EPITECH PROJECT, 2023
## LibSov
## File description:
## Makefile
##

.PHONY: makelibs fcleanlibs

makelibs: libmy.a libll.a libfman.a libjpar.a

libmy.a: my
	make -C $?

libll.a: linked_list
	make -C $?

libfman.a: file_manipulation
	make -C $?

libjpar.a: json_parser
	make -C $?

fcleanlibs:
	make fclean -C my/
	make fclean -C linked_list/
	make fclean -C file_manipulation/
	make fclean -C json_parser/
