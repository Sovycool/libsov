/*
** EPITECH PROJECT, 2023
** organized
** File description:
** linked_list
*/

#ifndef LINKED_LIST_H_
    #define LINKED_LIST_H_

typedef struct linked_list {
    void *data;
    struct linked_list *previous;
    struct linked_list *next;
} linked_list_t;

typedef int (*cmp_fctn_t)(void *, void *);

linked_list_t *new_list(void);
void add_to_list(linked_list_t *list, void *data);
void add_to_stack(linked_list_t *list, void *data);
void remove_from_list(linked_list_t *list);
void destroy_list(linked_list_t *list);
int list_len(linked_list_t *list);
linked_list_t *get_list_at_index(linked_list_t *list, int index);
int array_len(void **array);
void **array_n_dup(void **array, int n);
void **list_to_array(linked_list_t *list);
void sort_list(linked_list_t *list, cmp_fctn_t *cmp);

#endif /* !LINKED_LIST_H_ */
