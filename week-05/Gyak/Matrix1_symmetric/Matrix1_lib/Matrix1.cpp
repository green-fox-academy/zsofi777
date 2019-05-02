#include "Matrix1.h"

bool isSymmetric(std::vector<std::vector<int>> twoDimMatrix)
{
    for (int i = 0; i < twoDimMatrix.size(); i++)
        for (int j = 0; j < twoDimMatrix.size(); j++)
            if (twoDimMatrix[i][j] != twoDimMatrix[j][i])
                return false;
    return true;
}