/*
** EPITECH PROJECT, 2020
** disp_stdarg
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdarg.h>
#include "../includes/my.h"

void disp_stdarg(char *s, ...)
{
    va_list	ap;
    int	i = 0;

    va_start(ap, s);
    while (s[i] != '\0') {
        if (s[i] == 'c')
	        my_putchar(va_arg(ap, int));
        if (s[i] == 'i')
	        my_put_nbr(va_arg(ap, int));
        if (s[i] == 's')
	        my_putstr(va_arg(ap, char *));
            my_putchar('\n');
        i++;
    }
  va_end(ap);
}

int main(void)
{
    disp_stdarg("csiis",'X', "hi", 10,  -3, "plop");
    return 0;
}