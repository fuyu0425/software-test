#include "triangle.h"
#include <gtest/gtest.h>

TEST(Boundary_Value, normal)
{
    EXPECT_EQ(Equilateral,GetTriangleType(1,1,1));
}
TEST(Boundary_Value, robust)
{
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}