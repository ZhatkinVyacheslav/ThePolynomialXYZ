#include <gtest.h>
#include "lib_LinTabList.h"
#include "lib_polinom.h"

TEST(test_lib_LinTabList, can_create_LinTabList) {
	ASSERT_NO_THROW(LinTableList ltl);
}

TEST(test_lib_LinTabList, can_do_funk_add) {
	polinom pol;
	LinTableList ltl;
	ASSERT_NO_THROW(ltl.add("p1", pol));
}


TEST(test_lib_LinTabList, can_not_do_funk_add) {
	polinom pol;
	LinTableList ltl;
	ltl.add("p1", pol);
	ASSERT_ANY_THROW(ltl.add("p1", pol));
}

TEST(test_lib_LinTabList, can_do_funk_destroyPol) {
	polinom pol;
	LinTableList ltl;
	ltl.add("p1", pol);
	ASSERT_NO_THROW(ltl.destroyPol("p1"));
}

TEST(test_lib_LinTabList, can_do_funk_find) {
	polinom pol;
	monom mon(2, 2, 2, 2);
	pol.add_monom(mon);
	LinTableList ltl;
	ltl.add("p1", pol);
	ASSERT_NO_THROW(ltl.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_LinTabList, can_do_funk_findAndReplace) {
	polinom pol;
	polinom pol1;
	monom mon(2, 2, 2, 2);
	pol1.add_monom(mon);
	LinTableList ltl;
	ltl.add("p1", pol);
	ASSERT_NO_THROW(ltl.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_LinTabList, can_not_do_funk_destroyPol) {
	polinom pol;
	LinTableList ltl;
	ASSERT_ANY_THROW(ltl.destroyPol("p1"));
}


TEST(test_lib_LinTabList, can_not_do_funk_findAndReplace) {
	polinom pol1;
	LinTableList ltl;
	ASSERT_ANY_THROW(ltl.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}