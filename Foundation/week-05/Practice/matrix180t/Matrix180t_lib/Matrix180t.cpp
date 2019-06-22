#include "Matrix180t.h"

void rotateMatrix2(int t[3][3])
{

    const int r = 3;
    const int c = 3;

    // transpose
    for (int i = 0; i < r; ++i)
        for (int j = i + 1; j < c; ++j)
            std::swap(t[i][j], t[j][i]);

    // reverse the rows
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c / 2; ++j)
            std::swap(t[i][j], t[i][c - j - 1]);

    // transpose
    for (int i = 0; i < r; ++i)
        for (int j = i + 1; j < c; ++j)
            std::swap(t[i][j], t[j][i]);

    // reverse the rows
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c / 2; ++j)
            std::swap(t[i][j], t[i][c - j - 1]);
}