/*
** EPITECH PROJECT, 2023
** B-CPE-200-BDX-2-1-dante-arthur.gauffre
** File description:
** my_count_char_in_char_map
*/

static int my_count_char_in_char_map_sub(char const * const * const map,
int const i, int *count_char, char const c)
{
    if (!map || !*map | !count_char)
        return -1;
    for (int j = 0; map[i][j] != '\0'; j += 1) {
        if (map[i][j] == c)
            *count_char += 1;
    }
    return 0;
}

int my_count_char_in_char_map(char const * const * const map, char const c)
{
    int count_char = 0;

    if (!map || !*map)
        return -1;
    for (int i = 0; map[i]; i += 1) {
        if (my_count_char_in_char_map_sub(map, i, &count_char, c) == -1)
            return -1;
    }
    return count_char;
}
