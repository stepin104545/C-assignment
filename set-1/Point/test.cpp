#include "pch.h"

TEST(Point, parameter) {
	Point P1(4, 3);
	EXPECT_EQ(5, P1.distanceFromOrigin());
	EXPECT_STREQ("Q1",P1.quadrant());
	EXPECT_STREQ("NO", P1.isOrigin());
	EXPECT_STREQ("NO", P1.isOnXaxis());
}