#include "Matrix_180.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(isSymmetricFunction, isSymmetric)
{
    // Arrange
    std::vector<std::vector<int>> testInput{{1, 0, 1},
                                            {0, 2, 2},
                                            {1, 2, 5}};
    // Act
    bool result = isSymmetric(testInput);
    // Assert
    ASSERT_EQ(result, true);
}

TEST(isSymmetricFunction, isNotSymmetric)
{
    // Arrange
    std::vector<std::vector<int>> testInput{{1, 0, 1},
                                            {0, 2, 3},
                                            {1, 2, 5}};
    // Act
    bool result = isSymmetric(testInput);
    // Assert
    ASSERT_EQ(result, false);
}

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
