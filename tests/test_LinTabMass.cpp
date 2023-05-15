#include <gtest.h>
#include "lib_LinTabMass.h"
#include "lib_polinom.h"

TEST(test_lib_LinTabMass, can_create_LinTabMass) {
	ASSERT_NO_THROW(LinTabMass ltm);
}

TEST(test_lib_LinTabMass, can_do_funk_add) {
	polinom pol;
	LinTabMass ltm;
	ASSERT_NO_THROW(ltm.add("p1", pol));
}

TEST(test_lib_LinTabMass, can_do_funk_destroyPol) {
	polinom pol;
	LinTabMass ltm;
	ltm.add("p1", pol);
	ASSERT_NO_THROW(ltm.destroyPol("p1"));
}

TEST(test_lib_LinTabMass, can_do_funk_find) {
	polinom pol;
	monom mon(2, 2, 2, 2);
	pol.add_monom(mon);
	LinTabMass ltm;
	ltm.add("p1", pol);
	ASSERT_NO_THROW(ltm.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_LinTabMass, can_do_funk_findAndReplace) {
	polinom pol;
	polinom pol1;
	monom mon(2, 2, 2, 2);
	pol1.add_monom(mon);
	LinTabMass ltm;
	ltm.add("p1", pol);
	ASSERT_NO_THROW(ltm.findAndReplace("p1", pol1));
//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_LinTabMass, can_not_do_funk_destroyPol) {
	polinom pol;
	LinTabMass ltm;
	ASSERT_ANY_THROW(ltm.destroyPol("p1"));
}


TEST(test_lib_LinTabMass, can_no_do_funk_find) {
	LinTabMass ltm;
	ASSERT_ANY_THROW(ltm.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_LinTabMass, can_not_do_funk_findAndReplace) {
	polinom pol1;
	LinTabMass ltm;
	ASSERT_ANY_THROW(ltm.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}