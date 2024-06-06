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

cleanlibs:
	make clean -C my/
	make clean -C linked_list/
	make clean -C file_manipulation/
	make clean -C json_parser/

fcleanlibs:
	make fclean -C my/
	make fclean -C linked_list/
	make fclean -C file_manipulation/
	make fclean -C json_parser/
