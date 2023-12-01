/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** my_project
*/

#ifndef MY_PROJECT_H_
    #define MY_PROJECT_H_
    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include "my_macro.h"
    #include "../lib/my_int/include/my_int.h"
    #include "../lib/my_str/include/my_str.h"
    #include "../lib/my_str/include/spliter.h"
    #include "../lib/my_linked_list/include/my_linked_list.h"
    #include "../lib/my_char_map/include/my_char_map.h"
    #include "../lib/my_int_map/include/my_int_map.h"
    int my_project(int argc, char **argv);
    int get_flag(int const argc, char **argv, int *flags, char **value_flags);
#endif /* !MY_PROJECT_H_ */
