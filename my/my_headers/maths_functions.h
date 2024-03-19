/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** maths_functions
*/

#ifndef MATHS_FUNCTIONS_H_
    #define MATHS_FUNCTIONS_H_

/*!
** @brief Returns the absolute value of `nb`.
** @param nb The number you want the absolute of.
** @return Absolute value of `nb`
*/
double my_abs(double nb);
/*!
** @brief Returns `nb` to the power of `exp`.
** @param nb The number you want the power of.
** @param exp Exposant of your number.
** @return `nb` to the power of `exp`.
*/
double my_pow(double nb, int exp);
/*!
** @brief Returns `nb` in base `base`.
** @param nb The number you want to convert.
** @param base Base to convert to (between 2 and 36).
** @return `nb` in base `base`.
*/
char *my_int_to_base(int nb, int base);
/*!
** @brief Returns `nb` in base `base` to a base 10 int.
** @param nb The number you want to convert.
** @param base Base to convert from (between 2 and 36).
** @return `nb` in base 10.
*/
int my_base_to_int(char *nb, int base);

#endif /* !MATHS_FUNCTIONS_H_ */
