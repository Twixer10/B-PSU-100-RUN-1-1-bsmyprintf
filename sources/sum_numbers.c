/*
** EPITECH PROJECT, 2020
** sum_numbers
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdarg.h>

int  sum_numbers(int n, ...)
{
    va_list ap;
    int i = 0;
    int sum = 0;

    va_start(ap, n);
    for (i = 0; i < n; i++)
        sum += va_arg(ap, int);
    va_end (ap);
  return sum;
}