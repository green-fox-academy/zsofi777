#include <gtest/gtest.h>
#include <iostream>

#include "Matrix180t.h"

TEST(rotateMatrix2, isok)
{
    // Arrange
    int t[3][3] = {{1, 0, 0},
                   {0, 0, 0},
                   {0, 0, 0}};
    // Act
    rotateMatrix2(t);
    std::string t1;
    std::string t2 = "000000001";

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            t1 += std::to_string(t[i][j]);
        }
    }
    // Assert
    ASSERT_EQ(t1,t2);
}

TEST(rotateMatrix2, isNotok)
{
    // Arrange
    int t[3][3] = {{1, 0, 0},
                   {0, 0, 0},
                   {0, 0, 0}};
    // Act
    rotateMatrix2(t);
    std::string t1;
    std::string t2 = "000010000";

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            t1 += std::to_string(t[i][j]);
        }
    }
    // Assert
    ASSERT_NE(t1,t2);
}

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}