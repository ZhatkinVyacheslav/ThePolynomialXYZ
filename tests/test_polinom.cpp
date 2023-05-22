#include <gtest.h>
#include "lib_polinom.h"

#include <gtest.h>
#include "lib_polinom.h"
TEST(test_lib_polinom, can_do_funk_equaldegrees)
{
    monom m(2, 3, 4, 5);
    monom m1(6, 3, 4, 5);

    ASSERT_EQ(m.equaldegrees(m1), true);

    monom m2(5, 5, 5, 5);

    ASSERT_EQ(m.equaldegrees(m2), false);
}

TEST(test_lib_polinom, can_do_funk_CalculatePointMonom)
{
    monom m(2, 3, 4, 5);

    ASSERT_EQ(m.CalculatePointMonom(1, 1, 1), 2);
}

TEST(test_lib_polinom, can_do_funk_CalculatePointPolinom)
{
    polinom polstr("2x^2y^4z^3");

    ASSERT_EQ(polstr.CalculatePointPolinom(1, 1, 1), 2);

}

TEST(test_lib_polinom, can_do_funk_derivative)
{
    polinom polstr("2x^2y^4z^3");

    int mode = 4;
    int mode1 = 2;

    ASSERT_ANY_THROW(polstr.derivative(mode));
    ASSERT_NO_THROW(polstr.derivative(mode1));
}