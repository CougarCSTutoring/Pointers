#include <limits.h>
#include "../src/pointer.h"
#include "gtest/gtest.h"

TEST(AddTest, Positive_numbers) {
	EXPECT_EQ(2, add(1,1));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}