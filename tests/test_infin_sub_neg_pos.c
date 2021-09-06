/*
** EPITECH PROJECT, 2021
** test_infin_sub_neg_pos.c
** File description:
** test infin sub neg pos
*/

#include <criterion/criterion.h>

char *infin_sub_neg_pos(char const *str1, char const *str2);

Test(infin_sub_neg_pos, 0_by_0)
{
    cr_assert_str_eq(infin_sub_neg_pos("-0", "0"), "0");
}

Test(infin_sub_neg_pos, one_by_one)
{
    cr_assert_str_eq(infin_sub_neg_pos("-1", "1"), "0");
}

Test(infin_sub_neg_pos, two_by_twelve)
{
    cr_assert_str_eq(infin_sub_neg_pos("-2", "12"), "10");
}

Test(infin_sub_neg_pos, nine_by_ten)
{
    cr_assert_str_eq(infin_sub_neg_pos("-9", "10"), "1");
}

Test(infin_sub_neg_pos, four_by_fifteen)
{
    cr_assert_str_eq(infin_sub_neg_pos("-4", "15"), "11");
}

Test(infin_sub_neg_pos, 9_by_23)
{
    cr_assert_str_eq(infin_sub_neg_pos("-9", "23"), "14");
}

Test(infin_sub_neg_pos, 10_by_23)
{
    cr_assert_str_eq(infin_sub_neg_pos("-10", "23"), "13");
}

Test(infin_sub_neg_pos, 24_by_23)
{
    cr_assert_str_eq(infin_sub_neg_pos("-24", "23"), "-1");
}

Test(infin_sub_neg_pos, 20_by_10)
{
    cr_assert_str_eq(infin_sub_neg_pos("-20", "10"), "-10");
}

Test(infin_sub_neg_pos, 20_by_0)
{
    cr_assert_str_eq(infin_sub_neg_pos("-20", "0"), "-20");
}

Test(infin_sub_neg_pos, 50_by_23)
{
    cr_assert_str_eq(infin_sub_neg_pos("-50", "23"), "-27");
}

Test(infin_sub_neg_pos, 23_by_134)
{
    cr_assert_str_eq(infin_sub_neg_pos("-23", "134"), "111");
}

Test(infin_sub_neg_pos, 134_by_23)
{
    cr_assert_str_eq(infin_sub_neg_pos("-134", "23"), "-111");
}

Test(infin_sub_neg_pos, 234_by_23)
{
    cr_assert_str_eq(infin_sub_neg_pos("-234", "23"), "-211");
}

Test(infin_sub_neg_pos, 234_by_223)
{
    cr_assert_str_eq(infin_sub_neg_pos("-234", "223"), "-11");
}

Test(infin_sub_neg_pos, test)
{
    cr_assert_str_eq(infin_sub_neg_pos("-5", "6"), "1");
}
