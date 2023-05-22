#include <gtest.h>
#include "lib_OrdTabMass.h"
#include "lib_polinom.h"

TEST(test_lib_OrdTabMass, can_create_OrdTabMass) {
	ASSERT_NO_THROW(OrdTabMass otm);
}

TEST(test_lib_OrdTabMass, can_do_funk_add) {
	polinom pol;
	OrdTabMass otm;
	ASSERT_NO_THROW(otm.add("p1", pol));
}

TEST(test_lib_OrdTabMass, can_not_do_funk_add) {
	polinom pol;
	OrdTabMass otm;
	otm.add("p1", pol);
	ASSERT_ANY_THROW(otm.add("p1", pol));
}

TEST(test_lib_OrdTabMass, can_do_funk_destroyPol) {
	polinom pol;
	OrdTabMass otm;
	otm.add("p1", pol);
	ASSERT_NO_THROW(otm.destroyPol("p1"));
}

TEST(test_lib_OrdTabMass, can_do_funk_find) {
	polinom pol;
	monom mon(2, 2, 2, 2);
	pol.add_monom(mon);
	OrdTabMass otm;
	otm.add("p1", pol);
	ASSERT_NO_THROW(otm.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_OrdTabMass, can_do_funk_findAndReplace) {
	polinom pol;
	polinom pol1;
	monom mon(2, 2, 2, 2);
	pol1.add_monom(mon);
	OrdTabMass otm;
	otm.add("p1", pol);
	ASSERT_NO_THROW(otm.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_OrdTabMass, can_not_do_funk_destroyPol) {
	polinom pol;
	OrdTabMass otm;
	ASSERT_ANY_THROW(otm.destroyPol("p1"));
}


TEST(test_lib_OrdTabMass, can_not_do_funk_findAndReplace) {
	polinom pol1;
	OrdTabMass otm;
	ASSERT_ANY_THROW(otm.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}