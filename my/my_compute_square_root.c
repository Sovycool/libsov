/*
** EPITECH PROJECT, 2023
** my_compute_square_root
** File description:
** Find sqrt of nb (rec)
*/

int my_compute_square_root(int nb)
{
    int square = 0;

    for (int i = 0; i < nb / 2; i++) {
        square = i * i;
        if (square == nb)
            return i;
    }
    return 0;
}
