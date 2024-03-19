/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_pow
*/

double my_pow(double nb, int exp)
{
    double output = 1;

    if (exp > 0)
        for (int i = 0; i < exp; i++)
            output *= nb;
    else
        for (int i = 0; i < exp; i++)
            output /= nb;
    return output;
}
