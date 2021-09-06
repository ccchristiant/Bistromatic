/*
** EPITECH PROJECT, 2021
** test_infin_sub.c
** File description:
** infin sub
*/

#include <criterion/criterion.h>

char *infin_mult1(char const *str1, char const *str2);

Test(infin_mult1, zero_by_zero)
{
    cr_assert_str_eq(infin_mult1("0", "0"), "0");
}

Test(infin_mult1, zero_by_idk)
{
    cr_assert_str_eq(infin_mult1("0", "1234567890965432987654"), "0");
}

Test(infin_mult1, idk_by_zero)
{
    cr_assert_str_eq(infin_mult1("12345678908765432234595", "0"), "0");
}

Test(infin_mult1, one_by_one)
{
    cr_assert_str_eq(infin_mult1("1", "1"), "1");
}

Test(infin_mult1, mone_by_mone)
{
    cr_assert_str_eq(infin_mult1("-1", "-1"), "1");
}

Test(infin_mult1, mone_by_one)
{
    cr_assert_str_eq(infin_mult1("-1", "1"), "-1");
}

Test(infin_mult1, one_by_mone)
{
    cr_assert_str_eq(infin_mult1("1", "-1"), "-1");
}

Test(infin_mult1, four_by_four)
{
    cr_assert_str_eq(infin_mult1("4", "4"), "16");
}

Test(infin_mult1, twelve_by_two)
{
    cr_assert_str_eq(infin_mult1("12", "2"), "24");
}

Test(infin_mult1, twelve_by_twelwe)
{
    cr_assert_str_eq(infin_mult1("12", "12"), "144");
}

Test(infin_mult1, ten_by_ten)
{
    cr_assert_str_eq(infin_mult1("10", "10"), "100");
}

Test(infin_mult1, inf_by_inf)
{
    cr_assert_str_eq(infin_mult1("1234567", "1234567890"), "1524156776253630");
}

Test(infin_mult1, minus_inf_by_inf)
{
    cr_assert_str_eq(infin_mult1("-1234567", "1234567890"), "-1524156776253630");
}

Test(infin_mult1, inf_by_minus_inf)
{
    cr_assert_str_eq(infin_mult1("1234567", "-1234567890"), "-1524156776253630");
}

Test(infin_mult1, minus_inf_by_minus_inf)
{
    cr_assert_str_eq(infin_mult1("-1234567", "-1234567890"), "1524156776253630");
}
