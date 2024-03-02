/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_show_word_array
*/

#include "my_str.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_my_show_word_array(void) {
  cr_redirect_stdout();
  cr_redirect_stderr();
}

Test(my_show_word_array, basic_test, .init = redirect_my_show_word_array) {
  char *tab[4] = {"poule", "TOTO", "tata", NULL};
  my_show_word_array(tab);
  cr_assert_stdout_eq_str("poule\nTOTO\ntata\n");
}

Test(my_show_word_array, rigor, .init = redirect_my_show_word_array) {
  char *tab[4] = {"TOTO", NULL, "tata", NULL};
  my_show_word_array(tab);
  cr_assert_stdout_eq_str("TOTO\n");
}

Test(my_show_word_array, rigor_output) {
  char *tab[4] = {NULL, "TOTO", "tata", NULL};
  cr_assert_eq(my_show_word_array(tab), 0);
}
