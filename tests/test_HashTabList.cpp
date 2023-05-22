#include <gtest.h>
#include "lib_HashTabList.h"
#include "lib_polinom.h"

TEST(test_lib_HashTabList, can_create_HashTabList) {
	ASSERT_NO_THROW(HashTableList htl);
}

TEST(test_lib_HashTabList, can_do_funk_add) {
	polinom pol;
	HashTableList htl;
	ASSERT_NO_THROW(htl.add("p1", pol));
}

TEST(test_lib_HashTabList, can_not_do_funk_add) {
	polinom pol;
	HashTableList htl;
	htl.add("p1", pol);
	ASSERT_ANY_THROW(htl.add("p1", pol));
}

TEST(test_lib_HashTabList, can_do_funk_destroyPol) {
	polinom pol;
	HashTableList htl;
	htl.add("p1", pol);
	ASSERT_NO_THROW(htl.destroyPol("p1"));
}

TEST(test_lib_HashTabList, can_not_do_funk_destroyPol) {
	polinom pol;
	HashTableList htl;
	ASSERT_ANY_THROW(htl.destroyPol("p1"));
}

TEST(test_lib_HashTabList, can_do_funk_find) {
	polinom pol;
	monom mon(2, 2, 2, 2);
	pol.add_monom(mon);
	HashTableList htl;
	htl.add("p1", pol);
	ASSERT_NO_THROW(htl.find("p1"));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}


TEST(test_lib_HashTableList, can_not_do_funk_findAndReplace) {
	polinom pol1;
	HashTableList htl;
	ASSERT_ANY_THROW(htl.findAndReplace("p1", pol1));
	//	EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

TEST(test_lib_HashTabList, can_do_funk_findAndReplace) {
	polinom pol;
	polinom pol1;
	monom mon(2, 2, 2, 2);
	pol1.add_monom(mon);
	HashTableList htl;
	htl.add("p1", pol);
	ASSERT_NO_THROW(htl.findAndReplace("p1", pol1));
	//EXPECT_EQ(ltm.find("p1").get_First_coef(), mon.get_coef());
}

