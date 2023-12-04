/*
** EPITECH PROJECT, 2023
** my_sort_int_array
** File description:
** Sorts int in array in ascending order
*/

static void swap_int(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

void my_sort_int_array(int *arr, int size)
{
    int i = 0;
    int min_pos = 0;

    if (size < 2) {
        return;
    }
    while (i < size) {
        if (arr[min_pos] > arr[i]) {
            min_pos = i;
        }
        i++;
    }
    swap_int(arr, arr + min_pos);
    my_sort_int_array(arr + 1, size - 1);
}
