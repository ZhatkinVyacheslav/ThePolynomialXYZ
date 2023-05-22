#include <gtest.h>
#include "lib_TabSearchTree.h"
#include "lib_polinom.h"

TEST(test_lib_TabSearchTree, can_create_TabSearchTree) {
	ASSERT_NO_THROW(TabSearchTree ltm);
}

TEST(test_lib_TabSearchTree, can_do_funk_add) {
	polinom pol;
	TabSearchTree tst;
	ASSERT_NO_THROW(tst.add("p1", pol));
}

TEST(test_lib_TabSearchTree, can_not_do_funk_add) {
	polinom pol;
	TabSearchTree tst;
	tst.add("p1", pol);
	ASSERT_ANY_THROW(tst.add("p1", pol));
}

TEST(test_lib_TabSearchTree, can_do_funk_destroyPol) {
	polinom pol;
	TabSearchTree tst;
	tst.add("p1", pol);
	ASSERT_NO_THROW(tst.destroyPol("p1"));
}

TEST(test_lib_TabSearchTree, can_do_funk_find) {
	polinom pol;
	monom mon(2, 2, 2, 2);
	pol.add_monom(mon);
	TabSearchTree tst;
	tst.add("p1", pol);
	ASSERT_NO_THROW(tst.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_TabSearchTree, can_do_funk_findAndReplace) {
	polinom pol;
	polinom pol1;
	monom mon(2, 2, 2, 2);
	pol1.add_monom(mon);
	TabSearchTree tst;
	tst.add("p1", pol);
	ASSERT_NO_THROW(tst.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_TabSearchTree, can_not_do_funk_findAndReplace) {
	polinom pol1;
	TabSearchTree tst;
	ASSERT_ANY_THROW(tst.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}