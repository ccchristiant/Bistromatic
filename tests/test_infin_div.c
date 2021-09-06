/*
** EPITECH PROJECT, 2021
** test_infin_div.c
** File description:
** unit test for infin_div
*/

#include <criterion/criterion.h>

char *infin_div1(char const *str1, char const *str2);

Test(infin_div1, anything_by_0)
{
    cr_assert_str_eq(infin_div1("0", "0"), 0);
}

Test(infin_div1, same_by_same)
{
    cr_assert_str_eq(infin_div1("1", "1"), "1");
}

Test(infin_div1, 4_by_3)
{
    cr_assert_str_eq(infin_div1("4", "3"), "1");
}

Test(infin_div1, 10_by_3)
{
    cr_assert_str_eq(infin_div1("10", "3"), "3");
}

Test(infin_div1, 20_by_3)
{
    cr_assert_str_eq(infin_div1("20", "3"), "6");
    }

Test(infin_div1, 35_by_6)
{
    cr_assert_str_eq(infin_div1("35", "6"), "5");
    }

Test(infin_div1, 327_by_4)
{
    cr_assert_str_eq(infin_div1("327", "4"), "81");
}

Test(infin_div1, 327_by_18)
{
    cr_assert_str_eq(infin_div1("327", "18"), "18");
    }

Test(infin_div1, 2703_by_1810)
{
    cr_assert_str_eq(infin_div1("27035", "18"), "1501");
}

Test(infin_div1, 2147483648_by_1601)
{
    cr_assert_str_eq(infin_div1("214", "9"), "23");
}

Test(infin_div1, 2703160188_by_7)
{
    cr_assert_str_eq(infin_div1("2703160188", "7"), "386165741");
}

Test(infin_div1, 60000000000_by_5)
{
    cr_assert_str_eq(infin_div1("60000000000", "5"), "12000000000");
}

