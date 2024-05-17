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
 Can only convert a positive number.
** @param nb The number you want to convert.
** @param base Base to convert to (between 2 and 36).
** @return `nb` in base `base`. `NULL` if number is invalid or if `base`
 is lower than 2 or exceed 36.
*/
char *my_int_to_base(int nb, int base);
/*!
** @brief Returns `nb` in base `base` to a base 10 int.
 Can only convert a positive number.
** @param nb The number you want to convert.
** @param base Base to convert from (between 2 and 36).
** @return `nb` in base 10. `-1` if `nb` is invalid. `nb` is invalid if
 `NULL`, if in a base higher than `base` (`4F` is in base 16, trying to
 convert it from base 2 will return an error) or if containing invalid
 characters.
*/
int my_base_to_int(char *nb, int base);
/*!
** @brief Returns the point at `t` on the `ab` vector.
** @param a First point of the vector.
** @param b Second point of the vector.
** @param t The point on the vector.
*/
double my_lerp(double a, double b, double t);
double my_min(double a, double b);
double my_max(double a, double b);

#endif /* !MATHS_FUNCTIONS_H_ */
