/*
** EPITECH PROJECT, 2020
** sum_strings_length
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdarg.h>
#include "../includes/my.h"

int  sum_strings_length(int n, ...)
{
    va_list ap;
    int i = 0;
    int length = 0;

    va_start(ap, n);
    for (i = 0; i < n; i++)
        length += my_strlen(va_arg(ap, char*));
    va_end (ap);
  return (length);
}