/*
** EPITECH PROJECT, 2023
** my_header
** File description:
** Contains protos for libmy functions
*/

#ifndef LIBMY
    #define LIBMY

int my_compute_factorial_it(int);
int my_compute_factorial_rec(int);
int my_compute_power_it(int, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
char *my_evil_str(char *);
int my_find_prime_sup(int);
int my_getnbr_base(int);
int my_getnbr(char *);
int my_isneg(int);
int my_is_prime(int);
void my_print_alpha(void);
void my_print_comb2(void);
void my_print_comb(void);
void my_print_combn(int);
void my_print_digits(void);
void my_print_revalpha(void);
void my_putchar(char);
void my_putnbr_base(int);
int my_putnbr(int);
int my_putstr(const char *);
char *my_revstr(char *);
void my_showmem(void);
void my_showstr(char *);
int my_show_word_array(char *const *array);
void my_sort_int_array(int *);
char *my_strcapitalize(char *);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, int n);
char *my_strcat_alloc(char *part_a, char *part_b);
char *my_strcmp(char *, char *);
char *my_strncmp(char *, char *, int);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, int n);
char *my_strdup(const char *);
char *my_strndup(const char *, int);
char **my_str_to_word_array(const char *);
int my_is_char_in_str(char c, char const *str);
int my_str_isalpha(char *);
int my_str_islower(char *);
int my_str_isupper(char *);
int my_isnum(char);
int my_str_isnum(char *);
int my_str_isprintable(char *);
int my_strlen(const char *);
char *my_strlowcase(char *);
char *my_strupcase(char *);
char *my_strstr(char *, char *);
void my_swap(char, char);
int my_check_int_overflow(char, int, int);
int my_printf(char const *format, ...);

#endif
