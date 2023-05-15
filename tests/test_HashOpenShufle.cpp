#include <gtest.h>
#include "lib_HashOpenShuffle.h"
#include "lib_polinom.h"

TEST(test_lib_HashOpenShuffle, can_create_HashOpenShuffle) {
	ASSERT_NO_THROW(HashOpenShuffle hos);
}

TEST(test_lib_HashOpenShuffle, can_do_funk_add) {
	polinom pol;
	HashOpenShuffle hos;
	ASSERT_NO_THROW(hos.add("p1", pol));
}

TEST(test_lib_HashOpenShuffle, can_not_do_funk_destroyPol) {
	polinom pol;
	HashOpenShuffle hos;
	ASSERT_ANY_THROW(hos.destroyPol("p1"));
}


TEST(test_lib_HashOpenShuffle, can_do_funk_find) {
	polinom pol;
	monom mon(2, 2, 2, 2);
	pol.add_monom(mon);
	HashOpenShuffle hos;
	hos.add("p1", pol);
	ASSERT_NO_THROW(hos.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_HashOpenShuffle, can_no_do_funk_find) {
	HashOpenShuffle hos;
	ASSERT_ANY_THROW(hos.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_HashOpenShuffle, can_not_do_funk_findAndReplace) {
	polinom pol1;
	HashOpenShuffle hos;
	ASSERT_ANY_THROW(hos.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_HashOpenShuffle, can_do_funk_findAndReplace) {
	polinom pol;
	polinom pol1;
	monom mon(2, 2, 2, 2);
	pol1.add_monom(mon);
	HashOpenShuffle hos;
	hos.add("p1", pol);
	ASSERT_NO_THROW(hos.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_HashOpenShuffle, can_do_funk_isEmpty) {
	HashOpenShuffle hos;
	ASSERT_EQ(hos.isEmpty(), true);
	monom mon(2, 2, 2, 2);
	polinom pol;
	pol.add_monom(mon);
	hos.add("uo", pol);
	hos.add("p2", pol);
	hos.add("p3", pol);
	hos.add("p4", pol);
	hos.add("p5", pol);
	hos.add("p6", pol);
	ASSERT_EQ(hos.isEmpty(), false);
}