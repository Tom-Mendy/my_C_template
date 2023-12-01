/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** my_project
*/

#include "../include/my_project.h"
#include <stdio.h>

int my_project(int __attribute__((unused))argc, char
__attribute__((unused))**argv)
{
    char ** map = my_load_file_in_array("Makefile");
    my_display_char_map(map);
    my_free_char_map(map);
    return 0;
}
