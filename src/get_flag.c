/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** get_flag
*/

#include "../include/my_project.h"

static int get_flag_sub(int const option, int *flags, char **value_flags)
{
    switch (option) {
    case 'h':
        if (flags[0] == 1)
            return KO;
        flags[0] = 1;
        break;
    case 'f':
        if (flags[1] == 1)
            return KO;
        value_flags[1] = optarg;
        flags[1] = 1;
        break;
    default:
        return KO;
    }
    return OK;
}

int get_flag(int const argc, char ** argv, int *flags, char **value_flags)
{
    int option = 0;
    while ((option = getopt(argc, argv, "hf:")) != -1) {
        if (get_flag_sub(option, flags, value_flags) == KO)
            return KO;
    }
    if (argv[optind] != NULL)
        return KO;
    return OK;
}
