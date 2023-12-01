/*
** EPITECH PROJECT, 2023
** my_str_capitalize
** File description:
** function that capitalizes the first letter of each word
*/

#include <stdlib.h>
#include "../include/my_str.h"

int my_str_capitalize(char *str)
{
    int bool_value = 1;
    if (!str)
        return -1;
    my_str_low_case(str);
    for (int i = 0; str[i] != '\0'; i += 1){
        if (str[i] >= '0' && str[i] <= '9')
            bool_value = 0;
        if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
            bool_value = 1;
        if (bool_value == 1 && str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
            bool_value = 0;
        }
    }
    return 0;
}
