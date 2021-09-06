/*
** EPITECH PROJECT, 2021
** test_infin_add.c
** File description:
** test infin add
*/

#include <criterion/criterion.h>

char *infin_add(char const *str1, char const *str2);

Test(infin_add, zero_plus_zero)
{
    cr_assert_str_eq(infin_add("0", "0"), "0");
}

Test(infin_add, one_plus_one)
{
    cr_assert_str_eq(infin_add("1", "1"), "2");
}

Test(infin_add, two_plus_two)
{
    cr_assert_str_eq(infin_add("2", "2"), "4");
}

Test(infin_add, three_plus_three)
{
    cr_assert_str_eq(infin_add("3", "3"), "6");
}

Test(infin_add, four_plus_four)
{
    cr_assert_str_eq(infin_add("4", "4"), "8");
}

Test(infin_add, pos_nbrs_one_digit_result)
{
    cr_assert_str_eq(infin_add("2", "6"), "8");
}

Test(infin_add, pos_nbrs_two_digits_result)
{
    cr_assert_str_eq(infin_add("10", "2"), "12");
}

Test(infin_add, pos_nbrs_two_digits_result_inv)
{
    cr_assert_str_eq(infin_add("2", "10"), "12");
}

Test(infin_add, random)
{
    cr_assert_str_eq(infin_add("1", "9999"), "10000");
}

Test(infin_add, nothing)
{
    cr_assert_str_eq(infin_add("", ""), "");
}

Test(infin_add, zeros_before)
{
    cr_assert_str_eq(infin_add("1902", "0000000031"), "1933");
}

Test(infin_add, bigbig_by_bigbig) {
    cr_assert_str_eq(infin_add("435439435845843984358439", "45359766785665822182412343254343435433339459569"), "45359766785665822182412778693779281277323818008");
}

Test(infin_add, double_neg)
{
    cr_assert_str_eq(infin_add("-1018", "-327"), "-1345");
}
