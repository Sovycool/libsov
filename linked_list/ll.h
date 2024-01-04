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

typedef struct linked_dict {
    char *key;
    void *data;
    struct linked_dict *next;
} linked_dict_t;

typedef int (*cmp_fctn_t)(void *, void *);

linked_list_t *new_list(void);
void add_to_list(linked_list_t *list, void *data, int index);
void remove_from_list(linked_list_t *list);
void destroy_list(linked_list_t *list);
int list_len(linked_list_t *list);
linked_list_t *get_list_at_index(linked_list_t *list, int index);
int array_len(void **array);
void **array_n_dup(void **array, int n);
void **list_to_array(linked_list_t *list);
void sort_list(linked_list_t *list, cmp_fctn_t *cmp);

linked_dict_t *new_dict(void);
int set_in_dict(linked_dict_t *dict, char *key, void *data);
void remove_from_dict(linked_dict_t *dict, char *key);
void destroy_dict(linked_dict_t *dict);
int dict_len(linked_dict_t *dict);
void *get_in_dict(linked_dict_t *dict, char *key);

#endif /* !LINKED_LIST_H_ */
