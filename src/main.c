/*
** EPITECH PROJECT, 2023
** my_scripts
** File description:
** main
*/

#include "../include/my_project.h"

int main(int const argc, char *argv[])
{
    int flags[2] = {0};
    char *value_flags[2] = {0};
    if (get_flag(argc, argv, flags, value_flags) == KO)
        return KO;
    if (flags[0] == 1){
        if (write(1, "toto\n", 5) == -1)
            return KO;
        return OK;
    }
    if (flags[1] == 1){
        if (printf("%s\n", value_flags[1]) < 0)
            return KO;
        return OK;
    }
    return my_project(argc, argv);
}
