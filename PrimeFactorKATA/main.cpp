#include <gmock/gmock.h>

TEST (PrimeFactorTest, PrimeTest) {
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
	EXPECT_EQ(1, 1);
}

int main(int argc, char **argv) {
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
