/*
** EPITECH PROJECT, 2020
** KOUKOU
** File description:
** C MWA
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/bsprintf.h"

Test(disp_stdarg, basic, .init=cr_redirect_stdout)
{
    disp_stdarg("csiis", "X", "hi", 10, -3, "plop");

    cr_assert_stdout_eq_str("Xnhin10n-3nplopn", "");
}

Test(disp_stdarg2, basic2, .init=cr_redirect_stdout)
{
    disp_stdarg("sicsic", "Hello", 42, 'B', "EssEllT", 24, 'T');

    cr_assert_stdout_eq_str("Xnhin10n-3nplopn", "");
}