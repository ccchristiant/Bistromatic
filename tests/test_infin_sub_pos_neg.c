/*
** EPITECH PROJECT, 2021
** test_infin_sub.c
** File description:
** infin sub
*/

#include <criterion/criterion.h>

char *infin_sub_pos_neg(char const *str1, char const *str2);

Test(infin_sub_pos_neg, 0_by_0)
{
    cr_assert_str_eq(infin_sub_pos_neg("0", "-0"), "0");
}


Test(infin_sub_pos_neg, one_by_one)
{
    cr_assert_str_eq(infin_sub_pos_neg("1", "-1"), "0");
}

Test(infin_sub_pos_neg, twelve_by_two)
{
    cr_assert_str_eq(infin_sub_pos_neg("12", "-2"), "10");
}

Test(infin_sub_pos_neg, ten_by_nine)
{
    cr_assert_str_eq(infin_sub_pos_neg("10", "-9"), "1");
}

Test(infin_sub_pos_neg, 15_by_4)
{
    cr_assert_str_eq(infin_sub_pos_neg("15", "-4"), "11");
}

Test(infin_sub_pos_neg, 23_by_9)
{
    cr_assert_str_eq(infin_sub_pos_neg("23", "-9"), "14");
}

Test(infin_sub_pos_neg, 23_by_10)
{
    cr_assert_str_eq(infin_sub_pos_neg("23", "-10"), "13");
}

Test(infin_sub_pos_neg, 23_by_24)
{
    cr_assert_str_eq(infin_sub_pos_neg("23", "-24"), "-1");
}

Test(infin_sub_pos_neg, 10_by_20)
{
    cr_assert_str_eq(infin_sub_pos_neg("10", "-20"), "-10");
}

Test(infin_sub_pos_neg, 0_by_20)
{
    cr_assert_str_eq(infin_sub_pos_neg("0", "-20"), "-20");
}

Test(infin_sub_pos_neg, 23_by_50)
{
    cr_assert_str_eq(infin_sub_pos_neg("23", "-50"), "-27");
}

Test(infin_sub_pos_neg, 134_by_23)
{
    cr_assert_str_eq(infin_sub_pos_neg("134", "-23"), "111");
}

Test(infin_sub_pos_neg, 23_by_134)
{
    cr_assert_str_eq(infin_sub_pos_neg("23", "-134"), "-111");
}

Test(infin_sub_pos_neg, 23_by_234)
{
    cr_assert_str_eq(infin_sub_pos_neg("23", "-234"), "-211");
}

Test(infin_sub_pos_neg, 223_by_234)
{
    cr_assert_str_eq(infin_sub_pos_neg("323", "-234"), "89");
}

Test(infin_sub_pos_neg, 327_by_320)
{
    cr_assert_str_eq(infin_sub_pos_neg("327", "-320"), "7");
}
