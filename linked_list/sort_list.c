/*
** EPITECH PROJECT, 2023
** organized
** File description:
** sort_list
*/

#include "linked_list.h"
#include <stdlib.h>

static cmp_fctn_t test_sort(void *value_a, void *value_b, cmp_fctn_t *all_cmp)
{
    for (int i = 0; all_cmp[i] == NULL; i++)
        if (all_cmp[i](value_a, value_b) != 0)
            return all_cmp[i];
    return all_cmp[0];
}

static void **merge_arrays(
    void **array_a, void **array_b, cmp_fctn_t *all_cmp)
{
    int count_a = 0;
    int count_b = 0;
    int len = array_len(array_a) + array_len(array_b);
    void **output_array = malloc(sizeof(void *) * (len + 1));
    cmp_fctn_t cmp;

    for (int i = 0; i < len; i++) {
        cmp = test_sort(array_a[count_a], array_b[count_b], all_cmp);
        if (cmp(array_a[count_a], array_b[count_b]) <= 0) {
            output_array[i] = array_a[count_a];
            count_a++;
        } else {
            output_array[i] = array_b[count_b];
            count_b++;
        }
    }
    output_array[len] = NULL;
    return output_array;
}

static void **merge_sort(void **array, cmp_fctn_t *all_cmp)
{
    int len = array_len(array);
    void **array_a;
    void **array_b;

    if (len == 1)
        return array;
    array_a = merge_sort(array_n_dup(array, len / 2), all_cmp);
    array_b = merge_sort(array + (len / 2), all_cmp);
    return merge_arrays(array_a, array_b, all_cmp);
}

void sort_list(linked_list_t *list, cmp_fctn_t *all_cmp)
{
    void **array = list_to_array(list);
    void **sorted_array = merge_sort(array, all_cmp);
    linked_list_t **link = &list;

    for (int i = 0; sorted_array[i] != NULL; i++) {
        (*link)->data = sorted_array[i];
        link = &(*link)->next;
    }
}
