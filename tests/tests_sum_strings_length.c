/*
** EPITECH PROJECT, 2020
** test
** File description:
** bootstrap
*/

#include <criterion/criterion.h>
#include "../includes/bsprintf.h"

Test(sum_strings_length, sum_str_lengths)
{
    int value = sum_strings_length(5, "Hello", "a", "toto", "", "plop");

    cr_assert_eq(value, 14);
}

Test(sum_strings_lengthL, sum_str_lengthsL)
{
    int value = sum_strings_length(5, "Hello", "World", "C", "Moi", "Gilbertte");

    cr_assert_eq(value, 23);
}